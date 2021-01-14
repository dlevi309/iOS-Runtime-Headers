/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/

#import <libobjc.A.dylib/CPSInstallationControllerDelegate.h>

@protocol OS_dispatch_queue, CPSAppInfoFetching, CPSBusinessItemFetching;
@class NSObject, NSMutableArray, CPSImageLoader, NSURL, NSError, CPSPromise, CPSClipMetadata, NSNumber, CPSClipLaunchOptions, CPSSessionConfiguration, NSString;

@interface CPSSession : NSObject <CPSInstallationControllerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _proxyObjects;
	CPSImageLoader* _imageLoader;
	NSURL* _applicationIconFileURL;
	NSURL* _heroImageFileURL;
	NSURL* _businessIconFileURL;
	long long _clipAvailabilityState;
	long long _installationState;
	long long _metadataFetchState;
	NSError* _metadataFetchError;
	BOOL _didFetchApplicationIcon;
	/*^block*/id _metadataCompletion;
	/*^block*/id _applicationIconFetchCompletion;
	CPSPromise* _businessIconFetchingPromise;
	BOOL _openingWebClipFromDaemon;
	NSURL* _url;
	CPSClipMetadata* _metadata;
	NSNumber* _estimatedProgress;
	id<CPSAppInfoFetching> _appInfoFetcher;
	id<CPSBusinessItemFetching> _businessItemFetcher;
	CPSClipLaunchOptions* _launchOptions;
	CPSSessionConfiguration* _configuration;

}

@property (nonatomic,readonly) NSURL * url;                                                                //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSURL * applicationIconFileURL; 
@property (nonatomic,readonly) CPSClipMetadata * metadata;                                                 //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSNumber * estimatedProgress;                                               //@synthesize estimatedProgress=_estimatedProgress - In the implementation block
@property (nonatomic,retain) id<CPSAppInfoFetching> appInfoFetcher;                                        //@synthesize appInfoFetcher=_appInfoFetcher - In the implementation block
@property (nonatomic,retain) id<CPSBusinessItemFetching> businessItemFetcher;                              //@synthesize businessItemFetcher=_businessItemFetcher - In the implementation block
@property (nonatomic,readonly) BOOL registeredForTest; 
@property (nonatomic,readonly) NSString * logID; 
@property (nonatomic,copy,readonly) CPSClipLaunchOptions * launchOptions;                                  //@synthesize launchOptions=_launchOptions - In the implementation block
@property (nonatomic,retain) CPSSessionConfiguration * configuration;                                      //@synthesize configuration=_configuration - In the implementation block
@property (getter=isPurgeable,nonatomic,readonly) BOOL purgeable; 
@property (assign,getter=isOpeningWebClipFromDaemon,nonatomic) BOOL openingWebClipFromDaemon;              //@synthesize openingWebClipFromDaemon=_openingWebClipFromDaemon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CPSClipLaunchOptions *)launchOptions;
-(NSString *)logID;
-(NSURL *)url;
-(CPSSessionConfiguration *)configuration;
-(BOOL)isPurgeable;
-(NSNumber *)estimatedProgress;
-(CPSClipMetadata *)metadata;
-(void)setConfiguration:(CPSSessionConfiguration *)arg1 ;
-(void)_didUpdateMetadata:(id)arg1 ;
-(id<CPSAppInfoFetching>)appInfoFetcher;
-(void)installationControllerWillStartInstall:(id)arg1 ;
-(void)installationControllerDidInstallPlaceholder:(id)arg1 ;
-(void)installationController:(id)arg1 didUpdateProgress:(double)arg2 ;
-(NSURL *)applicationIconFileURL;
-(void)installationController:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)initWithURL:(id)arg1 usingQueue:(id)arg2 ;
-(void)setBusinessItemFetcher:(id<CPSBusinessItemFetching>)arg1 ;
-(void)setAppInfoFetcher:(id<CPSAppInfoFetching>)arg1 ;
-(void)clearMetadataAndRefetch;
-(id)initWithURL:(id)arg1 usingQueue:(id)arg2 configuration:(id)arg3 ;
-(void)setPreloadedMetadata:(id)arg1 ;
-(void)_fetchBusinessMetadata;
-(id)_availabilityOptions;
-(void)_notifyObserversOfMetadataFetchResultUpdates:(id)arg1 ;
-(void)_didDetermineAvailability:(BOOL)arg1 ;
-(void)_didFinishLoadingWithError:(id)arg1 ;
-(void)_fetchBusinessIconIfNeeded;
-(void)_fetchAppMetadataWithBundleID:(id)arg1 accountInvocationPolicy:(id)arg2 ;
-(void)_fetchParentApplicationMetadataWithBundleID:(id)arg1 ;
-(BOOL)registeredForTest;
-(void)_retrieveApplicationIconWithAppIconURL:(id)arg1 clipBundleID:(id)arg2 ;
-(void)_didFetchBusinessIconWithURL:(id)arg1 ;
-(void)_evictFromCache;
-(void)fetchHeroImage;
-(void)_retrieveHeroImageWithHeroImageURL:(id)arg1 ;
-(void)_updateLocationConfirmationForRecord:(id)arg1 permissionGranted:(id)arg2 ;
-(void)_updateEntryPointForWebClip:(id)arg1 ;
-(id)_retrieveInstalledApplicationIconWithAppIconURL:(id)arg1 clipBundleID:(id)arg2 ;
-(void)_retrieveImageWithURL:(id)arg1 didFetchImage:(BOOL*)arg2 fileURL:(id*)arg3 fetchCompletion:(/*^block*/id)arg4 proxyCompletion:(/*^block*/id)arg5 ;
-(void)_updateWebClipIcon:(id)arg1 metadata:(id)arg2 ;
-(void)fetchMetadataWithCompletion:(/*^block*/id)arg1 ;
-(void)_retrieveApplicationIconWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addRemoteObjectProxy:(id)arg1 ;
-(void)removeRemoteObjectProxy:(id)arg1 ;
-(void)didCompleteTestSessionAtTime:(double)arg1 ;
-(BOOL)checkAndConsumeShowsAppAttributionBannerLaunchOption;
-(void)updateClipDataForEntryPointWithWebClip:(id)arg1 launchOptions:(id)arg2 ;
-(id<CPSBusinessItemFetching>)businessItemFetcher;
-(BOOL)isOpeningWebClipFromDaemon;
-(void)setOpeningWebClipFromDaemon:(BOOL)arg1 ;
@end
