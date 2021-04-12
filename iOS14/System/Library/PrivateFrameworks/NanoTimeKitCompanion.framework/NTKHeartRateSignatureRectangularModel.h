/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKHeartRateModel.h>

@class HKHeartRateSummary;

@interface NTKHeartRateSignatureRectangularModel : NTKHeartRateModel {

	HKHeartRateSummary* _mostRecentHeartRateSummary;

}

@property (nonatomic,retain) HKHeartRateSummary * mostRecentHeartRateSummary;              //@synthesize mostRecentHeartRateSummary=_mostRecentHeartRateSummary - In the implementation block
-(void)manager:(id)arg1 receivedLatestHeartRateSummary:(id)arg2 ;
-(HKHeartRateSummary *)mostRecentHeartRateSummary;
-(void)setMostRecentHeartRateSummary:(HKHeartRateSummary *)arg1 ;
@end

