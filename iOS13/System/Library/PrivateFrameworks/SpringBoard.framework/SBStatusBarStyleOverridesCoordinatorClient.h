/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface SBStatusBarStyleOverridesCoordinatorClient : NSObject {

	int _registeredOverrides;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _registeredOverridesQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> registeredOverridesQueue;              //@synthesize registeredOverridesQueue=_registeredOverridesQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                       //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) int registeredOverrides;                                            //@synthesize registeredOverrides=_registeredOverrides - In the implementation block
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(int)registeredOverrides;
-(void)acquireAssertionAndDeliverTapContextToClient:(id)arg1 ;
-(void)setRegisteredOverrides:(int)arg1 ;
-(id)initWithConnection:(id)arg1 andStyleOverrides:(int)arg2 ;
-(NSObject*<OS_dispatch_queue>)registeredOverridesQueue;
-(void)setRegisteredOverridesQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

