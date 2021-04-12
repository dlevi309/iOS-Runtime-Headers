/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIKeyboardDockViewDelegate.h>

@class UIKeyboardDockItem, UIButton, UIKeyboardDockView, NSString;

@interface UISystemKeyboardDockController : UIViewController <UIKeyboardDockViewDelegate> {

	BOOL _dictationHasUsedServerManualEndpointing;
	BOOL _dictationUsingServerManualEndpointing;
	BOOL _isSuppressingDockItemTouch;
	UIKeyboardDockItem* _globeDockItem;
	UIKeyboardDockItem* _dictationDockItem;
	UIKeyboardDockItem* _keyboardDockItem;
	UIButton* _stopDictationButton;
	UIKeyboardDockView* _dockView;

}

@property (nonatomic,retain) UIKeyboardDockView * dockView;              //@synthesize dockView=_dockView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(UIKeyboardDockView *)dockView;
-(void)updateDockItemsVisibility;
-(void)keyboardDockView:(id)arg1 didPressDockItem:(id)arg2 withEvent:(id)arg3 ;
-(void)keyboardItemButtonWasTapped:(id)arg1 withEvent:(id)arg2 ;
-(void)_dictationDidBeginNotification:(id)arg1 ;
-(void)setKeyboardDockItem;
-(void)dictationItemButtonWasPressed:(id)arg1 withEvent:(id)arg2 ;
-(void)globeItemButtonWasPressed:(id)arg1 withEvent:(id)arg2 ;
-(void)setDockView:(UIKeyboardDockView *)arg1 ;
@end

