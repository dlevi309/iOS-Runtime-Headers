/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/


@protocol _DKKnowledgeQuerying;
@class ATXHeuristicDevice;

@interface ATXSetAlarmTimeOfDayDataSource : NSObject {

	ATXHeuristicDevice* _device;
	id<_DKKnowledgeQuerying> _duetStore;

}
+(id)medianFrom:(id)arg1 ;
+(id)timeOfDayFromDonations:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)alarmTimeOfDay:(/*^block*/id)arg1 ;
-(id)_recentIntentDonationsForBundleId:(id)arg1 limit:(unsigned long long)arg2 ;
@end

