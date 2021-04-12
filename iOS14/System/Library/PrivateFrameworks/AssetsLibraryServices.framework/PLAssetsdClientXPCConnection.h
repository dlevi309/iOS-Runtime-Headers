/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)connectionWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_postInterruptedNotification;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_primitiveSynchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)prepareToShutdown;
-(void)addBarrierBlock:(/*^block*/id)arg1 ;
-(void)handleInterruption;
-(void)addPhotoLibraryUnavailabilityHandler:(/*^block*/id)arg1 ;
-(void)handleInvalidation;
@end

