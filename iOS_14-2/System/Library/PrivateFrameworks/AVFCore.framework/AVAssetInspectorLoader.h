/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <AVFCore/AVAsynchronousKeyValueLoading.h>

@class AVWeakReference, NSURL, NSString, NSArray;

@interface AVAssetInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {

	AVWeakReference* _weakReference;

}

@property (getter=_weakReference,nonatomic,readonly) AVWeakReference * weakReference; 
@property (nonatomic,readonly) NSURL * URL; 
@property (getter=_formatReader,nonatomic,readonly) OpaqueFigFormatReaderRef formatReader; 
@property (getter=_figAsset,nonatomic,readonly) OpaqueFigAssetRef figAsset; 
@property (getter=_playbackItem,nonatomic,readonly) OpaqueFigPlaybackItemRef playbackItem; 
@property (getter=_classForTrackInspectors,nonatomic,readonly) Class classForTrackInspectors; 
@property (nonatomic,readonly) SCD_Struct_AV6 duration; 
@property (nonatomic,readonly) NSString * lyrics; 
@property (getter=isPlayable,nonatomic,readonly) BOOL playable; 
@property (getter=isExportable,nonatomic,readonly) BOOL exportable; 
@property (getter=isReadable,nonatomic,readonly) BOOL readable; 
@property (getter=isComposable,nonatomic,readonly) BOOL composable; 
@property (getter=isCompatibleWithSavedPhotosAlbum,nonatomic,readonly) BOOL compatibleWithSavedPhotosAlbum; 
@property (nonatomic,readonly) NSArray * figChapterGroupInfo; 
@property (nonatomic,readonly) NSArray * figChapters; 
@property (nonatomic,readonly) NSURL * resolvedURL; 
@property (nonatomic,readonly) NSURL * originalNetworkContentURL; 
@property (nonatomic,readonly) unsigned long long downloadToken; 
@property (nonatomic,readonly) BOOL hasProtectedContent; 
@property (getter=_isStreaming,nonatomic,readonly) BOOL streaming; 
@property (nonatomic,readonly) long long firstFragmentSequenceNumber; 
@property (nonatomic,readonly) long long fragmentCount; 
@property (getter=isAssociatedWithFragmentMinder,nonatomic,readonly) BOOL associatedWithFragmentMinder; 
@property (assign,setter=_setFragmentMindingInterval:,getter=_fragmentMindingInterval,nonatomic) double fragmentMindingInterval; 
+(void)initialize;
-(OpaqueFigFormatReaderRef)_formatReader;
-(BOOL)isPlayable;
-(NSString *)lyrics;
-(void)cancelLoading;
-(BOOL)hasProtectedContent;
-(BOOL)isReadable;
-(long long)firstFragmentSequenceNumber;
-(id)init;
-(BOOL)isComposable;
-(void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1 ;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)_setFragmentMindingInterval:(double)arg1 ;
-(id)_createAVErrorForError:(id)arg1 andFigErrorCode:(int)arg2 ;
-(NSURL *)originalNetworkContentURL;
-(long long)fragmentCount;
-(double)_fragmentMindingInterval;
-(id)_weakReference;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_isStreaming;
-(NSArray *)figChapterGroupInfo;
-(NSArray *)figChapters;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(void)_serverHasDied;
-(NSURL *)URL;
-(Class)_classForTrackInspectors;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(BOOL)isAssociatedWithFragmentMinder;
-(OpaqueFigAssetRef)_figAsset;
-(SCD_Struct_AV6)duration;
-(unsigned long long)downloadToken;
-(id)assetInspector;
-(NSURL *)resolvedURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isExportable;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1 ;
@end

