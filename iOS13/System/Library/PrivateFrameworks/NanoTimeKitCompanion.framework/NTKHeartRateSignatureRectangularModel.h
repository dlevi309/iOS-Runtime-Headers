/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

