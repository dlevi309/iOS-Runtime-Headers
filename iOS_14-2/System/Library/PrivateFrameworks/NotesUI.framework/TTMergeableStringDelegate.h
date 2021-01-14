/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@protocol TTMergeableStringDelegate <NSObject>
@required
-(void)edited:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3;
-(void)addUndoCommand:(id)arg1;
-(void)endEditing;
-(BOOL)wantsUndoCommands;
-(void)beginEditing;

@end

