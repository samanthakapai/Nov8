//
//  Nov8AppDelegate.h
//  Nov8
//
//  Created by Samantha Kapai on 12/17/12.
//  Copyright (c) 2012 Samantha Kapai. All rights reserved.
//

#import <UIKit/UIKit.h>

@class View;

@interface Nov8AppDelegate: UIResponder <UIApplicationDelegate> {
	View *view;
	UIWindow *_window;
}

@property (strong, nonatomic) UIWindow *window;
@end

