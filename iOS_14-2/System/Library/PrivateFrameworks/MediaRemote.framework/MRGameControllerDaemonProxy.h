/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <libobjc.A.dylib/GameControllerDaemonListener.h>

@protocol GameControllerDaemon;
@class NSXPCConnection, MRGameControllerDelayedEvents, NSString;

@interface MRGameControllerDaemonProxy : NSObject <GameControllerDaemonListener> {

	NSXPCConnection* _connection;
	id<GameControllerDaemon> _remote;
	MRGameControllerDelayedEvents* _delayedEvents;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultGameControllerDaemonProxy;
-(void)addController:(id)arg1 ;
-(void)removeController:(id)arg1 ;
-(void)controllerWithUDID:(unsigned long long)arg1 setData:(id)arg2 ;
-(void)controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3 ;
-(void)replyConnectedHosts:(id)arg1 ;
-(void)microControllerWithDigitizerX:(float)arg1 withY:(float)arg2 withTimeStamp:(unsigned long long)arg3 touchDown:(BOOL)arg4 ;
-(void)microControllerWithUDID:(unsigned long long)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(BOOL)arg5 ;
-(BOOL)_delayEvent:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3 withUpDelay:(double)arg4 ;
-(void)controllerID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3 ;
-(id)addEmulatedControllerWithProperties:(id)arg1 ;
-(void)removeEmulatedController:(id)arg1 ;
-(void)_openConnection;
-(void)controllerID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3 withUpDelay:(double)arg4 ;
-(void)controllerID:(unsigned long long)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(BOOL)arg5 ;
-(void)controllerID:(unsigned long long)arg1 setArrayValueX:(float)arg2 y:(float)arg3 z:(float)arg4 w:(float)arg5 forElement:(int)arg6 ;
@end

