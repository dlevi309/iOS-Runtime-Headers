/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAsset.h>
#import <AVFoundation/AVContentKeyRecipient.h>

@class AVURLAssetInternal, NSString, AVAssetResourceLoader, NSURL;

@interface AVURLAsset : AVAsset <AVContentKeyRecipient> {

	AVURLAssetInternal* _URLAsset;

}

@property (nonatomic,readonly) BOOL shouldMatchDataInCacheByURLPathComponentOnly; 
@property (nonatomic,readonly) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) AVAssetResourceLoader * resourceLoader; 
@property (nonatomic,readonly) BOOL mayRequireContentKeysForMediaDataProcessing; 
@property (nonatomic,copy,readonly) NSURL * URL; 
+(id)URLAssetWithURL:(id)arg1 options:(id)arg2 ;
+(id)audiovisualTypes;
+(BOOL)isPlayableExtendedMIMEType:(id)arg1 ;
+(id)audiovisualMIMETypes;
+(id)_figFileMIMETypes;
+(id)_figStreamingMIMETypes;
+(id)_figStreamingUTIs;
+(id)_figFileUTIs;
+(id)_figFilePathExtensions;
+(id)_fileUTTypes;
+(id)_streamingUTTypes;
+(id)_UTTypes;
+(id)_figMIMETypes;
+(id)_avfValidationPlist;
+(id)_getFigAssetiTunesStoreContentInfoFromURLAssetiTunesStoreContentInfo:(id)arg1 ;
+(id)_getFigAssetCreationOptionsFromURLAssetInitializationOptions:(id)arg1 assetLoggingIdentifier:(id)arg2 figAssetCreationFlags:(unsigned long long*)arg3 error:(id*)arg4 ;
+(id)_figHFSFileTypes;
+(id)instanceIdentifierMapTable;
+(id)userInfoObjectForURLAssetInstanceIdentifier:(id)arg1 ;
+(void)setUserInfoObject:(id)arg1 forURLAsset:(id)arg2 ;
+(id)userInfoObjectForURLAsset:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSURL *)URL;
-(NSString *)cacheKey;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(unsigned long long)downloadToken;
-(id)resolvedURL;
-(id)assetCache;
-(id)_instanceIdentifier;
-(id)tracks;
-(void)expire;
-(AVAssetResourceLoader *)resourceLoader;
-(void)cancelLoading;
-(void)_addFigAssetNotifications;
-(void)_removeFigAssetNotifications;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(id)lyrics;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(id)_absoluteURL;
-(unsigned long long)referenceRestrictions;
-(void)_tracksDidChange;
-(BOOL)_hasResourceLoaderDelegate;
-(Class)_classForFigAssetInspectorLoader;
-(void)_setAssetInspectorLoader:(id)arg1 ;
-(id)_resourceLoaderWithRemoteHandlerContext:(id)arg1 ;
-(id)_errorForFigNotificationPayload:(CFDictionaryRef)arg1 key:(CFStringRef)arg2 ;
-(void)_removeUserInfoObject;
-(Class)_classForAssetTracks;
-(void)_ensureAssetDownloadCache;
-(id)creationOptions;
-(id)_managedAssetCache;
-(BOOL)shouldMatchDataInCacheByURLPathComponentOnly;
-(BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;
-(id)identifyingTagClass;
-(id)identifyingTag;
-(id)originalNetworkContentURL;
-(id)SHA1Digest;
-(id)downloadDestinationURL;
-(BOOL)_shouldOptimizeAccessForLinearMoviePlayback;
-(void)_setUserInfoObject:(id)arg1 ;
-(BOOL)mayRequireContentKeysForMediaDataProcessing;
-(int)_attachToContentKeySession:(id)arg1 failedSinceAlreadyAttachedToAnotherSession:(BOOL*)arg2 ;
-(id)contentKeySession;
-(BOOL)_attachedToExternalContentKeySession;
-(id)_installHandlerForNSURLSessionConfiguration:(id)arg1 queue:(id)arg2 ;
@end

