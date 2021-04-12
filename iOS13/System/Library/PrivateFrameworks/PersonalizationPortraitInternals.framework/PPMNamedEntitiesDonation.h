/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class PETDistributionEventTracker;

@interface PPMNamedEntitiesDonation : NSObject {

	PETDistributionEventTracker* _tracker;

}

@property (nonatomic,readonly) PETDistributionEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(id)init;
-(PETDistributionEventTracker *)tracker;
-(void)trackEventWithScalar:(double)arg1 source:(PPMNamedEntityDonationSource_)arg2 algorithm:(PPMNamedEntityAlgorithm_)arg3 ;
@end

