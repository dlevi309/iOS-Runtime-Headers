/*
* Generated on Thursday, January 14, 2021 at 2:29:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/Heart.healthplugin/Heart
*/

#import <libobjc.A.dylib/HKHeartRhythmAvailabilityObserver.h>

@interface Heart.HeartPromotionAvailability : _UKNOWN_SUPERCLASS_ <HKHeartRhythmAvailabilityObserver> {

	 electrocardiogramAvailabilityStatePublisher;
	 electrocardiogramAvailabilityState;
	 atrialFibrillationAvailabilityStatePublisher;
	 atrialFibrillationAvailabilityState;
	 healthStore;
	 heartRhythmAvailability;

}
-(void)heartRhythmAvailabilityDidUpdate;
@end

