//
//  DetailViewController.h
//  Hello Xcode
//
//  Created by Seeea on 16/7/9.
//  Copyright © 2016年 Seeea. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

