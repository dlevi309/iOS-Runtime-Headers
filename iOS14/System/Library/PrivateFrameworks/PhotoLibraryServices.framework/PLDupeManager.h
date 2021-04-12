/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMutableArray, NSMutableDictionary, NSMutableSet, PLPhotoLibrary, NSCountedSet, NSSet;

@interface PLDupeManager : NSObject {

	NSMutableArray* _normalAssetsObjectIDsToAnalyze;
	NSMutableDictionary* _cloudAssetsToAnalyze;
	NSMutableArray* _assetsWithUpdatedVisibility;
	BOOL _doneWithCloudAssets;
	BOOL _isRebuilding;
	NSMutableSet* _normalInserts;
	NSMutableSet* _cloudInserts;
	PLPhotoLibrary* _photoLibrary;
	NSCountedSet* _pauseReasons;
	NSSet* _softPauseReasons;
	double _rebuildStartTime;

}

@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
+(id)placeholderHash;
+(id)hashForAsset:(id)arg1 ;
+(BOOL)_resetDupesAnalysisInManagedObjectContext:(id)arg1 pathManager:(id)arg2 ;
+(void)_setPlaceHolderHashOnAsset:(id)arg1 ;
+(BOOL)resetDupesAnalysisForOfflineStore:(id)arg1 pathManager:(id)arg2 ;
+(BOOL)_computeHashForAsset:(id)arg1 ;
+(id)_hashForFileAtPath:(id)arg1 utiType:(id)arg2 ;
-(void)_updateVisibilityState:(short)arg1 forAsset:(id)arg2 ;
-(void)_performAnalysisTransaction:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_analyzeDupeForNormalAsset:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)resumeAnalysisWithReason:(id)arg1 ;
-(BOOL)_analyzeDupeForCloudAssetsAndHashes:(id)arg1 andPublicGlobalUUIDs:(id)arg2 forManagedObjectContext:(id)arg3 ;
-(void)_continueAnalysisForRebuildOrPause;
-(PLPhotoLibrary *)photoLibrary;
-(void)resetDupesAnalysis;
-(short)_analyzeDupesForCloudInsertsForManagedObjectContext:(id)arg1 ;
-(void)_analyzeDupesForRebuild;
-(void)launchDupeAnalysisIfNeeded;
-(void)analyzeDupesWithNormalInserts:(id)arg1 cloudInserts:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(short)_adjustCloudAssetVisibilityStateForManagedObjectContext:(id)arg1 ;
-(void)persistPublicGlobalUUIDsForAssets:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(short)_computeCloudAssetHashesForManagedObjectContext:(id)arg1 ;
-(void)pauseAnalysisWithReason:(id)arg1 ;
-(void)_noteAssetVisibilityDidChange:(id)arg1 ;
-(short)_computeAssetHashesForManagedObjectContext:(id)arg1 ;
-(id)_duplicateCloudAssetForHash:(id)arg1 orPublicGlobalUUID:(id)arg2 ;
-(void)_resetSoftPauseReasons;
-(void)_analyzeDupes;
-(void)_continueAnalysis;
-(short)_analyzeNormalAssetsForManagedObjectContext:(id)arg1 ;
-(short)_analyzeDupesForNormalInsertsForManagedObjectContext:(id)arg1 ;
-(void)_continueAnalysisForRebuild;
-(BOOL)_prepareCloudAssetsToAnalyzeForManagedObjectContext:(id)arg1 ;
-(void)_removeCloudAssetFromAnalysis:(id)arg1 ;
-(void)dealloc;
@end

