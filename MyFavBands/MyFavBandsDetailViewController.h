//
//  MyFavBandsDetailViewController.h
//  MyFavBands
//
//  Created by Michael Forsberg on 9/28/14.
//  Copyright (c) 2014 Maria Vergel De Dios. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyFavBandsDetailViewController : UIViewController
{
    //1) Add Default initializers
    NSString *productName;
    CGFloat previousScale;
    CGFloat previousRotation;
    CGFloat beginX;
    CGFloat beginY;
}


@property (strong, nonatomic) IBOutlet UIImageView *productImageView;
@property (strong, nonatomic) NSString *productName;


@end
