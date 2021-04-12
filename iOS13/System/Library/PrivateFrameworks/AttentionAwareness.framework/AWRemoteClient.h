/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
*/

#import <AttentionAwareness/AttentionAwareness-Structs.h>
#import <libobjc.A.dylib/AWRemoteClient.h>

@protocol AWRemoteClient
@required
-(void)invalidate;
-(void)pingWithReply:(/*^block*/id)arg1;
-(void)setClientConfig:(id)arg1 shouldReset:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)getLastEvent:(/*^block*/id)arg1;
-(void)resetAttentionLostTimerWithReply:(/*^block*/id)arg1;
-(void)pollWithTimeout:(unsigned long long)arg1 reply:(/*^block*/id)arg2;

@end


@protocol OS_dispatch_queue, AWFrameworkClient;
@class NSObject, AWScheduler, NSXPCConnection, NSArray, NSSet, AWAttentionEvent, AWAttentionAwarenessConfiguration, NSString;

@interface AWRemoteClient : NSObject <AWRemoteClient> {

	NSObject*<OS_dispatch_queue> _queue;
	AWScheduler* _scheduler;
	id<AWFrameworkClient> _proxy;
	NSXPCConnection* _connection;
	unsigned long long _tagIndex;
	unsigned long long _notificationMask;
	unsigned long long _eventMask;
	unsigned long long _attentionLostEventMask;
	BOOL _sampleWhileAbsent;
	NSArray* _attentionLostTimeoutsSec;
	NSSet* _allowedHIDEventsForRemoteEvent;
	int _clientIndex;
	SCD_Struct_AW1* _clientState;
	AWAttentionEvent* _lastEvent;
	AWAttentionAwarenessConfiguration* _lastConfig;
	BOOL _invalid;
	NSString* _identifier;
	unsigned long long _samplingInterval;
	unsigned long long _samplingDelay;

}

@property (nonatomic,copy) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long samplingInterval;              //@synthesize samplingInterval=_samplingInterval - In the implementation block
@property (nonatomic,readonly) unsigned long long samplingDelay;                 //@synthesize samplingDelay=_samplingDelay - In the implementation block
@property (nonatomic,readonly) BOOL invalid;                                     //@synthesize invalid=_invalid - In the implementation block
@property (nonatomic,readonly) int clientIndex;                                  //@synthesize clientIndex=_clientIndex - In the implementation block
-(id)description;
-(void)invalidate;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)connection;
-(unsigned long long)samplingInterval;
-(BOOL)invalid;
-(void)pingWithReply:(/*^block*/id)arg1 ;
-(void)invalidateWithHandler:(/*^block*/id)arg1 ;
-(void)setClientConfig:(id)arg1 shouldReset:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(void)getLastEvent:(/*^block*/id)arg1 ;
-(void)resetAttentionLostTimerWithReply:(/*^block*/id)arg1 ;
-(void)pollWithTimeout:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithProxy:(id)arg1 connection:(id)arg2 clientConfig:(id)arg3 clientIndex:(int)arg4 scheduler:(id)arg5 error:(id*)arg6 ;
-(void)initializeClientState;
-(unsigned long long)_activeEventMask;
-(BOOL)_isSamplingClient;
-(BOOL)_setClientConfig:(id)arg1 shouldReset:(BOOL)arg2 error:(id*)arg3 ;
-(void)reevaluateConfig;
-(void)deliverNotification:(unsigned long long)arg1 ;
-(void)deliverEvent:(id)arg1 ;
-(void)deliverPollEventType:(unsigned long long)arg1 event:(id)arg2 ;
-(void)updateEventTimesForMask:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 ;
-(void)notifyEvent:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 metadata:(/*function pointer*/void**)arg3 ;
-(void)notifyEvent:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 ;
-(void)notifyHIDEvent:(IOHIDEventRef)arg1 mask:(unsigned long long)arg2 timestamp:(unsigned long long)arg3 ;
-(BOOL)_interestedInHIDEvent:(IOHIDEventRef)arg1 mask:(unsigned long long)arg2 metadata:(/*function pointer*/void**)arg3 ;
-(void)_resetAttentionLostTimer;
-(unsigned long long)nextAttentionLostTime:(BOOL*)arg1 ;
-(unsigned long long)nextSampleTime;
-(void)updateDeadlinesForTime:(unsigned long long)arg1 ;
-(unsigned long long)nextTimerForTime:(unsigned long long)arg1 ;
-(unsigned long long)samplingDelay;
-(int)clientIndex;
@end

