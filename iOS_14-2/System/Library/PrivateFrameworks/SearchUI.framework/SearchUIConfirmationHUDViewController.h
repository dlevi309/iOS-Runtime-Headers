/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class SearchUIConfirmationHUDView, NSString;

@interface SearchUIConfirmationHUDViewController : UIViewController <UIViewControllerTransitioningDelegate>

@property (nonatomic,retain) SearchUIConfirmationHUDView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)init;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(SearchUIConfirmationHUDView *)view;
-(BOOL)_canShowWhileLocked;
-(long long)preferredUserInterfaceStyle;
@end

