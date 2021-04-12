/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCEmulatedNetworkElement.h>

@class VCEmulatedNetworkAlgorithmQueueBandwidth, VCEmulatedNetworkAlgorithmQueueLoss, VCEmulatedNetworkAlgorithmQueueDelay;

@interface VCEmulatedNetworkQueue : VCEmulatedNetworkElement {

	VCEmulatedNetworkAlgorithmQueueBandwidth* _queueBandwidthAlgorithm;
	VCEmulatedNetworkAlgorithmQueueLoss* _queueLossAlgorithm;
	VCEmulatedNetworkAlgorithmQueueDelay* _queueDelayAlgorithm;
	double _lastPolicyLoadingTime;

}
-(int)write:(id)arg1 ;
-(id)initWithPolicies:(id)arg1 ;
-(void)dealloc;
-(void)runUntilTime:(double)arg1 ;
-(int)enqueuePacket:(id)arg1 ;
-(void)markPacketLoss:(id)arg1 ;
-(void)updateSettingsAtTime:(double)arg1 ;
-(int)dequeuePacket:(id)arg1 time:(double)arg2 ;
@end

