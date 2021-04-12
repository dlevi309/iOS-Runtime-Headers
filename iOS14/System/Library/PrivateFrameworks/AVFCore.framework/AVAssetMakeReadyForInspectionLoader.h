/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetInspectorLoader.h>

@class AVAssetInspector, NSMutableArray, NSURL;

@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader {

	AVAssetInspector* _assetInspector;
	OpaqueFigFormatReaderRef _formatReader;
	OpaqueFigSimpleMutexRef _loadingMutex;
	NSMutableArray* _keysAwaitingCompletion;
	long long _status;
	int _basicInspectionFailureCode;
	NSURL* _URL;

}
-(OpaqueFigFormatReaderRef)_formatReader;
-(BOOL)isPlayable;
-(id)lyrics;
-(void)cancelLoading;
-(BOOL)hasProtectedContent;
-(OpaqueFigSimpleMutexRef)_loadingMutex;
-(BOOL)isReadable;
-(long long)firstFragmentSequenceNumber;
-(id)initWithURL:(id)arg1 ;
-(BOOL)isComposable;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)_setStatus:(long long)arg1 figErrorCode:(int)arg2 ;
-(BOOL)_inspectionRequiresAFormatReader;
-(OpaqueFigFormatReaderRef)_copyFormatReaderFromFigObjectWithFigErrorCode:(int*)arg1 ;
-(id)_dictionaryOfSpecialGettersForKeyValueStatus;
-(long long)_statusOfValueWhileMutexLockedForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)arg1 ;
-(BOOL)_updateStatusWhileMutexLocked:(long long)arg1 figErrorCode:(int)arg2 ;
-(id)_getAndPruneCompletionsWhileMutexLocked;
-(id)_dictionaryOfSpecialLoadingMethodsForKeys;
-(BOOL)_providesAccurateTiming;
-(id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1 ;
-(id)_loadValuesWhileMutexLockedForKeys:(id)arg1 ;
-(id)_statusOfValueForKeyThatIsAlwaysLoaded;
-(long long)fragmentCount;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_isStreaming;
-(id)figChapterGroupInfo;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(void)_serverHasDied;
-(id)URL;
-(long long)_status;
-(SCD_Struct_AV6)duration;
-(id)assetInspector;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(BOOL)isExportable;
@end

