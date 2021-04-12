/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@class NSTimer;

@interface TVRMSSessionProxy : NSObject {

	NSTimer* _heartbeatTimer;
	double _sessionTimeout;
	double _lastHeartbeatTime;
	BOOL _isPaused;
	int _sessionIdentifier;

}

@property (assign,nonatomic) int sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(int)sessionIdentifier;
-(void)setSessionIdentifier:(int)arg1 ;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(id)initWithTimeout:(double)arg1 ;
-(void)beginHeartbeat;
-(void)endHeartbeat;
-(BOOL)sessionMatchesNotification:(id)arg1 ;
-(void)heartbeatDidFail;
-(int)heartbeatTime;
-(void)_sendHeartbeat:(id)arg1 ;
@end

