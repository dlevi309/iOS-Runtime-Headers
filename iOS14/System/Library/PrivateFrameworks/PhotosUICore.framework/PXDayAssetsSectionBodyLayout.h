/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXCuratedLibraryAssetsSectionGeneratedLayout.h>
#import <libobjc.A.dylib/PXGItemsGeometry.h>
#import <libobjc.A.dylib/PXCuratedLibraryRowBasedLayout.h>

@class PXDayAssetsSectionBodyLayoutSpec;

@interface PXDayAssetsSectionBodyLayout : PXCuratedLibraryAssetsSectionGeneratedLayout <PXGItemsGeometry, PXCuratedLibraryRowBasedLayout> {

	PXDayAssetsSectionBodyLayoutSpec* _spec;
	long long _style;
	long long _numberOfPrecedingAssets;

}

@property (nonatomic,readonly) CGSize minimumItemSize; 
@property (nonatomic,retain) PXDayAssetsSectionBodyLayoutSpec * spec;              //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) long long style;                                      //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long numberOfPrecedingAssets;                    //@synthesize numberOfPrecedingAssets=_numberOfPrecedingAssets - In the implementation block
@property (nonatomic,readonly) CGSize minPlayableSpriteSize; 
@property (nonatomic,readonly) double buildingRowContentHeight; 
@property (nonatomic,readonly) double buildingRowSpacing; 
+(CGSize)estimatedSizeWithReferenceSize:(CGSize)arg1 spec:(id)arg2 style:(long long)arg3 numberOfAssets:(long long)arg4 ;
-(double)buildingRowSpacing;
-(id)itemsBetweenItem:(long long)arg1 andItem:(long long)arg2 ;
-(void)setNumberOfPrecedingAssets:(long long)arg1 ;
-(void)contentSizeDidChange;
-(id)newGenerator;
-(void)enumerateRowsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(long long)numberOfPrecedingAssets;
-(void)setSpec:(PXDayAssetsSectionBodyLayoutSpec *)arg1 ;
-(double)buildingRowContentHeight;
-(CGSize)minimumItemSize;
-(CGRect)sectionRect;
-(id)init;
-(id)itemsInRect:(CGRect)arg1 inLayout:(id)arg2 ;
-(id)itemsGeometry;
-(void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(/*^block*/id)arg1 ;
-(long long)itemClosestToItem:(long long)arg1 inDirection:(unsigned long long)arg2 ;
-(CGSize)minPlayableSpriteSize;
-(CGSize)_minSizeOfDominantSprites;
-(void)enumerateHeroSpritesInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(PXDayAssetsSectionBodyLayoutSpec *)spec;
-(void)referenceSizeDidChange;
-(PXGSpriteIndexRange)spriteIndexRangeCoveringRect:(CGRect)arg1 ;
-(long long)_initialItemInDirection:(unsigned long long)arg1 ;
-(long long)_itemClosestToItem:(long long)arg1 inDirection:(unsigned long long)arg2 ;
-(void)setStyle:(long long)arg1 ;
-(id)exploreGenerator;
-(long long)style;
-(id)_inputItemAtIndex:(unsigned)arg1 ;
@end

