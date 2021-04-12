/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCRedundancyControlAlgorithm <NSObject>
@property (nonatomic,readonly) unsigned redundancyPercentage; 
@property (nonatomic,readonly) double redundancyInterval; 
@required
-(void)updateRedundancyStrategyWithNetworkStatistics:(SCD_Struct_AV29)arg1;
-(unsigned)redundancyPercentage;
-(double)redundancyInterval;

@end

