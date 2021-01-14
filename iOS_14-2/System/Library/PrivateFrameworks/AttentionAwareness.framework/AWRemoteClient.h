/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
*/

#import <AttentionAwareness/AttentionAwareness-Structs.h>
#import <libobjc.A.dylib/AWRemoteClient.h>

@protocol AWRemoteClient
@required
-(void)pingWithReply:(/*^block*/id)arg1;
-(void)invalidate;
-(void)resetAttentionLostTimerWithReply:(/*^block*/id)arg1;
-(void)pollWithTimeout:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)getLastEvent:(/*^block*/id)arg1;
-(void)setClientConfig:(id)arg1 shouldReset:(BOOL)arg2 reply:(/*^block*/id)arg3;

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
-(void)pingWithReply:(/*^block*/id)arg1 ;
-(unsigned long long)samplingInterval;
-(void)initializeClientState;
-(BOOL)invalid;
-(void)updateDeadlinesForTime:(unsigned long long)arg1 ;
-(id)initWithProxy:(id)arg1 connection:(id)arg2 clientConfig:(id)arg3 clientIndex:(int)arg4 scheduler:(id)arg5 error:(id*)arg6 ;
-(void)invalidateWithHandler:(/*^block*/id)arg1 ;
-(unsigned long long)samplingDelay;
-(unsigned long long)nextTimerForTime:(unsigned long long)arg1 ;
-(BOOL)_isSamplingClient;
-(id)description;
-(void)notifyEvent:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 ;
-(void)deliverEvent:(id)arg1 ;
-(void)updateEventTimesForMask:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 ;
-(unsigned long long)nextAttentionLostTime:(BOOL*)arg1 ;
-(id)connection;
-(unsigned long long)_activeEventMask;
-(void)_resetAttentionLostTimer;
-(void)invalidate;
-(BOOL)_interestedInHIDEvent:(IOHIDEventRef)arg1 mask:(unsigned long long)arg2 metadata:(/*function pointer*/void**)arg3 ;
-(unsigned long long)nextSampleTime;
-(void)notifyEvent:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 metadata:(/*function pointer*/void**)arg3 ;
-(int)clientIndex;
-(void)resetAttentionLostTimerWithReply:(/*^block*/id)arg1 ;
-(void)deliverPollEventType:(unsigned long long)arg1 event:(id)arg2 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)reevaluateConfig;
-(NSString *)identifier;
-(void)deliverNotification:(unsigned long long)arg1 ;
-(void)notifyHIDEvent:(IOHIDEventRef)arg1 mask:(unsigned long long)arg2 timestamp:(unsigned long long)arg3 ;
-(void)pollWithTimeout:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)_setClientConfig:(id)arg1 shouldReset:(BOOL)arg2 error:(id*)arg3 ;
-(void)getLastEvent:(/*^block*/id)arg1 ;
-(void)setClientConfig:(id)arg1 shouldReset:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
@end

