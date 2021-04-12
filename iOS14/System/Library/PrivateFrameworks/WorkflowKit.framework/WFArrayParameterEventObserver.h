/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

