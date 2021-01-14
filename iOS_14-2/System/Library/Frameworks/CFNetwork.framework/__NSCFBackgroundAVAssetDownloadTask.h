/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/__NSCFBackgroundSessionTask.h>

@class NSURL, AVURLAsset, NSDictionary, NSArray, NSString, NSData, AVMediaSelection;

@interface __NSCFBackgroundAVAssetDownloadTask : __NSCFBackgroundSessionTask {

	unsigned long long _downloadToken;
	unsigned long long _AVAssetDownloadToken;
	NSURL* _URL;
	NSURL* _destinationURL;
	AVURLAsset* _URLAsset;
	NSDictionary* _options;
	NSArray* _loadedTimeRanges;
	NSURL* _temporaryDestinationURL;
	NSString* _assetTitle;
	NSData* _assetArtworkData;
	AVMediaSelection* _resolvedMediaSelection;

}

@property (assign) unsigned long long AVAssetDownloadToken;              //@synthesize AVAssetDownloadToken=_AVAssetDownloadToken - In the implementation block
@property (copy) NSURL * URL;                                            //@synthesize URL=_URL - In the implementation block
@property (copy) NSURL * destinationURL;                                 //@synthesize destinationURL=_destinationURL - In the implementation block
@property (retain) AVURLAsset * URLAsset;                                //@synthesize URLAsset=_URLAsset - In the implementation block
@property (copy) NSDictionary * options;                                 //@synthesize options=_options - In the implementation block
@property (copy) NSArray * loadedTimeRanges;                             //@synthesize loadedTimeRanges=_loadedTimeRanges - In the implementation block
-(id)currentRequest;
-(AVURLAsset *)URLAsset;
-(NSURL *)destinationURL;
-(void)setURLAsset:(AVURLAsset *)arg1 ;
-(id)originalRequest;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(NSArray *)loadedTimeRanges;
-(void)_onqueue_didFinishDownloadingToURL:(id)arg1 ;
-(void)_onqueue_didFinishWithError:(id)arg1 ;
-(void)_onqueue_willDownloadToURL:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(id)initWithTaskInfo:(id)arg1 taskGroup:(id)arg2 ident:(unsigned long long)arg3 ;
-(BOOL)_isAVAssetTask;
-(id)initWithTaskGroup:(id)arg1 URLAsset:(id)arg2 URL:(id)arg3 destinationURL:(id)arg4 temporaryDestinationURL:(id)arg5 assetTitle:(id)arg6 assetArtworkData:(id)arg7 ident:(unsigned long long)arg8 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)setLoadedTimeRanges:(NSArray *)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)_onqueue_didFinishDownloadforMediaSelectionPropertyList:(id)arg1 ;
-(void)_onqueue_didLoadTimeRange:(id)arg1 totalTimeRangesLoaded:(id)arg2 timeRangeExpectedToLoad:(id)arg3 forMediaSelectionPropertyList:(id)arg4 ;
-(void)_onqueue_didReceiveProgressUpdateWithTotalBytesWritten:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2 ;
-(id)response;
-(NSURL *)URL;
-(void)_onqueue_didResolveMediaSelectionPropertyList:(id)arg1 ;
-(void)setAVAssetDownloadToken:(unsigned long long)arg1 ;
-(unsigned long long)AVAssetDownloadToken;
-(void)dealloc;
@end

