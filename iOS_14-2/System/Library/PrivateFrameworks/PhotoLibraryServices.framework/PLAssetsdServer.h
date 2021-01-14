/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, PLXPCMessageLogger, NSMutableSet, PLPhotoLibraryBundleController, PLBackgroundJobService, PLDistributedNotificationHandler, PLTCCObserver, NSXPCInterface, NSString;

@interface PLAssetsdServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	PLXPCMessageLogger* _connectionLogger;
	os_unfair_lock_s _servicesLock;
	NSMutableSet* _services;
	PLPhotoLibraryBundleController* _libraryBundleController;
	PLBackgroundJobService* _backgroundJobService;
	PLDistributedNotificationHandler* _distributedNotificationHandler;
	PLTCCObserver* _tccObserver;
	NSXPCInterface* _assetsdInterface;
	SCD_Struct_PL42 _resourceCacheMetrics;

}

@property (assign,nonatomic) SCD_Struct_PL42 resourceCacheMetrics;              //@synthesize resourceCacheMetrics=_resourceCacheMetrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(void)removeService:(id)arg1 ;
-(void)addService:(id)arg1 ;
-(void)handleInvalidation:(id)arg1 ;
-(void)_checkInWithLaunchd;
-(id)init;
-(void)start;
-(void)setResourceCacheMetrics:(SCD_Struct_PL42)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)logStatus;
-(void)handleInterruption:(id)arg1 ;
-(SCD_Struct_PL42)resourceCacheMetrics;
-(void)_collectCacheMetricsDataFromService:(id)arg1 ;
@end

