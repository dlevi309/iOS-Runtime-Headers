/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class NSDictionary;

@interface VCEmulatedNetworkElement : NSObject {

	NSDictionary* _policies;
	opaqueCMSimpleQueueRef _networkElementQueue;
	/*^block*/id _processCompleteHandler;

}

@property (nonatomic,copy) id processCompleteHandler;              //@synthesize processCompleteHandler=_processCompleteHandler - In the implementation block
-(int)write:(id)arg1 ;
-(id)initWithPolicies:(id)arg1 ;
-(void)dealloc;
-(void)runUntilTime:(double)arg1 ;
-(void)connectTo:(id)arg1 ;
-(void)setProcessCompleteHandler:(id)arg1 ;
-(void)drainAndReleasePackets;
-(void)connectFrom:(id)arg1 ;
-(id)processCompleteHandler;
@end

