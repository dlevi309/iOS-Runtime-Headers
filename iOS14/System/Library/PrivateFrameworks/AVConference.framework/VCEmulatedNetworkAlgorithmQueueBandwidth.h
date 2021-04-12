/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <libobjc.A.dylib/VCEmulatedNetworkAlgorithm.h>

@class NSDictionary, NSString;

@interface VCEmulatedNetworkAlgorithmQueueBandwidth : NSObject <VCEmulatedNetworkAlgorithm> {

	NSDictionary* _policies;
	double _expectedProcessEndTime;
	unsigned _packetCountInNetworkQueue;
	unsigned _networkQueueServiceRate;
	unsigned _networkQueueServiceRateMean;
	unsigned _networkQueueServiceRateStdDev;
	int _currentIndexForServiceRate;
	int _currentIndexForServiceRateDistribution;
	double _lastNetworkQueueServiceRateLoadTime;
	double _lastNetworkQueueServiceRateDistributionLoadTime;

}

@property (nonatomic,readonly) double expectedProcessEndTime;              //@synthesize expectedProcessEndTime=_expectedProcessEndTime - In the implementation block
@property (assign) unsigned packetCountInNetworkQueue;                     //@synthesize packetCountInNetworkQueue=_packetCountInNetworkQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)process:(id)arg1 ;
-(double)computeNetworkServiceRate;
-(void)updateSettingsAtTime:(double)arg1 impairments:(id)arg2 ;
-(double)expectedProcessEndTime;
-(unsigned)packetCountInNetworkQueue;
-(void)setPacketCountInNetworkQueue:(unsigned)arg1 ;
@end

