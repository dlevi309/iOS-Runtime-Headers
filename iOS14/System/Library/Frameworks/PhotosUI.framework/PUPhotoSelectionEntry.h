/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PHAssetCollection, PHFetchResult, NSMutableSet, NSMutableIndexSet, NSIndexSet, NSArray;

@interface PUPhotoSelectionEntry : NSObject <NSCopying> {

	BOOL _hasValidAssetIndexes;
	PHAssetCollection* _assetCollection;
	PHFetchResult* _fetchResult;
	NSMutableSet* _selectedAssets;
	NSMutableIndexSet* _selectedIndexes;

}

@property (nonatomic,readonly) PHAssetCollection * assetCollection;              //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) PHFetchResult * fetchResult;                      //@synthesize fetchResult=_fetchResult - In the implementation block
@property (nonatomic,readonly) NSIndexSet * selectedIndexes; 
@property (nonatomic,readonly) NSArray * selectedAssets; 
-(PHFetchResult *)fetchResult;
-(NSIndexSet *)selectedIndexes;
-(void)handlePhotoLibraryChange:(id)arg1 ;
-(void)invalidateAllAssetIndexes;
-(void)enumerateSelectedAssetsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isIndexSelected:(unsigned long long)arg1 ;
-(void)deselectAssetsAtIndexes:(id)arg1 ;
-(void)selectAssetsAtIndexes:(id)arg1 ;
-(id)initWithAssetCollection:(id)arg1 fetchResult:(id)arg2 uniqueSelectedAssets:(id)arg3 ;
-(void)_ensureValidAssetIndexes;
-(void)setSelectedAssetsSet:(id)arg1 ;
-(PHAssetCollection *)assetCollection;
-(NSArray *)selectedAssets;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

