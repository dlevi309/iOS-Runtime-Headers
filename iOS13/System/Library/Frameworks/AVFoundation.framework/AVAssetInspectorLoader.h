/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>

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
@property (nonatomic,readonly) SCD_Struct_AV7 duration; 
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
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(SCD_Struct_AV7)duration;
-(unsigned long long)downloadToken;
-(NSURL *)resolvedURL;
-(BOOL)hasProtectedContent;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelLoading;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)_weakReference;
-(OpaqueFigAssetRef)_figAsset;
-(BOOL)_isStreaming;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(double)_fragmentMindingInterval;
-(void)_setFragmentMindingInterval:(double)arg1 ;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1 ;
-(void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1 ;
-(NSString *)lyrics;
-(void)_serverHasDied;
-(BOOL)isPlayable;
-(BOOL)isExportable;
-(BOOL)isReadable;
-(BOOL)isComposable;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(NSArray *)figChapterGroupInfo;
-(NSArray *)figChapters;
-(long long)firstFragmentSequenceNumber;
-(long long)fragmentCount;
-(id)assetInspector;
-(NSURL *)originalNetworkContentURL;
-(BOOL)isAssociatedWithFragmentMinder;
-(id)_createAVErrorForError:(id)arg1 andFigErrorCode:(int)arg2 ;
@end

