/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@protocol TTMergeableStringDelegate <NSObject>
@required
-(void)beginEditing;
-(void)endEditing;
-(void)edited:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3;
-(BOOL)wantsUndoCommands;
-(void)addUndoCommand:(id)arg1;

@end

