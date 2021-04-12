/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/


@protocol CLKComplicationDataSource <NSObject>
@optional
-(void)getTimelineEndDateForComplication:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getPrivacyBehaviorForComplication:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getTimelineAnimationBehaviorForComplication:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getAlwaysOnTemplateForComplication:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getTimelineEntriesForComplication:(id)arg1 afterDate:(id)arg2 limit:(unsigned long long)arg3 withHandler:(/*^block*/id)arg4;
-(void)getLocalizableSampleTemplateForComplication:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getComplicationDescriptorsWithHandler:(/*^block*/id)arg1;
-(void)handleSharedComplicationDescriptors:(id)arg1;
-(void)getSupportedTimeTravelDirectionsForComplication:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getNextRequestedUpdateDateWithHandler:(/*^block*/id)arg1;
-(void)requestedUpdateDidBegin;
-(void)requestedUpdateBudgetExhausted;
-(void)getPlaceholderTemplateForComplication:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getTimelineStartDateForComplication:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getTimelineEntriesForComplication:(id)arg1 beforeDate:(id)arg2 limit:(unsigned long long)arg3 withHandler:(/*^block*/id)arg4;

@required
-(void)getCurrentTimelineEntryForComplication:(id)arg1 withHandler:(/*^block*/id)arg2;

@end

