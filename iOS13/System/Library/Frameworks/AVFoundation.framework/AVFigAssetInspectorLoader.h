/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetInspectorLoader.h>

@protocol OS_dispatch_queue;
@class AVWeakReference, AVAssetInspector, AVDispatchOnce, NSObject, NSMutableArray, NSURL;

@interface AVFigAssetInspectorLoader : AVAssetInspectorLoader {

	OpaqueFigAssetRef _figAsset;
	int _figAssetCreationStatus;
	AVWeakReference* _weakReferenceToAsset;
	AVAssetInspector* _assetInspector;
	AVDispatchOnce* _assetInspectorOnce;
	NSObject*<OS_dispatch_queue> _completionHandlerQueue;
	OpaqueFigSimpleMutexRef _loadingMutex;
	NSMutableArray* _loadingBatches;
	BOOL _loadingCanceled;
	BOOL _registeredForFigAssetNotifications;
	long long _fragmentMinderAssociationCount;
	NSURL* _URL;

}
+(void)_mapAssetKeys:(id)arg1 toFigAssetPropertySet:(id)arg2 figAssetTrackPropertySet:(id)arg3 callerName:(id)arg4 ;
+(id)_figAssetTrackMediaSelectionPropertiesArray;
+(id)_figAssetMediaSelectionPropertiesArray;
+(id)_figAssetPropertiesForKeys;
+(id)_figAssetTrackPropertiesForKeys;
-(void)dealloc;
-(id)URL;
-(SCD_Struct_AV7)duration;
-(id)asset;
-(unsigned long long)downloadToken;
-(id)resolvedURL;
-(BOOL)hasProtectedContent;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelLoading;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(OpaqueFigAssetRef)_figAsset;
-(void)_addFigAssetNotifications;
-(void)_removeFigAssetNotifications;
-(BOOL)_isStreaming;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(double)_fragmentMindingInterval;
-(void)_setFragmentMindingInterval:(double)arg1 ;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1 ;
-(void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1 ;
-(id)lyrics;
-(BOOL)isPlayable;
-(BOOL)isExportable;
-(BOOL)isReadable;
-(BOOL)isComposable;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(id)figChapterGroupInfo;
-(id)figChapters;
-(long long)firstFragmentSequenceNumber;
-(long long)fragmentCount;
-(id)initWithFigAsset:(OpaqueFigAssetRef)arg1 forAsset:(id)arg2 ;
-(id)initWithURL:(id)arg1 figAssetCreationFlags:(unsigned long long)arg2 figAssetCreationOptions:(id)arg3 forAsset:(id)arg4 ;
-(id)assetInspector;
-(id)originalNetworkContentURL;
-(BOOL)isAssociatedWithFragmentMinder;
-(OpaqueFigSimpleMutexRef)_loadingMutex;
-(long long)_statusOfValueForKey:(id)arg1 error:(id*)arg2 firstNonLoadedDependencyKey:(id*)arg3 ;
-(long long)_loadStatusForProperty:(id)arg1 figAsset:(OpaqueFigAssetRef)arg2 error:(id*)arg3 ;
-(id)_completionHandlerQueue;
-(id)_loadingBatches;
-(void)_invokeCompletionHandlerForLoadingBatches:(id)arg1 ;
@end

