/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class _UIButtonBar, UIScrollView, NSArray, NSString;

@interface _UIButtonGroupViewController : UIViewController <UIPopoverPresentationControllerDelegate> {

	_UIButtonBar* _originalOwner;
	_UIButtonBar* _buttonBar;
	UIScrollView* _scrollView;
	NSArray* _barButtonItemGroups;
	BOOL _overLightKeyboard;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)dismissIfNecessary;
-(void)_cleanupForDismissal;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(id)initWithBarButtonItemGroups:(id)arg1 fromButtonBar:(id)arg2 ;
@end

