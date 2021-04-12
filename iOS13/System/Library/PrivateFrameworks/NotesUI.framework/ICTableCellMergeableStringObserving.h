/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@protocol ICTableCellMergeableStringObserving <NSObject>
@property (nonatomic,readonly) id<ICTableUndoHelping> undoHelper; 
@property (nonatomic,readonly) BOOL shouldPreventUndoCommands; 
@required
-(void)tableCellWasEditedAtColumnID:(id)arg1 rowID:(id)arg2 edited:(unsigned long long)arg3 range:(NSRange)arg4 changeInLength:(long long)arg5;
-(id<ICTableUndoHelping>)undoHelper;
-(BOOL)shouldPreventUndoCommands;

@end

