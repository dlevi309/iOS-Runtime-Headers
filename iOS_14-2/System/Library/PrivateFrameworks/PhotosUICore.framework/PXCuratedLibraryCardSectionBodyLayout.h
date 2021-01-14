/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGLayout.h>
#import <libobjc.A.dylib/PXGDisplayAssetSource.h>

@protocol PXDisplayAsset, PXDisplayAssetFetchResult;
@class NSMutableIndexSet, PXAssetsDataSource, PXCuratedLibraryCardSectionBodyLayoutSpec, PXIndexPathSet, PXGLayoutGuide, PXCuratedLibrarySectionGeometryDescriptor, NSString;

@interface PXCuratedLibraryCardSectionBodyLayout : PXGLayout <PXGDisplayAssetSource> {

	unsigned short _assetVersion;
	id<PXDisplayAsset> _keyAsset;
	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _postUpdateFlags;
	PXGSpriteIndexRange _assetSpriteIndexRange;
	NSMutableIndexSet* _axSpriteIndexes;
	BOOL _isSelected;
	BOOL _isSkimming;
	long long _section;
	PXAssetsDataSource* _dataSource;
	long long _zoomLevel;
	PXCuratedLibraryCardSectionBodyLayoutSpec* _spec;
	PXIndexPathSet* _skimmingIndexPaths;
	long long _maxSkimmingIndex;
	long long _currentSkimmingIndex;
	PXGLayoutGuide* _assetLayoutGuide;
	id<PXDisplayAssetFetchResult> _keyAssetsFetchResult;
	PXSimpleIndexPath _sectionIndexPath;

}

@property (nonatomic,readonly) PXSimpleIndexPath sectionIndexPath;                                                   //@synthesize sectionIndexPath=_sectionIndexPath - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAssetFetchResult> keyAssetsFetchResult;                                   //@synthesize keyAssetsFetchResult=_keyAssetsFetchResult - In the implementation block
@property (nonatomic,readonly) long long section;                                                                    //@synthesize section=_section - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSource * dataSource;                                                      //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL isSelected;                                                                        //@synthesize isSelected=_isSelected - In the implementation block
@property (assign,nonatomic) long long zoomLevel;                                                                    //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (nonatomic,retain) PXCuratedLibraryCardSectionBodyLayoutSpec * spec;                                       //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) BOOL isSkimming;                                                                        //@synthesize isSkimming=_isSkimming - In the implementation block
@property (nonatomic,retain) PXIndexPathSet * skimmingIndexPaths;                                                    //@synthesize skimmingIndexPaths=_skimmingIndexPaths - In the implementation block
@property (assign,nonatomic) long long maxSkimmingIndex;                                                             //@synthesize maxSkimmingIndex=_maxSkimmingIndex - In the implementation block
@property (assign,nonatomic) long long currentSkimmingIndex;                                                         //@synthesize currentSkimmingIndex=_currentSkimmingIndex - In the implementation block
@property (nonatomic,readonly) PXCuratedLibrarySectionGeometryDescriptor * presentedGeometryDescriptor; 
@property (nonatomic,readonly) CGRect assetFrame; 
@property (nonatomic,readonly) PXGLayoutGuide * assetLayoutGuide;                                                    //@synthesize assetLayoutGuide=_assetLayoutGuide - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)displayAssetFetchResultForSpritesInRange:(PXGSpriteIndexRange)arg1 inLayout:(id)arg2 ;
-(id)axContentInfoAtSpriteIndex:(unsigned)arg1 ;
-(void)setSpec:(PXCuratedLibraryCardSectionBodyLayoutSpec *)arg1 ;
-(long long)zoomLevel;
-(id)displayAssetRequestObserverForSpritesInRange:(PXGSpriteIndexRange)arg1 inLayout:(id)arg2 ;
-(long long)currentSkimmingIndex;
-(void)setIsSkimming:(BOOL)arg1 ;
-(void)screenScaleDidChange;
-(void)setZoomLevel:(long long)arg1 ;
-(PXCuratedLibrarySectionGeometryDescriptor *)presentedGeometryDescriptor;
-(id)init;
-(unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(id)arg1 ;
-(long long)maxSkimmingIndex;
-(CGRect)assetFrame;
-(id<PXDisplayAssetFetchResult>)keyAssetsFetchResult;
-(void)setMaxSkimmingIndex:(long long)arg1 ;
-(void)_updateAXSprites;
-(void)setSkimmingIndexPaths:(PXIndexPathSet *)arg1 ;
-(PXIndexPathSet *)skimmingIndexPaths;
-(PXSimpleIndexPath)sectionIndexPath;
-(void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isSkimming;
-(long long)section;
-(BOOL)isSelected;
-(unsigned long long)desiredPlaceholderStyleInLayout:(id)arg1 ;
-(void)setCurrentSkimmingIndex:(long long)arg1 ;
-(CGSize)minSpriteSizeForPresentationStyle:(unsigned long long)arg1 ;
-(void)setIsSelected:(BOOL)arg1 ;
-(void)setDataSource:(id)arg1 section:(long long)arg2 ;
-(void)applySpriteChangeDetails:(id)arg1 countAfterChanges:(unsigned)arg2 initialState:(/*^block*/id)arg3 modifyState:(/*^block*/id)arg4 ;
-(PXAssetsDataSource *)dataSource;
-(id)objectReferenceForSpriteIndex:(unsigned)arg1 ;
-(id)axSpriteIndexesInRect:(CGRect)arg1 ;
-(PXCuratedLibraryCardSectionBodyLayoutSpec *)spec;
-(void)_updateKeyAssetFetchResultWithDataSource:(id)arg1 section:(long long)arg2 ;
-(PXGLayoutGuide *)assetLayoutGuide;
-(void)update;
-(unsigned)axSpriteIndexClosestToSpriteIndex:(unsigned)arg1 inDirection:(unsigned long long)arg2 ;
-(void)referenceSizeDidChange;
-(id)axVisibleSpriteIndexes;
-(void)_updateSprites;
-(id)axSpriteIndexes;
-(id)layoutForItemChanges;
-(id)axSelectedSpriteIndexes;
@end

