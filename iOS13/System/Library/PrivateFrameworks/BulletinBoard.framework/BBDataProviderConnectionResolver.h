/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/BBDataProviderConnectionClientEndpoint.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSObject, NSXPCConnection, BBDataProviderConnection, NSString;

@interface BBDataProviderConnectionResolver : NSObject <NSXPCListenerDelegate, BBDataProviderConnectionClientEndpoint> {

	NSXPCListener* _wakeupListener;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connectionToServer;
	int _listeningToken;
	BBDataProviderConnection* _dataProviderConnection;

}

@property (assign,nonatomic,__weak) BBDataProviderConnection * dataProviderConnection;              //@synthesize dataProviderConnection=_dataProviderConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)xpcInterface;
+(id)resolverForConnection:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithConnection:(id)arg1 ;
-(void)ping:(/*^block*/id)arg1 ;
-(void)_registerForPublicationNotification;
-(void)setDataProviderConnection:(BBDataProviderConnection *)arg1 ;
-(void)_queue_registerWithServer:(/*^block*/id)arg1 ;
-(BBDataProviderConnection *)dataProviderConnection;
@end

