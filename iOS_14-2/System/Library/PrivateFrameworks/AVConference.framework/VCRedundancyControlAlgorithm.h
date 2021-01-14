/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCRedundancyControlAlgorithm <NSObject>
@property (nonatomic,readonly) unsigned redundancyPercentage; 
@property (nonatomic,readonly) double redundancyInterval; 
@optional
-(SCD_Struct_VC50*)getFecLevelPerFrameSizeVector;

@required
-(void)updateRedundancyStrategyWithNetworkStatistics:(SCD_Struct_AV33)arg1;
-(unsigned)redundancyPercentage;
-(double)redundancyInterval;

@end

