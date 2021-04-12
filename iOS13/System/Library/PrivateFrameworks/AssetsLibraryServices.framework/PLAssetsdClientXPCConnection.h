/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <libobjc.A.dylib/PLXPCProxyCreating.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, PLXPCMessageLogger, PLAssetsdClientService, NSString;

@interface PLAssetsdClientXPCConnection : NSObject <PLXPCProxyCreating> {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_queue> _externalNotificationQueue;
	NSXPCConnection* _connection;
	PLXPCMessageLogger* _connectionLogger;
	PLAssetsdClientService* _assetsdClientService;
	BOOL _isShuttingDown;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)_unboostingRemoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)addBarrierBlock:(/*^block*/id)arg1 ;
-(void)handleInvalidation;
-(void)handleInterruption;
-(void)addPhotoLibraryUnavailabilityHandler:(/*^block*/id)arg1 ;
-(void)prepareToShutdown;
-(void)_postInterruptedNotification;
-(id)connectionWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_primitiveSynchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
@end

