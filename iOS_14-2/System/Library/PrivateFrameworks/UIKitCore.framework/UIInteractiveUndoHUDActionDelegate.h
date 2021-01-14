/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIInteractiveUndoHUDActionDelegate <NSObject>
@required
-(void)copyOperation;
-(void)pasteOperation;
-(BOOL)canRedo;
-(BOOL)canUndo;
-(BOOL)canPaste;
-(void)cutOperation;
-(void)redo:(BOOL)arg1;
-(void)undo:(BOOL)arg1;
-(BOOL)canCopy;
-(BOOL)canCut;

@end

