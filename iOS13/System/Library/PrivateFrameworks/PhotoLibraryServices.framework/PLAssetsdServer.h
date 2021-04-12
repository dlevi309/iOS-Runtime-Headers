/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, PLXPCMessageLogger, NSMutableSet, PLPhotoLibraryBundleController, PLBackgroundJobService, PLDistributedNotificationHandler, NSArray, NSString;

@interface PLAssetsdServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	PLXPCMessageLogger* _connectionLogger;
	os_unfair_lock_s _servicesLock;
	NSMutableSet* _services;
	PLPhotoLibraryBundleController* _libraryBundleController;
	PLBackgroundJobService* _backgroundJobService;
	PLDistributedNotificationHandler* _distributedNotificationHandler;
	NSArray* _previewRenderedContentURLs;
	NSArray* _previewAssetLocalIdentifiers;

}

@property (nonatomic,readonly) unsigned long long previewRenderedContentURLCount; 
@property (nonatomic,retain) NSArray * previewAssetLocalIdentifiers;                           //@synthesize previewAssetLocalIdentifiers=_previewAssetLocalIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)start;
-(void)handleInterruption:(id)arg1 ;
-(NSArray *)previewAssetLocalIdentifiers;
-(id)previewRenderedContentURLAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)previewRenderedContentURLCount;
-(void)logStatus;
-(void)_checkInWithLaunchd;
-(void)addService:(id)arg1 ;
-(void)removeService:(id)arg1 ;
-(void)handleInvalidation:(id)arg1 ;
-(void)setPreviewRenderedContentURLs:(id)arg1 ;
-(void)setPreviewAssetLocalIdentifiers:(NSArray *)arg1 ;
@end

