/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)interruptionHandler;
-(id)daemonWithErrorHandler:(/*^block*/id)arg1 ;
-(id)daemonConnection;
-(void)invalidateDaemonConnection;
@end

