/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject;

@interface VCConnectionHealthMonitor : NSObject {

	unsigned char _lastReportedIndex;
	ConnectionStatsHistory _statsHistory;
	opaque_pthread_rwlock_t _peerStateRWLock;
	ConnectionStatsHistory _peerStatsHistory;
	id _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	opaque_pthread_rwlock_t _stateRWLock;
	ConnectionStats _currentReceivingStats;
	ConnectionStats _tempReceivingStats;
	BOOL _firstPacketReceived;
	double _primaryConnHealthAllowedDelay;
	ConnectionStatsSequenceNumberData _secondaryConnReceivedSequenceNumberStats[1024];

}

@property (assign) id<VCConnectionHealthMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) double primaryConnHealthAllowedDelay;                        //@synthesize primaryConnHealthAllowedDelay=_primaryConnHealthAllowedDelay - In the implementation block
-(id)init;
-(id<VCConnectionHealthMonitorDelegate>)delegate;
-(void)setDelegate:(id<VCConnectionHealthMonitorDelegate>)arg1 ;
-(void)dealloc;
-(void)updateReceiveStats;
-(double)primaryConnHealthAllowedDelay;
-(unsigned)generateStatsBlob;
-(void)processPeerStatsBlob:(unsigned)arg1 ;
-(void)resetConnectionStats:(BOOL)arg1 ;
-(void)updateStatsHistory;
-(void)updateRatiosForHistory:(ConnectionStatsHistory*)arg1 withIndex:(int)arg2 ;
-(void)reportConnectionHealthWithStatsHistory:(ConnectionStatsHistory*)arg1 index:(int)arg2 isPeerStats:(BOOL)arg3 ;
-(void)resetHistory:(ConnectionStatsHistory*)arg1 ;
-(BOOL)isPrimaryConnectionImprovedFromHistory:(ConnectionStatsHistory*)arg1 withIndex:(int)arg2 ;
-(BOOL)isHistoryImproved:(char*)arg1 currentIndex:(int)arg2 ;
-(BOOL)isHistoryValid:(char*)arg1 ;
-(void)setPrimaryConnHealthAllowedDelay:(double)arg1 ;
@end

