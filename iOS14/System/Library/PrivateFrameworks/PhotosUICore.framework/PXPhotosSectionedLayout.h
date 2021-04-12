/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGStackLayout.h>
#import <libobjc.A.dylib/PXGSublayoutProvider.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXGSublayoutFaultingDelegate.h>
#import <libobjc.A.dylib/PXAssetSectionLayoutDelegate.h>
#import <libobjc.A.dylib/PXPhotosSectionBodyLayoutProviderInvalidationDelegate.h>

@protocol PXPhotosSectionHeaderLayoutProvider, PXPhotosSectionBodyLayoutProvider;
@class NSIndexSet, PXAssetsDataSource, PXPhotosViewModel, PXPhotosLayoutSpec, NSString;

@interface PXPhotosSectionedLayout : PXGStackLayout <PXGSublayoutProvider, PXChangeObserver, PXGSublayoutFaultingDelegate, PXAssetSectionLayoutDelegate, PXPhotosSectionBodyLayoutProviderInvalidationDelegate> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	BOOL _isUpdatingSublayouts;
	SCD_Struct_PX38 _headerProviderRespondsTo;
	unsigned long long _dataSourceIdentifierOfCachedSectionsWithSelectedItems;
	NSIndexSet* _cachedSectionsWithSelectedItems;
	long long _numberOfForcedSections;
	PXAssetsDataSource* _assetsDataSource;
	PXPhotosViewModel* _viewModel;
	PXPhotosLayoutSpec* _spec;
	id<PXPhotosSectionHeaderLayoutProvider> _headerLayoutProvider;
	id<PXPhotosSectionBodyLayoutProvider> _bodyLayoutProvider;
	double _interSectionSpacing;

}

@property (assign,nonatomic) double interSectionSpacing;                                                  //@synthesize interSectionSpacing=_interSectionSpacing - In the implementation block
@property (nonatomic,readonly) PXPhotosViewModel * viewModel;                                             //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSource * assetsDataSource;                                     //@synthesize assetsDataSource=_assetsDataSource - In the implementation block
@property (nonatomic,retain) PXPhotosLayoutSpec * spec;                                                   //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) id<PXPhotosSectionHeaderLayoutProvider> headerLayoutProvider;              //@synthesize headerLayoutProvider=_headerLayoutProvider - In the implementation block
@property (nonatomic,readonly) id<PXPhotosSectionBodyLayoutProvider> bodyLayoutProvider;                  //@synthesize bodyLayoutProvider=_bodyLayoutProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(/*^block*/id)dateIntervalFutureForContentInRect:(CGRect)arg1 type:(unsigned long long)arg2 ;
-(void)setSpec:(PXPhotosLayoutSpec *)arg1 ;
-(id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2 ;
-(void)_updateSublayoutsConfiguration;
-(BOOL)_shouldFaultInSection:(long long)arg1 inDataSource:(id)arg2 ;
-(id)init;
-(void)willRemoveSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3 ;
-(void)_invalidateSublayoutsConfiguration;
-(long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3 ;
-(void)_performAddActionForSectionLayout:(id)arg1 ;
-(CGSize)layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(CGSize)arg3 ;
-(id)_createAnimationForChangeFromDataSource:(id)arg1 toDataSource:(id)arg2 changeDetails:(id)arg3 ;
-(PXPhotosViewModel *)viewModel;
-(double)interSectionSpacing;
-(void)_updateSublayoutsSpec;
-(void)setInterSectionSpacing:(double)arg1 ;
-(id)presentedItemsGeometryForSection:(unsigned long long)arg1 inDataSource:(id)arg2 ;
-(PXPhotosLayoutSpec *)spec;
-(void)enumerateAssetsSectionSublayoutsInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateAssetsSectionSublayoutsUsingBlock:(/*^block*/id)arg1 ;
-(void)update;
-(void)didFaultInSublayout:(id)arg1 atIndex:(long long)arg2 fromEstimatedContentSize:(CGSize)arg3 ;
-(BOOL)layout:(id)arg1 shouldPreventFaultOutOfSublayout:(id)arg2 ;
-(void)enumerateItemsGeometriesInRect:(CGRect)arg1 dataSource:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_invalidateSublayoutsDataSource;
-(id)initWithViewModel:(id)arg1 headerProvider:(id)arg2 bodyProvider:(id)arg3 ;
-(void)_updateSublayoutGridConfiguratorForLayout:(id)arg1 ;
-(void)assetSectionLayoutDidConfigureLayouts:(id)arg1 ;
-(PXAssetsDataSource *)assetsDataSource;
-(id<PXPhotosSectionBodyLayoutProvider>)bodyLayoutProvider;
-(void)photosSectionBodyLayoutInvalidateConfiguredLayouts:(id)arg1 ;
-(id)axSpriteIndexes;
-(id)topmostHeaderSnapshotInRect:(CGRect)arg1 ;
-(void)_invalidateSublayoutsSpec;
-(BOOL)_configureSectionLayout:(id)arg1 ;
-(void)_updateSublayoutsDataSource;
-(id<PXPhotosSectionHeaderLayoutProvider>)headerLayoutProvider;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

