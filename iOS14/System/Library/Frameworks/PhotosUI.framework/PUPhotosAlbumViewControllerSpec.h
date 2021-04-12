/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PULegacyViewControllerSpec.h>

@interface PUPhotosAlbumViewControllerSpec : PULegacyViewControllerSpec {

	BOOL _shouldUseAspectItems;
	long long _fullMomentsSectionHeaderStyle;

}

@property (nonatomic,readonly) BOOL shouldUseAspectItems;                                             //@synthesize shouldUseAspectItems=_shouldUseAspectItems - In the implementation block
@property (nonatomic,readonly) double contentCornerRadius; 
@property (nonatomic,readonly) UIEdgeInsets fullMomentsLevelSectionHeaderHighlightInset; 
@property (nonatomic,readonly) long long fullMomentsSectionHeaderStyle;                               //@synthesize fullMomentsSectionHeaderStyle=_fullMomentsSectionHeaderStyle - In the implementation block
+(id)padSpec;
+(id)phoneSpec;
-(UIEdgeInsets)fullMomentsLevelSectionHeaderHighlightInset;
-(void)configureCollectionViewGridLayout:(id)arg1 ;
-(id)gridSpec;
-(BOOL)shouldUseAspectItems;
-(long long)fullMomentsSectionHeaderStyle;
-(double)contentCornerRadius;
-(long long)cellFillMode;
@end

