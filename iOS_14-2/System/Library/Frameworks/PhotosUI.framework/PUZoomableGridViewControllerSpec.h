/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class PUPhotosGridViewControllerSpec;

@interface PUZoomableGridViewControllerSpec : NSObject {

	BOOL _canDisplayMultipleRightBarButtonItems;
	double _magnifiedYOffset;
	long long _fullMomentsSectionHeaderStyle;
	long long _collectionsSectionHeaderStyle;
	long long _yearsSectionHeaderStyle;
	PUPhotosGridViewControllerSpec* _gridSpec;
	CGSize _magnifiedImageSize;
	CGSize _fullMomentsLevelThumbnailSize;
	UIEdgeInsets _magnifiedDragEdgeInsets;
	UIEdgeInsets _fullMomentsLevelSectionHeaderHighlightInset;
	UIEdgeInsets _collectionsLevelSectionHeaderHighlightInset;
	UIEdgeInsets _yearsLevelSectionHeaderHighlightInset;

}

@property (setter=_setGridSpec:,nonatomic,retain) PUPhotosGridViewControllerSpec * gridSpec;              //@synthesize gridSpec=_gridSpec - In the implementation block
@property (nonatomic,readonly) BOOL canDisplayMultipleRightBarButtonItems;                                //@synthesize canDisplayMultipleRightBarButtonItems=_canDisplayMultipleRightBarButtonItems - In the implementation block
@property (nonatomic,readonly) CGSize magnifiedImageSize;                                                 //@synthesize magnifiedImageSize=_magnifiedImageSize - In the implementation block
@property (assign,nonatomic) double magnifiedYOffset;                                                     //@synthesize magnifiedYOffset=_magnifiedYOffset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets magnifiedDragEdgeInsets;                                        //@synthesize magnifiedDragEdgeInsets=_magnifiedDragEdgeInsets - In the implementation block
@property (nonatomic,readonly) long long fullMomentsLevelCellFillMode; 
@property (nonatomic,readonly) CGSize fullMomentsLevelThumbnailSize;                                      //@synthesize fullMomentsLevelThumbnailSize=_fullMomentsLevelThumbnailSize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets fullMomentsLevelSectionHeaderHighlightInset;                  //@synthesize fullMomentsLevelSectionHeaderHighlightInset=_fullMomentsLevelSectionHeaderHighlightInset - In the implementation block
@property (nonatomic,readonly) long long fullMomentsSectionHeaderStyle;                                   //@synthesize fullMomentsSectionHeaderStyle=_fullMomentsSectionHeaderStyle - In the implementation block
@property (nonatomic,readonly) long long collectionsLevelCellFillMode; 
@property (nonatomic,readonly) CGSize collectionsLevelThumbnailSize; 
@property (nonatomic,readonly) UIEdgeInsets collectionsLevelSectionHeaderHighlightInset;                  //@synthesize collectionsLevelSectionHeaderHighlightInset=_collectionsLevelSectionHeaderHighlightInset - In the implementation block
@property (nonatomic,readonly) long long collectionsSectionHeaderStyle;                                   //@synthesize collectionsSectionHeaderStyle=_collectionsSectionHeaderStyle - In the implementation block
@property (nonatomic,readonly) long long yearsLevelCellFillMode; 
@property (nonatomic,readonly) CGSize yearsLevelThumbnailSize; 
@property (nonatomic,readonly) UIEdgeInsets yearsLevelSectionHeaderHighlightInset;                        //@synthesize yearsLevelSectionHeaderHighlightInset=_yearsLevelSectionHeaderHighlightInset - In the implementation block
@property (nonatomic,readonly) long long yearsSectionHeaderStyle;                                         //@synthesize yearsSectionHeaderStyle=_yearsSectionHeaderStyle - In the implementation block
-(UIEdgeInsets)fullMomentsLevelSectionHeaderHighlightInset;
-(CGSize)collectionsLevelThumbnailSize;
-(id)newGridSpec;
-(BOOL)dynamicLayoutEnabled;
-(PUPhotosGridViewControllerSpec *)gridSpec;
-(void)configureCollectionsLevelGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(UIEdgeInsets)arg3 ;
-(BOOL)canDisplayMultipleRightBarButtonItems;
-(long long)fullMomentsLevelCellFillMode;
-(double)magnifiedYOffset;
-(void)setMagnifiedYOffset:(double)arg1 ;
-(void)setMagnifiedDragEdgeInsets:(UIEdgeInsets)arg1 ;
-(long long)collectionsSectionHeaderStyle;
-(CGSize)fullMomentsLevelThumbnailSize;
-(void)configureFullMomentsLevelGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(UIEdgeInsets)arg3 ;
-(UIEdgeInsets)yearsLevelSectionHeaderHighlightInset;
-(UIEdgeInsets)magnifiedDragEdgeInsets;
-(long long)fullMomentsSectionHeaderStyle;
-(long long)yearsSectionHeaderStyle;
-(void)configureYearsLevelGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(UIEdgeInsets)arg3 ;
-(long long)collectionsLevelCellFillMode;
-(UIEdgeInsets)collectionsLevelSectionHeaderHighlightInset;
-(long long)yearsLevelCellFillMode;
-(CGSize)yearsLevelThumbnailSize;
-(CGSize)magnifiedImageSize;
-(void)_setGridSpec:(id)arg1 ;
@end

