/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)keyboardDockView:(id)arg1 didPressDockItem:(id)arg2 withEvent:(id)arg3 ;
-(BOOL)_canShowWhileLocked;
-(UIKeyboardDockView *)dockView;
-(void)viewDidLoad;
-(void)setDockView:(UIKeyboardDockView *)arg1 ;
-(void)loadView;
-(void)keyboardItemButtonWasTapped:(id)arg1 withEvent:(id)arg2 ;
-(void)setKeyboardDockItem;
-(void)_dictationDidBeginNotification:(id)arg1 ;
-(void)dictationItemButtonWasPressed:(id)arg1 withEvent:(id)arg2 ;
-(void)globeItemButtonWasPressed:(id)arg1 withEvent:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateDockItemsVisibility;
-(void)dealloc;
@end

