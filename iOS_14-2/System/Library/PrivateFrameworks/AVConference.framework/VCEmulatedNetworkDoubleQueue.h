/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCEmulatedNetwork.h>

@class VCEmulatedNetworkQueue;

@interface VCEmulatedNetworkDoubleQueue : VCEmulatedNetwork {

	VCEmulatedNetworkQueue* _networkQueueA;
	VCEmulatedNetworkQueue* _networkQueueB;

}
-(void)push:(id)arg1 ;
-(id)initWithPolicies:(id)arg1 ;
-(void)dealloc;
-(void)runUntilTime:(double)arg1 ;
@end

