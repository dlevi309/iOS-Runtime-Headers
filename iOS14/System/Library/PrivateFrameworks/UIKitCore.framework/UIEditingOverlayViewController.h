/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>

@protocol UIInteraction;
@class UIUndoGestureInteraction, _UIActionWhenIdle;

@interface UIEditingOverlayViewController : UIViewController {

	UIUndoGestureInteraction* _undoInteraction;
	_UIActionWhenIdle* _addPencilTextInputInteractionAction;
	id<UIInteraction> _pencilTextInputInteraction;

}

@property (nonatomic,retain) UIUndoGestureInteraction * undoInteraction;                           //@synthesize undoInteraction=_undoInteraction - In the implementation block
@property (nonatomic,retain) _UIActionWhenIdle * addPencilTextInputInteractionAction;              //@synthesize addPencilTextInputInteractionAction=_addPencilTextInputInteractionAction - In the implementation block
@property (nonatomic,retain) id<UIInteraction> pencilTextInputInteraction;                         //@synthesize pencilTextInputInteraction=_pencilTextInputInteraction - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)updateEditingOverlayContainer;
-(_UIActionWhenIdle *)addPencilTextInputInteractionAction;
-(void)_addInteractions;
-(void)_removeInteractions;
-(UIUndoGestureInteraction *)undoInteraction;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)setPencilTextInputInteraction:(id<UIInteraction>)arg1 ;
-(void)_addPencilTextInputInteraction;
-(void)setAddPencilTextInputInteractionAction:(_UIActionWhenIdle *)arg1 ;
-(void)setUndoInteraction:(UIUndoGestureInteraction *)arg1 ;
-(id<UIInteraction>)pencilTextInputInteraction;
@end

