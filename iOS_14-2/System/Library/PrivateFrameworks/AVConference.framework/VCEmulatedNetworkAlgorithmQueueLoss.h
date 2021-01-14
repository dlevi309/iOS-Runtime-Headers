/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <libobjc.A.dylib/VCEmulatedNetworkAlgorithm.h>

@class NSString;

@interface VCEmulatedNetworkAlgorithmQueueLoss : NSObject <VCEmulatedNetworkAlgorithm> {

	double _expectedProcessEndTime;
	unsigned _packetCountInNetworkQueue;
	double _networkQueueLossRate;
	unsigned _networkQueueLossPattern;
	long long _packetTypeForNetworkQueueLossPattern;
	unsigned _networkQueueMaxSize;
	int _currentIndexForLossRate;
	int _currentIndexForLossPattern;
	int _currentLossPatternShift;
	int _currentIndexForQueueSize;
	double _lastNetworkQueueLossRateLoadTime;
	double _lastNetworkQueueLossPatternLoadTime;
	double _lastNetworkQueueSizeLoadTime;

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
@end

