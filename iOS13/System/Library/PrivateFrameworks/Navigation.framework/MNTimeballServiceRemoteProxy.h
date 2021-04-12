/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNTimeballServiceProxyInterface.h>
#import <libobjc.A.dylib/MNTimeballServiceProxyDelegate.h>

@protocol MNTimeballServiceProxyDelegate;
@class NSXPCConnection, MNTimeballSubscriberStore, NSString;

@interface MNTimeballServiceRemoteProxy : NSObject <MNTimeballServiceProxyInterface, MNTimeballServiceProxyDelegate> {

	NSXPCConnection* _connection;
	MNTimeballSubscriberStore* _subscriberStore;
	BOOL _requestLeeching;
	id<MNTimeballServiceProxyDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<MNTimeballServiceProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<MNTimeballServiceProxyDelegate>)delegate;
-(void)setDelegate:(id<MNTimeballServiceProxyDelegate>)arg1 ;
-(void)_closeConnection;
-(id)_remoteObjectProxy;
-(void)_openConnection;
-(void)invokeHandlerWithID:(id)arg1 forDestination:(id)arg2 update:(id)arg3 error:(id)arg4 ;
-(void)completedUpdateForHandlerID:(id)arg1 ;
-(void)didReceiveError:(id)arg1 forDestination:(id)arg2 ;
-(void)didReceiveUpdate:(id)arg1 forDestination:(id)arg2 ;
-(void)requestRoutingOptions:(long long)arg1 forDestinations:(id)arg2 freshness:(id)arg3 handlerID:(id)arg4 ;
-(void)subscribeToDestination:(id)arg1 options:(long long)arg2 refreshPolicy:(unsigned long long)arg3 ;
-(void)unsubscribeFromDestination:(id)arg1 ;
-(void)subscribeToAllDestinations;
-(void)unsubscribeFromAllDestinations;
-(void)_registerForNavdRestart;
@end

