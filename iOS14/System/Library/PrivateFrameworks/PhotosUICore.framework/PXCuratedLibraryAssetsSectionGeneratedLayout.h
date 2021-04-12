/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGGeneratedLayout.h>

@protocol PXDisplayAsset;
@class PXCuratedLibrarySectionGeometryDescriptor;

@interface PXCuratedLibraryAssetsSectionGeneratedLayout : PXGGeneratedLayout {

	id<PXDisplayAsset> _presentedKeyAsset;
	CGRect _presentedKeyAssetRect;

}

@property (nonatomic,retain) id<PXDisplayAsset> presentedKeyAsset;                                                   //@synthesize presentedKeyAsset=_presentedKeyAsset - In the implementation block
@property (assign,nonatomic) CGRect presentedKeyAssetRect;                                                           //@synthesize presentedKeyAssetRect=_presentedKeyAssetRect - In the implementation block
@property (nonatomic,readonly) CGRect sectionRect; 
@property (nonatomic,readonly) PXCuratedLibrarySectionGeometryDescriptor * presentedGeometryDescriptor; 
-(CGRect)sectionRect;
-(PXCuratedLibrarySectionGeometryDescriptor *)presentedGeometryDescriptor;
-(id)init;
-(void)setPresentedKeyAssetRect:(CGRect)arg1 ;
-(void)enumerateHeroSpritesInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)spritesDidUpdate;
-(void)getSpriteZPosition:(float*)arg1 clippingRect:(CGRect*)arg2 forSpriteKind:(long long)arg3 ;
-(CGRect)presentedKeyAssetRect;
-(id<PXDisplayAsset>)presentedKeyAsset;
-(void)setPresentedKeyAsset:(id<PXDisplayAsset>)arg1 ;
@end

