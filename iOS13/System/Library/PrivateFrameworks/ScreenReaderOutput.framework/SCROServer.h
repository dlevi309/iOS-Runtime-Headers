/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/


@protocol SCROServerDelegate;
#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class NSLock;

@interface SCROServer : NSObject {

	NSLock* _contentLock;
	id<SCROServerDelegate> _delegate;
	CFRunLoopSourceRef _serverSource;
	CFRunLoopSourceRef _deathSource;
	CFRunLoopTimerRef _deathTimer;
	unsigned _serverPort;
	unsigned _deathPort;
	long long _clientCount;
	BOOL _isRegisteredWithMach;

}
+(id)sharedServer;
-(id)init;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(CFRunLoopSourceRef)serverSource;
-(long long)_clientCount;
-(CFRunLoopTimerRef)_deathTimer;
-(BOOL)_registerWithMachServiceName:(char*)arg1 ;
-(void)unregisterWithMach;
-(long long)_incrementClientCount;
-(void)_setClientCount:(long long)arg1 ;
-(int)_registerForNotificationOnDeathPort:(unsigned)arg1 ;
-(BOOL)isRegisteredWithMach;
-(BOOL)registerWithMach;
@end

