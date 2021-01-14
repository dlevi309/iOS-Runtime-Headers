/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAsset.h>
#import <AVFCore/AVContentKeyRecipient.h>

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
+(long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1 ;
+(long long)_preferredRepresentationForItemProviderReadableTypeIdentifier:(id)arg1 ;
+(id)_objectWithItemProviderFileURL:(id)arg1 typeIdentifier:(id)arg2 isInPlace:(BOOL)arg3 error:(id*)arg4 ;
+(id)_getFigAssetCreationOptionsFromURLAssetInitializationOptions:(id)arg1 assetLoggingIdentifier:(id)arg2 figAssetCreationFlags:(unsigned long long*)arg3 error:(id*)arg4 ;
+(long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1 ;
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)URLAssetWithURL:(id)arg1 options:(id)arg2 ;
+(id)writableTypeIdentifiersForItemProvider;
+(id)readableTypeIdentifiersForItemProvider;
+(id)_UTTypes;
+(id)_figFileMIMETypes;
+(id)_figStreamingMIMETypes;
+(id)_figStreamingUTIs;
+(id)_figFileUTIs;
+(id)_figFilePathExtensions;
+(id)_fileUTTypes;
+(id)_streamingUTTypes;
+(id)_figMIMETypes;
+(id)_figHFSFileTypes;
+(id)audiovisualMIMETypes;
+(id)_avfValidationPlist;
+(id)_getFigAssetiTunesStoreContentInfoFromURLAssetiTunesStoreContentInfo:(id)arg1 ;
+(id)audiovisualTypes;
+(BOOL)isPlayableExtendedMIMEType:(id)arg1 ;
+(id)instanceIdentifierMapTable;
+(id)userInfoObjectForURLAssetInstanceIdentifier:(id)arg1 ;
+(id)userInfoObjectForURLAsset:(id)arg1 ;
+(void)setUserInfoObject:(id)arg1 forURLAsset:(id)arg2 ;
-(NSString *)cacheKey;
-(OpaqueFigFormatReaderRef)_formatReader;
-(id)lyrics;
-(void)cancelLoading;
-(id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(id)identifyingTag;
-(id)tracks;
-(id)assetCache;
-(id)_instanceIdentifier;
-(id)originalNetworkContentURL;
-(id)description;
-(void)_removeFigAssetNotifications;
-(void)_addFigAssetNotifications;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(NSURL *)URL;
-(id)_absoluteURL;
-(unsigned long long)referenceRestrictions;
-(void)_tracksDidChange;
-(BOOL)_requiresInProcessOperation;
-(BOOL)_hasResourceLoaderDelegate;
-(Class)_classForAssetTracks;
-(Class)_classForFigAssetInspectorLoader;
-(void)_setAssetInspectorLoader:(id)arg1 ;
-(id)_resourceLoaderWithRemoteHandlerContext:(id)arg1 ;
-(id)_errorForFigNotificationPayload:(CFDictionaryRef)arg1 key:(CFStringRef)arg2 ;
-(void)_removeUserInfoObject;
-(void)_ensureAssetDownloadCache;
-(id)creationOptions;
-(id)_managedAssetCache;
-(BOOL)shouldMatchDataInCacheByURLPathComponentOnly;
-(id)downloadDestinationURL;
-(BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;
-(BOOL)_shouldOptimizeAccessForLinearMoviePlayback;
-(void)_setUserInfoObject:(id)arg1 ;
-(id)contentKeySession;
-(BOOL)mayRequireContentKeysForMediaDataProcessing;
-(int)_attachToContentKeySession:(id)arg1 failedSinceAlreadyAttachedToAnotherSession:(BOOL*)arg2 ;
-(BOOL)_attachedToExternalContentKeySession;
-(id)_installHandlerForNSURLSessionConfiguration:(id)arg1 queue:(id)arg2 ;
-(id)identifyingTagClass;
-(Class)_classForTrackInspectors;
-(AVAssetResourceLoader *)resourceLoader;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(unsigned long long)downloadToken;
-(id)resolvedURL;
-(void)dealloc;
-(id)SHA1Digest;
-(void)expire;
@end

