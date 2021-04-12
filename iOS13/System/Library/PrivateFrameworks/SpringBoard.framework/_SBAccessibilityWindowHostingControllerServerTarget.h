/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBSAccessibilityWindowHostingClientToServerInterface;
@class BSServiceConnection;

@interface _SBAccessibilityWindowHostingControllerServerTarget : NSObject {

	BSServiceConnection* _connection;
	id<SBSAccessibilityWindowHostingClientToServerInterface> _proxyInterface;

}

@property (nonatomic,__weak,readonly) BSServiceConnection * connection;                                                   //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<SBSAccessibilityWindowHostingClientToServerInterface> proxyInterface;              //@synthesize proxyInterface=_proxyInterface - In the implementation block
+(id)currentTarget;
-(BSServiceConnection *)connection;
-(void)_performBlock:(/*^block*/id)arg1 ;
-(void)registerWindowWithContextID:(id)arg1 atLevel:(id)arg2 ;
-(void)unregisterWindowWithContextID:(id)arg1 ;
-(id<SBSAccessibilityWindowHostingClientToServerInterface>)proxyInterface;
-(void)setProxyInterface:(id<SBSAccessibilityWindowHostingClientToServerInterface>)arg1 ;
-(id)initWithConnection:(id)arg1 proxyInterface:(id)arg2 ;
@end

