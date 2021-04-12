/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetInspectorLoader.h>

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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(long long)_status;
-(id)URL;
-(SCD_Struct_AV7)duration;
-(BOOL)hasProtectedContent;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelLoading;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)_isStreaming;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(id)lyrics;
-(void)_serverHasDied;
-(BOOL)isPlayable;
-(BOOL)isExportable;
-(BOOL)isReadable;
-(BOOL)isComposable;
-(OpaqueFigFormatReaderRef)_formatReader;
-(id)figChapterGroupInfo;
-(long long)firstFragmentSequenceNumber;
-(long long)fragmentCount;
-(id)assetInspector;
-(void)_setStatus:(long long)arg1 figErrorCode:(int)arg2 ;
-(OpaqueFigFormatReaderRef)_copyFormatReaderFromFigObjectWithFigErrorCode:(int*)arg1 ;
-(id)_dictionaryOfSpecialGettersForKeyValueStatus;
-(long long)_statusOfValueWhileMutexLockedForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)arg1 ;
-(BOOL)_inspectionRequiresAFormatReader;
-(BOOL)_updateStatusWhileMutexLocked:(long long)arg1 figErrorCode:(int)arg2 ;
-(id)_getAndPruneCompletionsWhileMutexLocked;
-(id)_dictionaryOfSpecialLoadingMethodsForKeys;
-(id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1 ;
-(id)_loadValuesWhileMutexLockedForKeys:(id)arg1 ;
-(OpaqueFigSimpleMutexRef)_loadingMutex;
-(BOOL)_providesAccurateTiming;
-(id)_statusOfValueForKeyThatIsAlwaysLoaded;
@end

