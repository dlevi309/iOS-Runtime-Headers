/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/

#import <UIKitCore/UIViewController.h>

@class UIWindow;

@interface UIAccessibilityPresentingViewController : UIViewController {

	UIWindow* _presentationWindow;

}
-(id)init;
-(void)dealloc;
-(void)loadView;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissViewControllerWithTransition:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)_voiceOverStatusChanged;
-(void)_cleanUpPresentationWindow;
@end

