/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/


@protocol CPSSessionProxyDelegate;
#import <ClipServices/ClipServices-Structs.h>
@class NSURL, CPSClipMetadata, NSNumber, NSString, CPSSessionConfiguration;

@interface CPSSessionProxy : NSObject {

	os_unfair_lock_s _mutableIvarLock;
	BOOL _isCheckingAppAttributionBannerCanShow;
	/*^block*/id _showAppAttributionBannerCallback;
	NSURL* _url;
	BOOL _usedByPPT;
	BOOL _originIsControlCenter;
	id<CPSSessionProxyDelegate> _delegate;
	CPSClipMetadata* _metadata;
	NSNumber* _estimatedProgress;
	NSURL* _applicationIconFileURL;
	NSURL* _heroImageFileURL;
	NSString* _launchReason;
	NSString* _sourceBundleID;
	NSString* _referrerBundleID;
	CPSSessionConfiguration* _configuration;
	double _appLaunchTime;
	NSURL* _businessIconURL;

}

@property (assign,nonatomic,__weak) id<CPSSessionProxyDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                                            //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) CPSClipMetadata * metadata;                                             //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSNumber * estimatedProgress;                                           //@synthesize estimatedProgress=_estimatedProgress - In the implementation block
@property (nonatomic,readonly) NSURL * applicationIconFileURL;                                         //@synthesize applicationIconFileURL=_applicationIconFileURL - In the implementation block
@property (nonatomic,readonly) NSURL * heroImageFileURL;                                               //@synthesize heroImageFileURL=_heroImageFileURL - In the implementation block
@property (assign,nonatomic) BOOL usedByPPT;                                                           //@synthesize usedByPPT=_usedByPPT - In the implementation block
@property (assign,nonatomic) BOOL originIsControlCenter;                                               //@synthesize originIsControlCenter=_originIsControlCenter - In the implementation block
@property (getter=isInvokedByPhysicalCode,nonatomic,readonly) BOOL invokedByPhysicalCode; 
@property (nonatomic,copy) NSString * launchReason;                                                    //@synthesize launchReason=_launchReason - In the implementation block
@property (nonatomic,copy) NSString * sourceBundleID;                                                  //@synthesize sourceBundleID=_sourceBundleID - In the implementation block
@property (nonatomic,copy) NSString * referrerBundleID;                                                //@synthesize referrerBundleID=_referrerBundleID - In the implementation block
@property (nonatomic,retain) CPSSessionConfiguration * configuration;                                  //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) double appLaunchTime;                                                   //@synthesize appLaunchTime=_appLaunchTime - In the implementation block
@property (nonatomic,readonly) NSURL * businessIconURL;                                                //@synthesize businessIconURL=_businessIconURL - In the implementation block
-(void)disconnect;
-(id)initWithURL:(id)arg1 ;
-(id<CPSSessionProxyDelegate>)delegate;
-(void)setLaunchReason:(NSString *)arg1 ;
-(NSURL *)url;
-(NSString *)sourceBundleID;
-(NSString *)referrerBundleID;
-(void)setDelegate:(id<CPSSessionProxyDelegate>)arg1 ;
-(CPSSessionConfiguration *)configuration;
-(unsigned long long)hash;
-(NSNumber *)estimatedProgress;
-(void)setReferrerBundleID:(NSString *)arg1 ;
-(CPSClipMetadata *)metadata;
-(void)cancel;
-(NSString *)launchReason;
-(BOOL)isEqual:(id)arg1 ;
-(void)setConfiguration:(CPSSessionConfiguration *)arg1 ;
-(NSURL *)applicationIconFileURL;
-(BOOL)usedByPPT;
-(void)prewarmClipWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)didUpdateMetadata:(id)arg1 ;
-(void)didFinishLoadingWithError:(id)arg1 ;
-(void)didUpdateInstallProgress:(id)arg1 ;
-(void)didInstallApplicationPlaceholder;
-(void)didRetrieveApplicationIcon:(id)arg1 ;
-(void)didRetrieveHeroImage:(id)arg1 ;
-(void)didFinishTestingAtTime:(double)arg1 ;
-(void)didRetrieveBusinessIcon:(id)arg1 ;
-(BOOL)originIsControlCenter;
-(void)setSourceBundleID:(NSString *)arg1 ;
-(void)setUsedByPPT:(BOOL)arg1 ;
-(void)setOriginIsControlCenter:(BOOL)arg1 ;
-(void)connectToService;
-(NSURL *)businessIconURL;
-(void)notifyWebClipActivationWithBundleID:(id)arg1 ;
-(void)_checkAndConsumeShowsAppAttributionBannerIfNeeded;
-(BOOL)isInvokedByPhysicalCode;
-(void)prewarmClip;
-(void)fetchClipMetadataAndImages;
-(void)installClip;
-(void)openClipWithLaunchOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getLastLaunchOptionsWithCompletion:(/*^block*/id)arg1 ;
-(void)checkAndConsumeShowsAppAttributionBannerWithCompletion:(/*^block*/id)arg1 ;
-(void)didDetermineAvailability:(BOOL)arg1 ;
-(void)remoteServiceDidCrash;
-(NSURL *)heroImageFileURL;
-(double)appLaunchTime;
@end

