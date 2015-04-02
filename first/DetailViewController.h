//
//  DetailViewController.h
//  first
//
//  Created by jiangshouqiang on 15/4/3.
//  Copyright (c) 2015年 jiangshouqiang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

