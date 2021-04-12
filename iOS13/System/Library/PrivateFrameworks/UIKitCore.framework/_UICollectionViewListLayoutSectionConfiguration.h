/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol NSCollectionLayoutEnvironment_Private;
#import <UIKitCore/UIKitCore-Structs.h>
@class UICollectionView, NSArray;

@interface _UICollectionViewListLayoutSectionConfiguration : NSObject {

	long long _appearanceStyle;
	double _rowHeight;
	double _sectionHeaderHeight;
	double _sectionFooterHeight;
	double _estimatedRowHeight;
	double _estimatedSectionHeaderHeight;
	double _estimatedSectionFooterHeight;
	long long _separatorStyle;
	UICollectionView* _collectionView;
	id<NSCollectionLayoutEnvironment_Private> _layoutEnvironment;
	NSArray* _itemHeights;
	NSDirectionalEdgeInsets _separatorInset;

}

@property (getter=_collectionView,nonatomic,__weak,readonly) UICollectionView * collectionView;                                    //@synthesize collectionView=_collectionView - In the implementation block
@property (getter=_layoutEnvironment,nonatomic,readonly) id<NSCollectionLayoutEnvironment_Private> layoutEnvironment;              //@synthesize layoutEnvironment=_layoutEnvironment - In the implementation block
@property (getter=_constants,nonatomic,readonly) id<UITableConstants> constants; 
@property (setter=_setItemHeights:,getter=_itemHeights,nonatomic,copy) NSArray * itemHeights;                                      //@synthesize itemHeights=_itemHeights - In the implementation block
@property (assign,nonatomic) long long appearanceStyle;                                                                            //@synthesize appearanceStyle=_appearanceStyle - In the implementation block
@property (assign,nonatomic) double rowHeight;                                                                                     //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) double sectionHeaderHeight;                                                                           //@synthesize sectionHeaderHeight=_sectionHeaderHeight - In the implementation block
@property (assign,nonatomic) double sectionFooterHeight;                                                                           //@synthesize sectionFooterHeight=_sectionFooterHeight - In the implementation block
@property (assign,nonatomic) double estimatedRowHeight;                                                                            //@synthesize estimatedRowHeight=_estimatedRowHeight - In the implementation block
@property (assign,nonatomic) double estimatedSectionHeaderHeight;                                                                  //@synthesize estimatedSectionHeaderHeight=_estimatedSectionHeaderHeight - In the implementation block
@property (assign,nonatomic) double estimatedSectionFooterHeight;                                                                  //@synthesize estimatedSectionFooterHeight=_estimatedSectionFooterHeight - In the implementation block
@property (assign,nonatomic) long long separatorStyle;                                                                             //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets separatorInset;                                                               //@synthesize separatorInset=_separatorInset - In the implementation block
-(id)init;
-(id)initWithCollectionView:(id)arg1 ;
-(id)_collectionView;
-(id)_constants;
-(long long)appearanceStyle;
-(void)setAppearanceStyle:(long long)arg1 ;
-(long long)separatorStyle;
-(void)setSeparatorStyle:(long long)arg1 ;
-(NSDirectionalEdgeInsets)separatorInset;
-(void)setSeparatorInset:(NSDirectionalEdgeInsets)arg1 ;
-(BOOL)_shouldDrawThickSeparators;
-(double)rowHeight;
-(double)sectionHeaderHeight;
-(double)sectionFooterHeight;
-(double)estimatedRowHeight;
-(double)estimatedSectionHeaderHeight;
-(double)estimatedSectionFooterHeight;
-(double)_defaultSectionHeaderHeight;
-(double)_defaultSectionFooterHeight;
-(double)_defaultCellHeight;
-(void)setRowHeight:(double)arg1 ;
-(void)setSectionHeaderHeight:(double)arg1 ;
-(void)setSectionFooterHeight:(double)arg1 ;
-(void)setEstimatedRowHeight:(double)arg1 ;
-(void)setEstimatedSectionHeaderHeight:(double)arg1 ;
-(void)setEstimatedSectionFooterHeight:(double)arg1 ;
-(double)_separatorHeight;
-(UIEdgeInsets)_defaultLayoutMargins;
-(void)_setItemHeights:(id)arg1 ;
-(double)_effectiveEstimatedRowHeight;
-(double)_effectiveEstimatedSectionHeaderHeight;
-(double)_effectiveEstimatedSectionFooterHeight;
-(NSDirectionalEdgeInsets)_effectiveSeparatorInsets;
-(BOOL)_shouldPinSupplementaries;
-(NSDirectionalEdgeInsets)_sectionInsetsForAppearanceStyle;
-(NSDirectionalEdgeInsets)_defaultDirectionalLayoutMargins;
-(id)_generateLayoutGroup:(id)arg1 ;
-(void)_addSupplementaryItemsToLayout:(id)arg1 ;
-(id)_layoutEnvironment;
-(id)_itemHeights;
@end

