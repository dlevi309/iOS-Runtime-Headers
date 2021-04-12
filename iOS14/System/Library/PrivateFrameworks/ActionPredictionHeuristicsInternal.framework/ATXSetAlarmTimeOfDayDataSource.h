/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/


@protocol _DKKnowledgeQuerying;
@class ATXHeuristicDevice;

@interface ATXSetAlarmTimeOfDayDataSource : NSObject {

	ATXHeuristicDevice* _device;
	id<_DKKnowledgeQuerying> _duetStore;

}
+(id)timeOfDayFromDonations:(id)arg1 ;
+(id)medianFrom:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)alarmTimeOfDay:(/*^block*/id)arg1 ;
-(id)_recentIntentDonationsForBundleId:(id)arg1 limit:(unsigned long long)arg2 ;
@end

