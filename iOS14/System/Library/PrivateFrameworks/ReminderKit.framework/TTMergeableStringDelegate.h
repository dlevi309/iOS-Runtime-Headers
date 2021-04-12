/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@protocol TTMergeableStringDelegate <NSObject>
@required
-(void)edited:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3;
-(void)addUndoCommand:(id)arg1;
-(void)endEditing;
-(BOOL)wantsUndoCommands;
-(void)beginEditing;

@end

