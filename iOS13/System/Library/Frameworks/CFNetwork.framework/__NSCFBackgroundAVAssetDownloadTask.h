/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/__NSCFBackgroundSessionTask.h>

@class NSURL, NSString, NSData, AVURLAsset, NSDictionary, NSArray, AVMediaSelection;

@interface __NSCFBackgroundAVAssetDownloadTask : __NSCFBackgroundSessionTask {

	unsigned long long _downloadToken;
	unsigned long long _AVAssetDownloadToken;
	NSURL* _URL;
	NSURL* _destinationURL;
	NSURL* _temporaryDestinationURL;
	NSString* _assetTitle;
	NSData* _assetArtworkData;
	AVURLAsset* _URLAsset;
	NSDictionary* _options;
	NSArray* _loadedTimeRanges;
	AVMediaSelection* _resolvedMediaSelection;

}

@property (assign) unsigned long long AVAssetDownloadToken;              //@synthesize AVAssetDownloadToken=_AVAssetDownloadToken - In the implementation block
@property (copy) NSURL * URL;                                            //@synthesize URL=_URL - In the implementation block
@property (copy) NSURL * destinationURL;                                 //@synthesize destinationURL=_destinationURL - In the implementation block
@property (copy) NSURL * temporaryDestinationURL;                        //@synthesize temporaryDestinationURL=_temporaryDestinationURL - In the implementation block
@property (copy) NSString * assetTitle;                                  //@synthesize assetTitle=_assetTitle - In the implementation block
@property (copy) NSData * assetArtworkData;                              //@synthesize assetArtworkData=_assetArtworkData - In the implementation block
@property (retain) AVURLAsset * URLAsset;                                //@synthesize URLAsset=_URLAsset - In the implementation block
@property (copy) NSDictionary * options;                                 //@synthesize options=_options - In the implementation block
@property (copy) NSArray * loadedTimeRanges;                             //@synthesize loadedTimeRanges=_loadedTimeRanges - In the implementation block
@property (copy) AVMediaSelection * resolvedMediaSelection;              //@synthesize resolvedMediaSelection=_resolvedMediaSelection - In the implementation block
-(void)dealloc;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(NSDictionary *)options;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(void)setOptions:(NSDictionary *)arg1 ;
-(id)response;
-(id)originalRequest;
-(id)currentRequest;
-(void)_onqueue_didFinishWithError:(id)arg1 ;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(NSURL *)destinationURL;
-(unsigned long long)AVAssetDownloadToken;
-(void)_onqueue_willDownloadToURL:(id)arg1 ;
-(void)_onqueue_didResolveMediaSelectionPropertyList:(id)arg1 ;
-(void)_onqueue_didLoadTimeRange:(id)arg1 totalTimeRangesLoaded:(id)arg2 timeRangeExpectedToLoad:(id)arg3 ;
-(void)setAVAssetDownloadToken:(unsigned long long)arg1 ;
-(void)_onqueue_didReceiveProgressUpdateWithTotalBytesWritten:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2 ;
-(void)_onqueue_didFinishDownloadingToURL:(id)arg1 ;
-(id)initWithTaskGroup:(id)arg1 URLAsset:(id)arg2 URL:(id)arg3 destinationURL:(id)arg4 temporaryDestinationURL:(id)arg5 assetTitle:(id)arg6 assetArtworkData:(id)arg7 ident:(unsigned long long)arg8 ;
-(BOOL)_isAVAssetTask;
-(id)initWithTaskInfo:(id)arg1 taskGroup:(id)arg2 ident:(unsigned long long)arg3 ;
-(NSURL *)temporaryDestinationURL;
-(void)setTemporaryDestinationURL:(NSURL *)arg1 ;
-(NSString *)assetTitle;
-(void)setAssetTitle:(NSString *)arg1 ;
-(NSData *)assetArtworkData;
-(void)setAssetArtworkData:(NSData *)arg1 ;
-(AVURLAsset *)URLAsset;
-(void)setURLAsset:(AVURLAsset *)arg1 ;
-(NSArray *)loadedTimeRanges;
-(void)setLoadedTimeRanges:(NSArray *)arg1 ;
-(AVMediaSelection *)resolvedMediaSelection;
-(void)setResolvedMediaSelection:(AVMediaSelection *)arg1 ;
@end

