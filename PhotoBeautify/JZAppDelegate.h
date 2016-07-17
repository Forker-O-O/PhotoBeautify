//
//  JZAppDelegate.h
//  PhotoBeautify
//
//  Created by Johnny Xu(徐景周) on 7/23/14.
//  Copyright (c) 2014 Future Studio. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JZViewController.h"

@interface JZAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) UINavigationController *navigationController;
@property (strong, nonatomic) JZViewController *rootController;

@end
