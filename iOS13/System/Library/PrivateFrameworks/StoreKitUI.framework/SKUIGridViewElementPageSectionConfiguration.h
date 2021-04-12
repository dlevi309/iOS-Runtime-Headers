/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUIGridViewElementPageSectionConfigurationDataSource;
#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSArray, UIColor, SKUIViewElementLayoutContext, SKUIStorePageSectionContext;

@interface SKUIGridViewElementPageSectionConfiguration : NSObject {

	long long _cardVerticalSpacingStyle;
	double _cellContentWidth;
	BOOL _cellPaddingNeedsReloading;
	double _cellPaddingInteriorHorizontal;
	double _cellPaddingLeftEdgeHorizontal;
	double _cellPaddingRightEdgeHorizontal;
	UIEdgeInsets _gridViewElementStyleElementPadding;
	double _gridViewElementStyleItemWidth;
	BOOL _gridViewElementStyleItemWidthIsPercentage;
	BOOL _gridIsEdgeToEdge;
	BOOL _hasGridViewElementStyle;
	BOOL _hasHeader;
	UIEdgeInsets _separatorMargins;
	long long _lockupType;
	double _minimumCellHeight;
	unsigned long long _numberOfGridItems;
	NSArray* _positions;
	UIColor* _separatorColor;
	long long _separatorStyle;
	UIEdgeInsets _separatorWidths;
	BOOL _showsEditMode;
	NSArray* _viewElements;
	struct {
		unsigned configurePositionForItemAtIndexPath : 1;
	}  _dataSourceRespondsToSelectorFlags;
	BOOL _rendersWithPerspective;
	SKUIViewElementLayoutContext* _cellLayoutContext;
	long long _numberOfColumns;
	SKUIStorePageSectionContext* _pageSectionContext;
	id<SKUIGridViewElementPageSectionConfigurationDataSource> _dataSource;

}

@property (nonatomic,retain) SKUIViewElementLayoutContext * cellLayoutContext;                                         //@synthesize cellLayoutContext=_cellLayoutContext - In the implementation block
@property (nonatomic,readonly) double columnContentWidth; 
@property (nonatomic,readonly) double columnWidth; 
@property (assign,nonatomic) long long numberOfColumns;                                                                //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (nonatomic,retain) SKUIStorePageSectionContext * pageSectionContext;                                         //@synthesize pageSectionContext=_pageSectionContext - In the implementation block
@property (assign,nonatomic) BOOL rendersWithPerspective;                                                              //@synthesize rendersWithPerspective=_rendersWithPerspective - In the implementation block
@property (nonatomic,readonly) BOOL showsEditMode;                                                                     //@synthesize showsEditMode=_showsEditMode - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIGridViewElementPageSectionConfigurationDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id<SKUIGridViewElementPageSectionConfigurationDataSource>)dataSource;
-(void)setDataSource:(id<SKUIGridViewElementPageSectionConfigurationDataSource>)arg1 ;
-(long long)numberOfColumns;
-(void)setNumberOfColumns:(long long)arg1 ;
-(double)columnWidth;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg1 ;
-(void)registerReusableClassesForCollectionView:(id)arg1 ;
-(void)setCellLayoutContext:(SKUIViewElementLayoutContext *)arg1 ;
-(void)setPageSectionContext:(SKUIStorePageSectionContext *)arg1 ;
-(BOOL)rendersWithPerspective;
-(void)setRendersWithPerspective:(BOOL)arg1 ;
-(SKUIStorePageSectionContext *)pageSectionContext;
-(SKUIViewElementLayoutContext *)cellLayoutContext;
-(BOOL)showsEditMode;
-(id)backgroundColorForViewElement:(id)arg1 ;
-(void)requestCellLayoutForViewElement:(id)arg1 ;
-(id)cellForViewElement:(id)arg1 indexPath:(id)arg2 ;
-(CGSize)cellSizeForViewElement:(id)arg1 indexPath:(id)arg2 ;
-(void)reloadCellWithIndexPath:(id)arg1 forViewElement:(id)arg2 reason:(long long)arg3 ;
-(UIEdgeInsets)sectionContentInsetAdjustedFromValue:(UIEdgeInsets)arg1 forGridViewElement:(id)arg2 ;
-(void)configureCell:(id)arg1 forViewElement:(id)arg2 indexPath:(id)arg3 ;
-(void)updateLayoutPropertiesForGridViewElement:(id)arg1 ;
-(void)updateStylePropertiesForGridViewElement:(id)arg1 gridItemViewElements:(id)arg2 numberOfGridItems:(unsigned long long)arg3 ;
-(double)_columnContentWidthPaddingForWidth:(double)arg1 ;
-(Class)_cardCellClassForCard:(id)arg1 ;
-(Class)lockupCellClassWithLockup:(id)arg1 ;
-(id)_lockupCellReuseIdentifierWithLockup:(id)arg1 ;
-(UIEdgeInsets)_cellInsetsForViewElement:(id)arg1 indexPath:(id)arg2 ;
-(double)_cellHeightForViewElement:(id)arg1 width:(double)arg2 ;
-(double)_cellContentWidth;
-(Class)cellClassForViewElement:(id)arg1 ;
-(void)_enumerateViewElementsForRowOfIndexPath:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(long long)positionForIndexPath:(id)arg1 ;
-(double)_cellPaddingLeftEdgeHorizontal;
-(double)_cellPaddingRightEdgeHorizontal;
-(UIEdgeInsets)_normalizedContentInsetForViewElement:(id)arg1 indexPath:(id)arg2 ;
-(id)_cardArtworkBoundingSizeForIndexPath:(id)arg1 ;
-(long long)_lockupTypeForLockup:(id)arg1 ;
-(BOOL)viewElementIsStandardCard:(id)arg1 ;
-(long long)_numberOfColumnsForWidth:(double)arg1 style:(id)arg2 ;
-(BOOL)_isContainedWithinExploreTemplateWithGridViewElement:(id)arg1 ;
-(double)columnContentWidth;
-(double)_cellPaddingInteriorHorizontal;
-(void)_reloadCellPaddingIfNeeded;
-(BOOL)_useOrdinalPadding;
@end
