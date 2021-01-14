/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithBarButtonItemGroups:(id)arg1 fromButtonBar:(id)arg2 createsPopoverLayoutGuides:(BOOL)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(void)dismissIfNecessary;
-(void)_cleanupForDismissal;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

