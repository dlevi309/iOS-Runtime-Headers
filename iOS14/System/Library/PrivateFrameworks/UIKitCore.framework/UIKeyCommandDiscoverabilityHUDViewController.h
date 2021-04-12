/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)animateOutWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithKeyCommands:(id)arg1 keyboard:(GSKeyboardRef)arg2 ;
-(void)_updateVisualStyle;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
@end

