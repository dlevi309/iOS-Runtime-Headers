/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject;

@interface VCConnectionHealthMonitor : NSObject {

	opaque_pthread_rwlock_t _stateRWLock;
	unsigned char _lastReportedIndex;
	ConnectionStats _currentReceivingStats;
	ConnectionStatsHistory _statsHistory;
	opaque_pthread_rwlock_t _peerStateRWLock;
	ConnectionStatsHistory _peerStatsHistory;
	id _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (assign) id<VCConnectionHealthMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<VCConnectionHealthMonitorDelegate>)delegate;
-(void)setDelegate:(id<VCConnectionHealthMonitorDelegate>)arg1 ;
-(void)updateReceiveStats;
-(unsigned)generateStatsBlob;
-(void)processPeerStatsBlob:(unsigned)arg1 ;
-(void)receiveNewPacket:(BOOL)arg1 ;
-(void)resetConnectionStats:(BOOL)arg1 ;
-(void)updateStatsHistory;
-(void)updateRatiosForHistory:(ConnectionStatsHistory*)arg1 withIndex:(int)arg2 ;
-(void)reportConnectionHealthWithStatsHistory:(ConnectionStatsHistory*)arg1 index:(int)arg2 isPeerStats:(BOOL)arg3 ;
-(void)resetHistory:(ConnectionStatsHistory*)arg1 ;
-(BOOL)isPrimaryConnectionImprovedFromHistory:(ConnectionStatsHistory*)arg1 withIndex:(int)arg2 ;
-(BOOL)isHistoryImproved:(char*)arg1 currentIndex:(int)arg2 ;
-(BOOL)isHistoryValid:(char*)arg1 ;
@end

