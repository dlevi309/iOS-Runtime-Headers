/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCRedundancyControlAlgorithm.h>

@class NSString;

@interface VCRedundancyControlAlgorithmVideoMultiway : NSObject <VCRedundancyControlAlgorithm> {

	unsigned _redundancyPercentage;
	double _redundancyInterval;
	double _packetLossPercentages[20];
	double _roundTripTime;
	double _packetLossThreshold;
	unsigned _targetBitrate;
	unsigned _packetLossWindowSize;
	unsigned _packetLossPercentageIndex;
	int _mode;

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
-(void)updateInternalParametersWithMode:(int)arg1 ;
-(void)updateRoundTripTimeWithStatistics:(SCD_Struct_AV33)arg1 ;
-(void)updateRedundancyPercentage;
@end

