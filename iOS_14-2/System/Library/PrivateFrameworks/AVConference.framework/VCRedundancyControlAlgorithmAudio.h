/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCRedundancyControlAlgorithm.h>

@class NSString;

@interface VCRedundancyControlAlgorithmAudio : NSObject <VCRedundancyControlAlgorithm> {

	unsigned _redundancyPercentage;
	double _redundancyInterval;
	double _packetLossPercentageIncreaseThresholds[3];
	double _packetLossPercentageDecreaseThresholds[3];
	BOOL _isPacketLossIncreasing;
	double _packetLossPercentage;
	double _packetLossPercentageThreshold;
	unsigned _burstLossPacketCount;
	BOOL _isUplinkRecentlyCongested;

}

@property (nonatomic,readonly) unsigned redundancyPercentage;              //@synthesize redundancyPercentage=_redundancyPercentage - In the implementation block
@property (nonatomic,readonly) double redundancyInterval;                  //@synthesize redundancyInterval=_redundancyInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)updateRedundancyStrategyWithNetworkStatistics:(SCD_Struct_AV33)arg1 ;
-(unsigned)redundancyPercentage;
-(double)redundancyInterval;
-(void)computeRedundancyInfo;
-(unsigned)updateRedundancyPercentageWithPLRThresholds:(double*)arg1 ;
@end

