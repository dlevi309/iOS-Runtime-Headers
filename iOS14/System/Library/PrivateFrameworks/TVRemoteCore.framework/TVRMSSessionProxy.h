/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(id)init;
-(id)initWithTimeout:(double)arg1 ;
-(void)setSessionIdentifier:(int)arg1 ;
-(int)sessionIdentifier;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(void)dealloc;
-(void)beginHeartbeat;
-(void)endHeartbeat;
-(BOOL)sessionMatchesNotification:(id)arg1 ;
-(void)heartbeatDidFail;
-(int)heartbeatTime;
-(void)_sendHeartbeat:(id)arg1 ;
@end

