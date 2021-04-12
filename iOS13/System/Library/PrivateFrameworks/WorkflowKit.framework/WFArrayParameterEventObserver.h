/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol WFArrayParameterEventObserver <WFParameterEventObserver>
@optional
-(void)arrayParameter:(id)arg1 itemWasAppended:(id)arg2;
-(void)arrayParameter:(id)arg1 itemWasMovedFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
-(void)arrayParameter:(id)arg1 itemWasUpdatedAtIndex:(unsigned long long)arg2 toValue:(id)arg3;
-(void)arrayParameter:(id)arg1 itemWasDeletedAtIndex:(unsigned long long)arg2;
-(void)arrayParameter:(id)arg1 confirmDeletionOfItemAtIndex:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3;

@end

