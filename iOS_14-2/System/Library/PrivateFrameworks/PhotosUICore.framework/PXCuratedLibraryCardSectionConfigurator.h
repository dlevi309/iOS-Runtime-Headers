/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXAssetsSectionConfigurator.h>

@class PXCuratedLibraryCardSectionBodyLayoutSpec;

@interface PXCuratedLibraryCardSectionConfigurator : PXAssetsSectionConfigurator {

	PXCuratedLibraryCardSectionBodyLayoutSpec* _cardSpec;

}

@property (nonatomic,readonly) PXCuratedLibraryCardSectionBodyLayoutSpec * cardSpec;              //@synthesize cardSpec=_cardSpec - In the implementation block
-(id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2 ;
-(UIEdgeInsets)containerInsets;
-(void)configureAssetSectionLayout:(id)arg1 ;
-(PXCuratedLibraryCardSectionBodyLayoutSpec *)cardSpec;
-(id)createCardSpecWithExtendedTraitCollection:(id)arg1 ;
@end

