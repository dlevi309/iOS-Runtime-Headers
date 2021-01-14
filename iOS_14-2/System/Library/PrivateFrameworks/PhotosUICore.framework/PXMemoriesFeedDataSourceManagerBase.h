/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSectionedDataSourceManager.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@class PHPhotoLibrary, PHFetchOptions, PHFetchResult, PXMemoriesFeedDataSource, NSString;

@interface PXMemoriesFeedDataSourceManagerBase : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver> {

	PHPhotoLibrary* _photoLibrary;
	BOOL _memoryGenerationHasStarted;
	BOOL __generatingAdditionalEntries;
	PHFetchOptions* _baseFetchOptions;
	PHFetchResult* _memoriesFetchResult;
	unsigned long long _firstUngroupedMemoryIndex;

}

@property (nonatomic,readonly) PHFetchOptions * baseFetchOptions;                                                                                          //@synthesize baseFetchOptions=_baseFetchOptions - In the implementation block
@property (assign,setter=_setGeneratingAdditionalEntries:,getter=_isGeneratingAdditionalEntries,nonatomic) BOOL _generatingAdditionalEntries;              //@synthesize _generatingAdditionalEntries=__generatingAdditionalEntries - In the implementation block
@property (nonatomic,retain) PHFetchResult * memoriesFetchResult;                                                                                          //@synthesize memoriesFetchResult=_memoriesFetchResult - In the implementation block
@property (assign,nonatomic) unsigned long long firstUngroupedMemoryIndex;                                                                                 //@synthesize firstUngroupedMemoryIndex=_firstUngroupedMemoryIndex - In the implementation block
@property (nonatomic,readonly) PXMemoriesFeedDataSource * dataSource; 
@property (nonatomic,readonly) BOOL hasAnyMemories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)baseFetchOptions;
+(id)_updatedFetchResultsForMemoriesForDatasource:(id)arg1 changeDetails:(id)arg2 changeInstance:(id)arg3 ;
+(id)generateEntriesFromMemories:(id)arg1 startingFromIndex:(unsigned long long)arg2 maximumNumberOfEntries:(unsigned long long)arg3 finalMemoryIndex:(out unsigned long long*)arg4 ;
+(BOOL)shouldGroupTogetherMemoriesWithCreationDate:(id)arg1 andCreationDate:(id)arg2 ;
+(id)mostRecentCreationDate;
-(id)createInitialDataSource;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)init;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2 ;
-(id)fetchOptions;
-(BOOL)hasAnyMemories;
-(void)resetMemoriesFetchResult;
-(void)resumeLibraryUpdates;
-(void)pauseLibraryUpdates;
-(void)_clearPendingNotificationForMemory:(id)arg1 ;
-(void)updateCurrentMemoriesNonPendingAndNotificationStatus;
-(PHFetchOptions *)baseFetchOptions;
-(PHFetchResult *)memoriesFetchResult;
-(void)setMemoriesFetchResult:(PHFetchResult *)arg1 ;
-(unsigned long long)firstUngroupedMemoryIndex;
-(void)setFirstUngroupedMemoryIndex:(unsigned long long)arg1 ;
-(void)startGeneratingMemories;
-(void)reloadMemories:(BOOL)arg1 ;
-(void)generateAdditionalEntriesIfPossible;
-(void)handleNonIncrementalFetchResultChange:(id)arg1 ;
-(void)handleIncrementalFetchResultChange:(id)arg1 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)arg2 ;
-(void)handleChangedKeyAssetsForMemories:(id)arg1 ;
-(BOOL)_isGeneratingAdditionalEntries;
-(void)_setGeneratingAdditionalEntries:(BOOL)arg1 ;
@end

