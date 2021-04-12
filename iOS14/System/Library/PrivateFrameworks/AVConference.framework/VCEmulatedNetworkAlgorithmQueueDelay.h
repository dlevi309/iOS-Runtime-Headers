/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <libobjc.A.dylib/VCEmulatedNetworkAlgorithm.h>

@class NSDictionary, NSString;

@interface VCEmulatedNetworkAlgorithmQueueDelay : NSObject <VCEmulatedNetworkAlgorithm> {

	NSDictionary* _policies;
	double _expectedProcessEndTime;
	unsigned _packetCountInNetworkQueue;
	unsigned _networkQueueDelay;
	unsigned _networkQueueDelayMean;
	unsigned _networkQueueDelayStdDev;
	int _currentIndexForDelay;
	int _currentIndexForDelayDistribution;
	double _lastNetworkQueueDelayLoadTime;
	double _lastNetworkQueueDelayDistributionLoadTime;

}

@property (nonatomic,readonly) double expectedProcessEndTime;              //@synthesize expectedProcessEndTime=_expectedProcessEndTime - In the implementation block
@property (assign) unsigned packetCountInNetworkQueue;                     //@synthesize packetCountInNetworkQueue=_packetCountInNetworkQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)process:(id)arg1 ;
-(void)updateSettingsAtTime:(double)arg1 impairments:(id)arg2 ;
-(double)expectedProcessEndTime;
-(unsigned)packetCountInNetworkQueue;
-(void)setPacketCountInNetworkQueue:(unsigned)arg1 ;
-(double)computeNetworkDelay;
@end

