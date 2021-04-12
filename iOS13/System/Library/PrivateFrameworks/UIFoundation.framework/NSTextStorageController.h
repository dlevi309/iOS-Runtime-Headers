/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

@class NSTextStorage;


@protocol NSTextStorageController <NSObject>
@property (retain) NSTextStorage * textStorage; 
@required
-(NSTextStorage *)textStorage;
-(void)setTextStorage:(id)arg1;
-(void)processEditingForTextStorage:(id)arg1 edited:(unsigned long long)arg2 range:(NSRange)arg3 changeInLength:(long long)arg4 invalidatedRange:(NSRange)arg5;
-(void)beginEditingTransaction;
-(void)endEditingTransaction;

@end

