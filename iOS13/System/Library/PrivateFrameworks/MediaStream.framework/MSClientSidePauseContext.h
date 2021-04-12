/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)resume;
-(void)setServer:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)server;
-(id)initWithServer:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)timerQueue;
-(MSTimerGate *)gate;
-(void)setGate:(MSTimerGate *)arg1 ;
-(void)setTimerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)timerQueueTimerFired;
-(void)timerQueuePing;
@end

