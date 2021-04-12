/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@protocol WFActionDrawerCategoriesMetricsProviderCellDimension;
#import <WorkflowUI/WorkflowUI-Structs.h>
@class NSArray, UITraitCollection;

@interface WFActionDrawerCategoriesMetrics : NSObject {

	BOOL _verticalPresentation;
	BOOL _valid;
	NSArray* _sizesForCells;
	double _heightForDisplay;
	NSArray* _categories;
	UITraitCollection* _traitCollection;
	id<WFActionDrawerCategoriesMetricsProviderCellDimension> _cellDimensions;
	CGSize _maximumSizeCellThatFits;
	CGSize _containerSize;

}

@property (nonatomic,retain) id<WFActionDrawerCategoriesMetricsProviderCellDimension> cellDimensions;              //@synthesize cellDimensions=_cellDimensions - In the implementation block
@property (nonatomic,readonly) NSArray * sizesForCells;                                                            //@synthesize sizesForCells=_sizesForCells - In the implementation block
@property (nonatomic,readonly) BOOL valid;                                                                         //@synthesize valid=_valid - In the implementation block
@property (assign,nonatomic) BOOL verticalPresentation;                                                            //@synthesize verticalPresentation=_verticalPresentation - In the implementation block
@property (nonatomic,copy) NSArray * categories;                                                                   //@synthesize categories=_categories - In the implementation block
@property (assign,nonatomic,__weak) UITraitCollection * traitCollection;                                           //@synthesize traitCollection=_traitCollection - In the implementation block
@property (assign,nonatomic) CGSize containerSize;                                                                 //@synthesize containerSize=_containerSize - In the implementation block
@property (nonatomic,readonly) CGSize maximumSizeCellThatFits;                                                     //@synthesize maximumSizeCellThatFits=_maximumSizeCellThatFits - In the implementation block
@property (nonatomic,readonly) double heightForDisplay;                                                            //@synthesize heightForDisplay=_heightForDisplay - In the implementation block
-(void)setContainerSize:(CGSize)arg1 ;
-(CGSize)containerSize;
-(UIEdgeInsets)cellPadding;
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(BOOL)valid;
-(NSArray *)categories;
-(void)setCategories:(NSArray *)arg1 ;
-(BOOL)shouldStackVertically;
-(CGSize)cellImageSize;
-(UIEdgeInsets)textPadding;
-(UIEdgeInsets)containerEdgeInsets;
-(unsigned long long)numberOfCellsPerRow;
-(CGSize)sizeForLabel:(id)arg1 inSize:(CGSize)arg2 ;
-(id)initWithCategories:(id)arg1 ;
-(unsigned long long)numberOfRowsRequired;
-(void)setVerticalPresentation:(BOOL)arg1 ;
-(void)loadCellDimensions;
-(void)recomputeIfNeeded;
-(void)recompute;
-(NSArray *)sizesForCells;
-(void)computeSizesForCells;
-(CGSize)computeSizeForCell:(id)arg1 ;
-(CGSize)sizeForCellAtIndex:(unsigned long long)arg1 ;
-(CGSize)maximumSizeCellThatFits;
-(void)computeMaximumSizeCellThatFits;
-(double)heightForDisplay;
-(void)computeHeightForDisplay;
-(BOOL)isAccessibilityContentSize;
-(BOOL)canFitVertically;
-(BOOL)verticalPresentation;
-(id<WFActionDrawerCategoriesMetricsProviderCellDimension>)cellDimensions;
-(void)setCellDimensions:(id<WFActionDrawerCategoriesMetricsProviderCellDimension>)arg1 ;
@end

