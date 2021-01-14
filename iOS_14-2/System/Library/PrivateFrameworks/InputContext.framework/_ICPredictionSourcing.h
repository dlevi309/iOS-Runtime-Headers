/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
*/


@protocol _ICPredictionSourcing
@required
-(void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
-(BOOL)doesSupportTriggerSourceType:(unsigned char)arg1;
-(void)hibernate;
-(void)predictedItemsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 handler:(/*^block*/id)arg5;
-(void)warmUp;
-(void)searchForMeCardEmailAddressesWithTimeout:(unsigned long long)arg1 handler:(/*^block*/id)arg2;
-(void)propogateMetrics:(id)arg1 data:(id)arg2;
-(id)name;
-(void)searchForMeCardRegionsWithTimeout:(unsigned long long)arg1 handler:(/*^block*/id)arg2;

@end

