/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSXPCConnection, MSTimerGate;

@interface MSClientSidePauseContext : NSObject {

	NSString* _UUID;
	NSObject*<OS_dispatch_queue> _timerQueue;
	NSXPCConnection* _server;
	MSTimerGate* _gate;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> timerQueue;              //@synthesize timerQueue=_timerQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * server;                             //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) MSTimerGate * gate;                                   //@synthesize gate=_gate - In the implementation block
-(MSTimerGate *)gate;
-(void)setServer:(NSXPCConnection *)arg1 ;
-(void)setGate:(MSTimerGate *)arg1 ;
-(id)initWithServer:(id)arg1 ;
-(NSXPCConnection *)server;
-(NSObject*<OS_dispatch_queue>)timerQueue;
-(void)resume;
-(void)timerQueueTimerFired;
-(void)timerQueuePing;
-(void)setTimerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

