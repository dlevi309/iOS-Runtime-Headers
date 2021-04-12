/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
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
+(void)registerDownloadLocation:(id)arg1 forURLAsset:(id)arg2 ;
+(id)assetDownloadSessionWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
+(id)assetDownloadSessionWithDownloadToken:(unsigned long long)arg1 ;
+(id)assetDownloadSessionWithAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(NSError *)error;
-(void)pause;
-(void)stop;
-(unsigned long long)fileSize;
-(void)start;
-(long long)status;
-(NSURL *)URL;
-(long long)priority;
-(unsigned long long)countOfBytesReceived;
-(NSURL *)destinationURL;
-(unsigned long long)downloadToken;
-(NSArray *)loadedTimeRanges;
-(AVMediaSelection *)resolvedMediaSelection;
-(id)_weakReference;
-(OpaqueFigAssetRef)_figAsset;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(id)_errorForFigNotificationPayload:(CFDictionaryRef)arg1 key:(CFStringRef)arg2 ;
-(id)_common_init;
-(int)_setFileFigAsset:(OpaqueFigAssetRef)arg1 ;
-(void)_transitionToTerminalStatus:(long long)arg1 error:(id)arg2 ;
-(void)_selectMediaOptionsFromMediaSelection:(id)arg1 ;
-(void)_addFigAssetListeners;
-(void)_addFigAssetDownloaderListeners;
-(OpaqueFigAssetRef)_createDuplicateFigAssetFromAVAsset:(id)arg1 ;
-(void)_removeFigAssetListeners;
-(void)_removeFigPlaybackItemListeners;
-(void)_removeFigAssetDownloaderListeners;
-(id)initWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(id)initWithDownloadToken:(unsigned long long)arg1 ;
-(id)initWithAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(id)_verifyDownloadConfigurationForAssetType;
-(int)_primeCache;
-(int)_readyForInspection;
-(unsigned long long)availableFileSize;
-(id)_loadedTimeRangesFromFigLoadedTimeRanges:(id)arg1 ;
-(void)startLoadingMetadata;
-(void)_addFigPlaybackItemListeners;
-(id)_figAssetNotificationNames;
-(id)_figPlaybackItemNotificationNames;
-(id)_figAssetDownloaderNotificationNames;
-(void)_primeCacheOnDispatchQueue;
-(id)_errorFromAssetNotificationPayload:(id)arg1 ;
-(void)_forwardLoadedTimeRangesChangedNotification:(id)arg1 ;
@end

