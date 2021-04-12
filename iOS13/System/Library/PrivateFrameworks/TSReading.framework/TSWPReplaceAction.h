/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSWPReplaceAction <NSObject>
@required
-(long long)delta;
-(NSRange*)insertedRange;
-(void)performWithStorage:(id)arg1 delta:(long long)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 replaceBlock:(/*^block*/id)arg4;
-(unsigned long long)targetCharIndex;

@end

