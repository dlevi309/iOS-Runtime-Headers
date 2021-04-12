/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned redundancyPercentage;              //@synthesize redundancyPercentage=_redundancyPercentage - In the implementation block
@property (nonatomic,readonly) double redundancyInterval;                  //@synthesize redundancyInterval=_redundancyInterval - In the implementation block
-(id)init;
-(void)updateRedundancyStrategyWithNetworkStatistics:(SCD_Struct_AV29)arg1 ;
-(unsigned)redundancyPercentage;
-(double)redundancyInterval;
-(void)computeRedundancyInfo;
-(unsigned)updateRedundancyPercentageWithPLRThresholds:(double*)arg1 ;
@end

