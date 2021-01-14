/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVAssetDownloadSessionInternal, NSError, NSURL, NSArray, AVMediaSelection;

@interface AVAssetDownloadSession : NSObject {

	AVAssetDownloadSessionInternal* _internal;

}

@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSURL * destinationURL; 
@property (nonatomic,readonly) long long priority; 
@property (nonatomic,readonly) unsigned long long fileSize; 
@property (nonatomic,readonly) unsigned long long availableFileSize; 
@property (nonatomic,readonly) unsigned long long countOfBytesReceived; 
@property (nonatomic,readonly) unsigned long long downloadToken; 
@property (nonatomic,readonly) NSArray * loadedTimeRanges; 
@property (nonatomic,readonly) AVMediaSelection * resolvedMediaSelection; 
+(id)assetDownloadSessionWithAsset:(id)arg1 mediaSelections:(id)arg2 destinationURL:(id)arg3 options:(id)arg4 ;
+(void)registerDownloadLocation:(id)arg1 forURLAsset:(id)arg2 ;
+(id)assetDownloadSessionWithDownloadToken:(unsigned long long)arg1 ;
+(id)assetDownloadSessionWithAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
+(id)assetDownloadSessionWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(NSURL *)destinationURL;
-(void)_sendLoadedTimeRangesChangedToDelegateWithNewlyLoadedTimeRange:(id)arg1 currentLoadedTimeRanges:(id)arg2 timeRangeExpectedToLoad:(id)arg3 selectedMediaArray:(id)arg4 ;
-(id)init;
-(NSArray *)loadedTimeRanges;
-(void)start;
-(void)pause;
-(unsigned long long)fileSize;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)stop;
-(id)_common_init;
-(NSError *)error;
-(int)_primeCache;
-(id)_startOnQueue;
-(int)_setFileFigAsset:(OpaqueFigAssetRef)arg1 ;
-(void)_setupFigClientObjectAsync:(id)arg1 ;
-(void)_removeFigAssetListeners;
-(void)_removeFigPlaybackItemListeners;
-(id)initWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(id)initWithDownloadToken:(unsigned long long)arg1 ;
-(id)initWithAsset:(id)arg1 mediaSelections:(id)arg2 destinationURL:(id)arg3 options:(id)arg4 ;
-(void)startLoadingMetadata;
-(void)_transitionToTerminalStatus:(long long)arg1 error:(id)arg2 ;
-(void)_startLoadingMetadataOnQueue;
-(AVMediaSelection *)resolvedMediaSelection;
-(void)_sendDownloadFailureToDelegateWithError:(id)arg1 ;
-(void)_sendDownloadSuccessToDelegate;
-(void)_sendDidResolveMediaSelectionWithMediaSelection:(id)arg1 ;
-(OpaqueFigAssetRef)_createDuplicateFigAssetFromAVAsset:(id)arg1 ;
-(void)_sendDidFinishDownloadForMediaSelectionWithMediaSelection:(id)arg1 ;
-(void)_downloadFailureCallbackWithError:(id)arg1 ;
-(void)_transitionToTerminalStatusForDelegateCallbacksWithStatus:(long long)arg1 error:(id)arg2 ;
-(void)_downloadSuccessCallback;
-(void)_addFigAssetListeners;
-(id)_setupFigClientObjectForStreaming:(id)arg1 ;
-(id)_setupFigClientObjectForFileDownload:(id)arg1 ;
-(id)_startOnQueueFirstTime;
-(void)_transitionToTerminalStatusAsync:(long long)arg1 error:(id)arg2 ;
-(void)_addFigPlaybackItemListeners;
-(id)_verifyDownloadConfigurationForAssetType;
-(int)_readyForInspection;
-(id)_figAssetNotificationNames;
-(id)_figPlaybackItemNotificationNames;
-(void)_primeCacheOnDispatchQueue;
-(id)_errorFromAssetNotificationPayload:(id)arg1 ;
-(id)_loadedTimeRangesFromFigLoadedTimeRanges:(id)arg1 ;
-(id)_weakReference;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(NSURL *)URL;
-(id)_errorForFigNotificationPayload:(CFDictionaryRef)arg1 key:(CFStringRef)arg2 ;
-(unsigned long long)countOfBytesReceived;
-(OpaqueFigAssetRef)_figAsset;
-(unsigned long long)downloadToken;
-(long long)priority;
-(unsigned long long)availableFileSize;
-(long long)status;
-(void)dealloc;
@end

