/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSKFindReplaceDelegate <NSObject>
@optional
-(BOOL)findReplaceController:(id)arg1 shouldSkipSearchReference:(id)arg2;
-(void)findReplaceController:(id)arg1 didWrapInDirection:(unsigned long long)arg2;
-(void)findReplaceControllerDidFindNoResults:(id)arg1;
-(void)willScrollToReference:(id)arg1;

@required
-(void)setSelection:(id)arg1 onModel:(id)arg2 withFlags:(unsigned long long)arg3;
-(NSRange*)visibleRootIndexRange;

@end

