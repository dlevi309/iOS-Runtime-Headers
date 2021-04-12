/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>

@class UIUndoGestureInteraction;

@interface UIEditingOverlayViewController : UIViewController {

	UIUndoGestureInteraction* _undoInteraction;

}

@property (nonatomic,retain) UIUndoGestureInteraction * undoInteraction;              //@synthesize undoInteraction=_undoInteraction - In the implementation block
-(void)loadView;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_addInteractions;
-(void)_removeInteractions;
-(UIUndoGestureInteraction *)undoInteraction;
-(void)setUndoInteraction:(UIUndoGestureInteraction *)arg1 ;
-(void)updateEditingOverlayContainer;
@end

