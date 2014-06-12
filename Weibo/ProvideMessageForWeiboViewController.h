//
//  ProvideMessageForWeiboViewController.h
//  Weibo
//
//  Created by Intern on 14-4-18.
//  Copyright (c) 2014年 Intern. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ProvideMessageForWeiboViewController : UIViewController
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIButton *shareButton;

- (WBMessageObject *)messageToShare;
@end
