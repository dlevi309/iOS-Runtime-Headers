/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PHAssetCollectionDataSource;
@class NSHashTable, NSMapTable, NSMutableSet, NSSet, NSOrderedSet, NSDictionary, NSArray, PXSelectionSnapshot;

@interface PUPhotoSelectionManager : NSObject <NSCopying> {

	NSHashTable* _changeObservers;
	NSMapTable* _selectionEntriesByAssetCollection;
	NSMutableSet* _uniqueAssetSelection;
	long long _selectionChangeCount;
	long long _options;
	id<PHAssetCollectionDataSource> _dataSource;

}

@property (nonatomic,readonly) long long options;                                            //@synthesize options=_options - In the implementation block
@property (assign,nonatomic,__weak) id<PHAssetCollectionDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) BOOL isAnyAssetSelected; 
@property (nonatomic,readonly) NSSet * selectedAssets; 
@property (nonatomic,readonly) NSOrderedSet * orderedSelectedAssets; 
@property (nonatomic,readonly) NSDictionary * selectedAssetsByAssetCollection; 
@property (nonatomic,readonly) NSArray * selectedAssetCollections; 
@property (nonatomic,readonly) PXSelectionSnapshot * selectionSnapshot; 
-(void)registerChangeObserver:(id)arg1 ;
-(PXSelectionSnapshot *)selectionSnapshot;
-(id)initWithOptions:(long long)arg1 ;
-(void)unregisterChangeObserver:(id)arg1 ;
-(BOOL)isAnyAssetSelectedInAssetCollection:(id)arg1 ;
-(id)init;
-(void)selectAssetAtIndex:(unsigned long long)arg1 inAssetCollection:(id)arg2 ;
-(long long)options;
-(id<PHAssetCollectionDataSource>)dataSource;
-(BOOL)areAllAssetsSelectedInAssetCollection:(id)arg1 ;
-(id)_selectionEntryForAssetCollection:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)deselectAssetAtIndex:(unsigned long long)arg1 inAssetCollection:(id)arg2 ;
-(void)deselectAssetsAtIndexes:(id)arg1 inAssetCollection:(id)arg2 ;
-(void)deselectAllAssetsInAssetCollections:(id)arg1 ;
-(void)deselectAllAssets;
-(void)_beginSelectionChange;
-(BOOL)isAssetAtIndexSelected:(unsigned long long)arg1 inAssetCollection:(id)arg2 ;
-(BOOL)isAnyAssetSelectedInAssetCollections:(id)arg1 ;
-(BOOL)areAllAssetsSelectedInAssetCollections:(id)arg1 ;
-(id)selectedAssetIndexesWithAssetCollectionOrdering:(id)arg1 ;
-(NSArray *)selectedAssetCollections;
-(void)selectAssetsAtIndexes:(id)arg1 inAssetCollection:(id)arg2 ;
-(void)enumerateSelectedAssetsWithAssetCollectionOrdering:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)localizedSelectionString;
-(void)handlePhotoLibraryChange:(id)arg1 ;
-(void)invalidateAllAssetIndexes;
-(void)_endSelectionChange;
-(BOOL)_shouldUniqueAssets;
-(void)setDataSource:(id<PHAssetCollectionDataSource>)arg1 ;
-(PXAssetMediaTypeCount)requestAssetsMediaTypeCount;
-(NSSet *)selectedAssets;
-(NSDictionary *)selectedAssetsByAssetCollection;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)selectAllAssetsInAssetCollections:(id)arg1 ;
-(id)selectedAssetsWithAssetCollectionOrdering:(id)arg1 ;
-(BOOL)isAnyAssetSelected;
-(NSOrderedSet *)orderedSelectedAssets;
@end

