/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/

#import <libobjc.A.dylib/CPSSessionObserving.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, CPSSessionProxy, NSString;

@interface CPSDaemonConnection : NSObject <CPSSessionObserving> {

	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSXPCConnection* _xpcConnection;
	NSXPCConnection* _xpcConnectionNotEntitled;
	CPSSessionProxy* _sessionProxy;

}

@property (nonatomic,readonly) NSXPCConnection * xpcConnection;                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * xpcConnectionNotEntitled;              //@synthesize xpcConnectionNotEntitled=_xpcConnectionNotEntitled - In the implementation block
@property (nonatomic,retain) CPSSessionProxy * sessionProxy;                            //@synthesize sessionProxy=_sessionProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedConnection;
-(NSXPCConnection *)xpcConnection;
-(id)init;
-(CPSSessionProxy *)sessionProxy;
-(void)stopStallingCurrentInstallationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)isClipURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)openClipWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)prewarmClipWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelPrewarmingClipWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)installClipWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchClipMetadataWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)uninstallClipWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)didDetermineAvailability:(BOOL)arg1 options:(id)arg2 ;
-(void)didUpdateMetadata:(id)arg1 ;
-(void)didFinishLoadingWithError:(id)arg1 ;
-(void)didUpdateInstallProgress:(id)arg1 ;
-(void)didInstallApplicationPlaceholder;
-(void)didRetrieveApplicationIcon:(id)arg1 ;
-(void)didRetrieveHeroImage:(id)arg1 ;
-(void)didFinishTestingAtTime:(double)arg1 ;
-(void)didRetrieveBusinessIcon:(id)arg1 ;
-(void)fetchClipMetadataWithURLHash:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)registerSessionProxy:(id)arg1 ;
-(void)unregisterSessionProxy:(id)arg1 ;
-(void)fetchClipMetadataAndImagesWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)openClipWithURL:(id)arg1 launchOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)notifyWebClipActivationWithBundleID:(id)arg1 ;
-(void)getLastLaunchOptionsWithBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)checkAndConsumeShowsAppAttributionBannerForBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remoteServiceDidCrash;
-(void)uninstallClipsWithBundleIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getUserNotificationConsentForBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmLocationWithURL:(id)arg1 inRegion:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)openClipWithInvocationUIIfNeededWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSXPCConnection *)xpcConnectionNotEntitled;
-(void)setSessionProxy:(CPSSessionProxy *)arg1 ;
@end

