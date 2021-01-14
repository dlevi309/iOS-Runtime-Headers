/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXAssetsSectionConfigurator.h>

@class PXCuratedLibraryChapterHeaderLayoutSpec, PXMonthCardSectionBodyLayoutSpec;

@interface PXMonthChapterSectionConfigurator : PXAssetsSectionConfigurator {

	PXCuratedLibraryChapterHeaderLayoutSpec* _chapterHeaderSpec;
	PXMonthCardSectionBodyLayoutSpec* _cardBodySpec;

}

@property (nonatomic,readonly) PXCuratedLibraryChapterHeaderLayoutSpec * chapterHeaderSpec;              //@synthesize chapterHeaderSpec=_chapterHeaderSpec - In the implementation block
@property (nonatomic,readonly) PXMonthCardSectionBodyLayoutSpec * cardBodySpec;                          //@synthesize cardBodySpec=_cardBodySpec - In the implementation block
-(id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2 ;
-(PXMonthCardSectionBodyLayoutSpec *)cardBodySpec;
-(PXCuratedLibraryChapterHeaderLayoutSpec *)chapterHeaderSpec;
-(id)updatedHeaderLayout:(id)arg1 withHeaderStyle:(long long)arg2 forAssetSectionLayout:(id)arg3 ;
-(id)headerSpecForHeaderStyle:(long long)arg1 assetSectionLayout:(id)arg2 ;
-(void)configureAssetSectionLayout:(id)arg1 ;
@end

