/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
*/


@class NSLock, NSXPCConnection;

@interface WLDaemonConnection : NSObject {

	NSLock* _daemonLock;
	NSXPCConnection* _daemonConn;
	/*^block*/id _interruptionHandler;

}

@property (nonatomic,copy) id interruptionHandler;              //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
-(id)init;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)daemonWithErrorHandler:(/*^block*/id)arg1 ;
-(id)interruptionHandler;
-(id)daemonConnection;
-(void)invalidateDaemonConnection;
@end

