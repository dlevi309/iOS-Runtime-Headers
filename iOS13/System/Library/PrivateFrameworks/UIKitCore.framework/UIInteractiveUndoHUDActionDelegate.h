/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIInteractiveUndoHUDActionDelegate <NSObject>
@required
-(BOOL)canRedo;
-(BOOL)canUndo;
-(void)undo:(BOOL)arg1;
-(void)redo:(BOOL)arg1;
-(BOOL)canCut;
-(BOOL)canCopy;
-(BOOL)canPaste;
-(void)cutOperation;
-(void)copyOperation;
-(void)pasteOperation;

@end

