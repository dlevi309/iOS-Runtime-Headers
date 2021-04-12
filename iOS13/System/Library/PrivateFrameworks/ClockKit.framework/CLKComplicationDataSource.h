/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/


@protocol CLKComplicationDataSource <NSObject>
@optional
-(void)getTimelineStartDateForComplication:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getTimelineEndDateForComplication:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getPrivacyBehaviorForComplication:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getTimelineAnimationBehaviorForComplication:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getAlwaysOnTemplateForComplication:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getTimelineEntriesForComplication:(id)arg1 beforeDate:(id)arg2 limit:(unsigned long long)arg3 withHandler:(/*^block*/id)arg4;
-(void)getTimelineEntriesForComplication:(id)arg1 afterDate:(id)arg2 limit:(unsigned long long)arg3 withHandler:(/*^block*/id)arg4;
-(void)getNextRequestedUpdateDateWithHandler:(/*^block*/id)arg1;
-(void)requestedUpdateDidBegin;
-(void)requestedUpdateBudgetExhausted;
-(void)getLocalizableSampleTemplateForComplication:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getPlaceholderTemplateForComplication:(id)arg1 withHandler:(/*^block*/id)arg2;

@required
-(void)getSupportedTimeTravelDirectionsForComplication:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getCurrentTimelineEntryForComplication:(id)arg1 withHandler:(/*^block*/id)arg2;

@end

