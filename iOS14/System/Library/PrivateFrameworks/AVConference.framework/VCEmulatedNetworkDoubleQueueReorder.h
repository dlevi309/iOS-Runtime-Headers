/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCEmulatedNetworkDoubleQueue.h>

@interface VCEmulatedNetworkDoubleQueueReorder : VCEmulatedNetworkDoubleQueue {

	double _probability;
	double _correlation;
	BOOL _useMarkovModel;
	int _reorderGap;
	int _gap;
	int _state;

}
-(void)push:(id)arg1 ;
-(id)initWithPolicies:(id)arg1 ;
-(void)dealloc;
-(BOOL)shouldSendPacketImmediatelyMM;
@end

