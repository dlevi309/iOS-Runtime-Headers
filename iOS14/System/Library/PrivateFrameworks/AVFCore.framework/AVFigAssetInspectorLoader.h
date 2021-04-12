/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetInspectorLoader.h>

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
+(id)_figAssetTrackPropertiesForKeys;
+(id)_figAssetPropertiesForKeys;
+(id)_figAssetMediaSelectionPropertiesArray;
+(id)_figAssetTrackMediaSelectionPropertiesArray;
+(void)_mapAssetKeys:(id)arg1 toFigAssetPropertySet:(id)arg2 figAssetTrackPropertySet:(id)arg3 callerName:(id)arg4 ;
-(OpaqueFigFormatReaderRef)_formatReader;
-(BOOL)isPlayable;
-(id)lyrics;
-(void)cancelLoading;
-(BOOL)hasProtectedContent;
-(OpaqueFigSimpleMutexRef)_loadingMutex;
-(void)_invokeCompletionHandlerForLoadingBatches:(id)arg1 ;
-(BOOL)isReadable;
-(long long)firstFragmentSequenceNumber;
-(long long)_loadStatusForProperty:(id)arg1 figAsset:(OpaqueFigAssetRef)arg2 error:(id*)arg3 ;
-(id)_loadingBatches;
-(id)asset;
-(BOOL)isComposable;
-(void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1 ;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)_setFragmentMindingInterval:(double)arg1 ;
-(id)initWithURL:(id)arg1 figAssetCreationFlags:(unsigned long long)arg2 figAssetCreationOptions:(id)arg3 avAssetInitializationOptions:(id)arg4 forAsset:(id)arg5 ;
-(id)originalNetworkContentURL;
-(long long)fragmentCount;
-(double)_fragmentMindingInterval;
-(void)_removeFigAssetNotifications;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_addFigAssetNotifications;
-(BOOL)_isStreaming;
-(id)figChapterGroupInfo;
-(id)figChapters;
-(id)URL;
-(Class)_classForTrackInspectors;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(long long)_statusOfValueForKey:(id)arg1 error:(id*)arg2 firstNonLoadedDependencyKey:(id*)arg3 ;
-(BOOL)isAssociatedWithFragmentMinder;
-(id)_completionHandlerQueue;
-(OpaqueFigAssetRef)_figAsset;
-(SCD_Struct_AV6)duration;
-(unsigned long long)downloadToken;
-(id)initWithFigAsset:(OpaqueFigAssetRef)arg1 forAsset:(id)arg2 ;
-(id)assetInspector;
-(id)resolvedURL;
-(void)dealloc;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isExportable;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1 ;
@end

