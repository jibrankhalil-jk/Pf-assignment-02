#include <stdio.h>

int Calculate_shipment(int no_of_cookies, int no_of_cookies_in_box, int no_of_cookie_boxes_in_container)
{
    if (no_of_cookies > 0 && no_of_cookies_in_box > 0 && no_of_cookie_boxes_in_container > 0)
    {
        int fixedCookies = no_of_cookies / no_of_cookies_in_box; //  no of fixed cookies that can go in boxes
        int fixedBoxesInContainer = no_of_cookies_in_box / no_of_cookie_boxes_in_container;
        int fixedcontainer =   no_of_cookie_boxes_in_container / fixedBoxesInContainer;
        // sum of remaining cookies left from boxes and cokies in boxes left from cotainers
        int allcookies = (fixedCookies * fixedBoxesInContainer) * fixedcontainer;
        return allcookies;
    }
    else
    {
        return no_of_cookies; // all the cookies because no containers or no boxes
    }
}
int calculate_leftover_cookies(int no_of_cookies, int no_of_cookies_in_box, int no_of_cookie_boxes_in_container)
{

    if (no_of_cookies > 0 && no_of_cookies_in_box > 0 && no_of_cookie_boxes_in_container > 0)
    {
        int fixedCookies = no_of_cookies / no_of_cookies_in_box; //  no of fixed cookies that can go in boxes
        int fixedBoxesInContainer = no_of_cookies_in_box / no_of_cookie_boxes_in_container;
        int leftoverboxes = fixedBoxesInContainer % no_of_cookie_boxes_in_container;

        // sum of remaining cookies left from boxes and cokies in boxes left from cotainers
        return (fixedBoxesInContainer % no_of_cookies_in_box) + (leftoverboxes * no_of_cookies_in_box); // sum of remaining cookies left from boxes and
    }
    else
    {
        return no_of_cookies; // all the cookies because no containers
    }
}
int calculate_leftover_boxes(int no_of_cookies, int no_of_cookies_in_box, int no_of_cookie_boxes_in_container)
{

    if (no_of_cookies > 0 && no_of_cookies_in_box > 0 && no_of_cookie_boxes_in_container > 0)
    {
        int fixedCookies = no_of_cookies / no_of_cookies_in_box;
        int fixedBoxesInContainer = no_of_cookies_in_box / no_of_cookie_boxes_in_container;
        return fixedBoxesInContainer % no_of_cookie_boxes_in_container;
    }
    else
    {
        return no_of_cookie_boxes_in_container;
    }
}

void output_results(int noofboxes, int noofcontainer,int shipment, int leftover_cookies, int leftover_boxes)
{
    printf("\n shipments Details");
    printf("\n---------------------------------------");
    printf("\n Total Cookies %d", shipment );
    printf("\n Total Boxes %d", shipment / noofboxes );
    printf("\n Total Container to ship %d", (shipment / noofboxes) / noofcontainer);
    printf("\n---------------------------------------");

    printf("\n letover cookes %d", leftover_cookies);
    printf("\n leftover boxes  %d", leftover_boxes);
}

void input_data()
{
    int no_of_cookies, no_of_cookies_in_box, no_of_cookie_boxes_in_container;
    printf("Enter number of cookies : "),
        scanf("%d", &no_of_cookies);
    printf("Enter number of cookie boxes : "),
        scanf("%d", &no_of_cookies_in_box);
    printf("Enter number of cookie boxes in contaier : "),
        scanf("%d", &no_of_cookie_boxes_in_container);

    int shipment = Calculate_shipment(no_of_cookies, no_of_cookies_in_box, no_of_cookie_boxes_in_container);
    int leftover_cookies = calculate_leftover_cookies(no_of_cookies, no_of_cookies_in_box, no_of_cookie_boxes_in_container),
        leftover_boxes = calculate_leftover_boxes(no_of_cookies, no_of_cookies_in_box, no_of_cookie_boxes_in_container);

    output_results(no_of_cookies_in_box,no_of_cookie_boxes_in_container,shipment, leftover_cookies, leftover_boxes);
}

int main()
{
    input_data();
    return 0;
}