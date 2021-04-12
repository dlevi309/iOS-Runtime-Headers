/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUILibraryMediaItem_iOS.h>
#import <libobjc.A.dylib/TVPMediaItemReportingDelegate.h>
#import <libobjc.A.dylib/TVPContentKeyLoading.h>
#import <libobjc.A.dylib/VUIStoreFPSKeyLoaderDelegate.h>

@class NSNumber, NSURL, NSDictionary, VUIStoreFPSKeyLoader, VUIStoreDownloadMonitor, NSObject, NSError, NSString;

@interface VUIStoreMediaItem_iOS : VUILibraryMediaItem_iOS <TVPMediaItemReportingDelegate, TVPContentKeyLoading, VUIStoreFPSKeyLoaderDelegate> {

	BOOL _needsRentalCheckin;
	NSNumber* _startTime;
	NSURL* _fpsCertificateURL;
	NSURL* _fpsKeyServerURL;
	NSDictionary* _fpsAdditionalServerParams;
	unsigned long long _loadingContext;
	NSDictionary* _sinfsDict;
	NSNumber* _fileSize;
	NSURL* _downloadDestinationURL;
	NSNumber* _downloadToken;
	VUIStoreFPSKeyLoader* _storeFPSKeyLoader;
	long long _playbackType;
	NSURL* _playbackURL;
	VUIStoreDownloadMonitor* _downloadMonitor;
	NSObject* _parentReportingToken;
	NSError* _fpsKeyError;

}

@property (assign,nonatomic) unsigned long long loadingContext;                      //@synthesize loadingContext=_loadingContext - In the implementation block
@property (nonatomic,retain) NSDictionary * sinfsDict;                               //@synthesize sinfsDict=_sinfsDict - In the implementation block
@property (nonatomic,retain) NSNumber * fileSize;                                    //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,retain) NSURL * downloadDestinationURL;                         //@synthesize downloadDestinationURL=_downloadDestinationURL - In the implementation block
@property (nonatomic,retain) NSNumber * downloadToken;                               //@synthesize downloadToken=_downloadToken - In the implementation block
@property (nonatomic,retain) VUIStoreFPSKeyLoader * storeFPSKeyLoader;               //@synthesize storeFPSKeyLoader=_storeFPSKeyLoader - In the implementation block
@property (assign,nonatomic) long long playbackType;                                 //@synthesize playbackType=_playbackType - In the implementation block
@property (nonatomic,retain) NSURL * playbackURL;                                    //@synthesize playbackURL=_playbackURL - In the implementation block
@property (nonatomic,retain) VUIStoreDownloadMonitor * downloadMonitor;              //@synthesize downloadMonitor=_downloadMonitor - In the implementation block
@property (assign,nonatomic) BOOL needsRentalCheckin;                                //@synthesize needsRentalCheckin=_needsRentalCheckin - In the implementation block
@property (nonatomic,retain) NSObject * parentReportingToken;                        //@synthesize parentReportingToken=_parentReportingToken - In the implementation block
@property (nonatomic,retain) NSError * fpsKeyError;                                  //@synthesize fpsKeyError=_fpsKeyError - In the implementation block
@property (assign,nonatomic) NSNumber * startTime;                                   //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy) NSURL * fpsCertificateURL;                                //@synthesize fpsCertificateURL=_fpsCertificateURL - In the implementation block
@property (nonatomic,copy) NSURL * fpsKeyServerURL;                                  //@synthesize fpsKeyServerURL=_fpsKeyServerURL - In the implementation block
@property (nonatomic,copy) NSDictionary * fpsAdditionalServerParams;                 //@synthesize fpsAdditionalServerParams=_fpsAdditionalServerParams - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(NSNumber *)fileSize;
-(NSNumber *)startTime;
-(NSNumber *)downloadToken;
-(void)setStartTime:(NSNumber *)arg1 ;
-(void)setFileSize:(NSNumber *)arg1 ;
-(void)setDownloadToken:(NSNumber *)arg1 ;
-(NSURL *)downloadDestinationURL;
-(id)_rentalExpirationDate;
-(long long)playbackType;
-(void)setPlaybackType:(long long)arg1 ;
-(unsigned long long)loadingContext;
-(void)setLoadingContext:(unsigned long long)arg1 ;
-(id)mediaItemURL;
-(id)initWithAdamID:(long long)arg1 ;
-(id)initWithMPMediaItem:(id)arg1 ;
-(id)mediaItemMetadataForProperty:(id)arg1 ;
-(void)storeFPSKeyLoader:(id)arg1 willFailWithError:(id)arg2 forKeyRequest:(id)arg3 ;
-(void)storeFPSKeyLoader:(id)arg1 didLoadOfflineKeyData:(id)arg2 forKeyRequest:(id)arg3 ;
-(void)storeFPSKeyLoader:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2 playbackStartDate:(id)arg3 ;
-(BOOL)hasTrait:(id)arg1 ;
-(void)loadFairPlayStreamingKeyRequests:(id)arg1 ;
-(id)reportingDelegate;
-(void)prepareForLoadingWithCompletion:(/*^block*/id)arg1 ;
-(void)prepareForPlaybackInitiationWithCompletion:(/*^block*/id)arg1 ;
-(id)replacementErrorForPlaybackError:(id)arg1 ;
-(void)mediaItemAllInitialLoadingComplete:(id)arg1 totalTime:(double)arg2 player:(id)arg3 ;
-(void)cleanUpMediaItem;
-(void)setFpsCertificateURL:(NSURL *)arg1 ;
-(void)setFpsKeyServerURL:(NSURL *)arg1 ;
-(NSURL *)playbackURL;
-(NSURL *)fpsCertificateURL;
-(NSURL *)fpsKeyServerURL;
-(void)setPlaybackURL:(NSURL *)arg1 ;
-(NSDictionary *)fpsAdditionalServerParams;
-(void)setFpsAdditionalServerParams:(NSDictionary *)arg1 ;
-(void)_externalPlaybackTypeDidChange:(id)arg1 ;
-(BOOL)_loadingCancelled:(unsigned long long)arg1 ;
-(id)_adamIDString;
-(NSDictionary *)sinfsDict;
-(id)_iTunesStoreContentInfo;
-(void)setFpsKeyError:(NSError *)arg1 ;
-(id)_videoPlaybackTypeDescription;
-(void)_configureForStreamingPlaybackWithCompletion:(/*^block*/id)arg1 ;
-(void)_configureForLocalPlaybackWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_downloadForThisMediaItemReturningDownloadManager:(id*)arg1 ;
-(void)_configureForPlaybackFromExistingDownload:(id)arg1 downloadManager:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setNeedsRentalCheckin:(BOOL)arg1 ;
-(void)_checkoutRentalWithCheckoutType:(unsigned long long)arg1 startPlaybackClock:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(NSError *)fpsKeyError;
-(BOOL)needsRentalCheckin;
-(void)_checkInRental;
-(void)_deleteDownloadKeyCookieForURL:(id)arg1 ;
-(void)setSinfsDict:(NSDictionary *)arg1 ;
-(void)setDownloadDestinationURL:(NSURL *)arg1 ;
-(void)setDownloadMonitor:(VUIStoreDownloadMonitor *)arg1 ;
-(void)setParentReportingToken:(NSObject *)arg1 ;
-(VUIStoreFPSKeyLoader *)storeFPSKeyLoader;
-(void)setStoreFPSKeyLoader:(VUIStoreFPSKeyLoader *)arg1 ;
-(void)_updateRentalPlaybackStartDate:(id)arg1 ;
-(id)_offlineKeyDataForKeyRequest:(id)arg1 ;
-(void)_persistOfflineKeyData:(id)arg1 forKeyRequest:(id)arg2 ;
-(void)_setDownloadKeyCookieWithURL:(id)arg1 downloadKey:(id)arg2 ;
-(void)_performStreamingRedownloadWithCompletion:(/*^block*/id)arg1 ;
-(id)_iTunesStoreContentPurchasedMediaKind;
-(id)_rentalPlaybackEndDate;
-(id)_rentalEndDate;
-(VUIStoreDownloadMonitor *)downloadMonitor;
-(NSObject *)parentReportingToken;
@end

