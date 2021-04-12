/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>

@class NSArray, UIKeyCommandDiscoverabilityHUDView;

@interface UIKeyCommandDiscoverabilityHUDViewController : UIViewController {

	NSArray* _keyCommands;
	GSKeyboardRef _keyboard;

}

@property (nonatomic,retain) UIKeyCommandDiscoverabilityHUDView * view; 
-(void)dealloc;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)_updateVisualStyle;
-(id)initWithKeyCommands:(id)arg1 keyboard:(GSKeyboardRef)arg2 ;
-(void)animateOutWithCompletion:(/*^block*/id)arg1 ;
@end

