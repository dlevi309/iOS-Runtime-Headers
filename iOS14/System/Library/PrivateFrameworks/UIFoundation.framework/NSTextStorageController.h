/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

@class NSTextStorage;


@protocol NSTextStorageController <NSObject>
@property (retain) NSTextStorage * textStorage; 
@required
-(void)performEditingTransactionForTextStorage:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)setTextStorage:(id)arg1;
-(void)processEditingForTextStorage:(id)arg1 edited:(unsigned long long)arg2 range:(NSRange)arg3 changeInLength:(long long)arg4 invalidatedRange:(NSRange)arg5;
-(NSTextStorage *)textStorage;

@end

