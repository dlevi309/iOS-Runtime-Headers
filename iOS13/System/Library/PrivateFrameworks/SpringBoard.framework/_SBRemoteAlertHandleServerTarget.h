/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBSRemoteAlertHandleServiceServerInterface.h>

@protocol SBSRemoteAlertHandleServiceServerInterface;
@class BSServiceConnection;

@interface _SBRemoteAlertHandleServerTarget : NSObject <SBSRemoteAlertHandleServiceServerInterface> {

	BSServiceConnection* _connection;
	id<SBSRemoteAlertHandleServiceServerInterface> _proxyInterface;

}

@property (nonatomic,__weak,readonly) BSServiceConnection * connection;                                         //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<SBSRemoteAlertHandleServiceServerInterface> proxyInterface;              //@synthesize proxyInterface=_proxyInterface - In the implementation block
+(id)currentTarget;
-(BSServiceConnection *)connection;
-(void)_performBlock:(/*^block*/id)arg1 ;
-(id)remoteAlertHandleContextsForDefinition:(id)arg1 allowsCreationValue:(id)arg2 configurationContext:(id)arg3 ;
-(id)createRemoteAlertHandleContextWithDefinition:(id)arg1 configurationContext:(id)arg2 ;
-(oneway void)activateRemoteAlertHandleWithID:(id)arg1 activationContext:(id)arg2 ;
-(oneway void)invalidateRemoteAlertHandleWithID:(id)arg1 ;
-(id<SBSRemoteAlertHandleServiceServerInterface>)proxyInterface;
-(void)setProxyInterface:(id<SBSRemoteAlertHandleServiceServerInterface>)arg1 ;
-(id)initWithConnection:(id)arg1 proxyInterface:(id)arg2 ;
@end

