/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXMemoriesFeedDataSourceManagerBase.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface PXMemoriesFeedDataSourceManager : PXMemoriesFeedDataSourceManagerBase <PXPhotoLibraryUIChangeObserver> {

	NSObject*<OS_dispatch_queue> _privateWorkQueue;
	unsigned long long _workTag;
	BOOL __generatingAdditionalEntries;

}

@property (assign,setter=_setGeneratingAdditionalEntries:,getter=_isGeneratingAdditionalEntries,nonatomic) BOOL _generatingAdditionalEntries;              //@synthesize _generatingAdditionalEntries=__generatingAdditionalEntries - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)startGeneratingMemories;
-(void)reloadMemories:(BOOL)arg1 ;
-(void)generateAdditionalEntriesWithOldDataSource:(id)arg1 startingIndex:(unsigned long long)arg2 sync:(BOOL)arg3 ;
-(void)generateAdditionalEntriesIfPossible;
-(id)objectReferenceForMemory:(id)arg1 ;
-(void)_generateAdditionalEntriesWithOldDataSource:(id)arg1 startingIndex:(unsigned long long)arg2 sync:(BOOL)arg3 ;
-(void)_handleFinishedGeneratingAdditionalEntriesWithNewDataSource:(id)arg1 changeDetails:(id)arg2 firstUngroupedMemoryIndex:(unsigned long long)arg3 ;
-(void)handleNonIncrementalFetchResultChange:(id)arg1 ;
-(void)handleIncrementalFetchResultChange:(id)arg1 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)arg2 ;
-(void)handleChangedKeyAssetsForMemories:(id)arg1 ;
-(unsigned long long)_indexOfEntryForMemory:(id)arg1 inSortedEntries:(id)arg2 options:(unsigned long long)arg3 ;
-(unsigned long long)_indexOfEntry:(id)arg1 inSortedEntries:(id)arg2 options:(unsigned long long)arg3 ;
-(BOOL)_isGeneratingAdditionalEntries;
-(void)_setGeneratingAdditionalEntries:(BOOL)arg1 ;
@end

