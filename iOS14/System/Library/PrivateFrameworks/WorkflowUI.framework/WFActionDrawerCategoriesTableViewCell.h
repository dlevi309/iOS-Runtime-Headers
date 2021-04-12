/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UICollectionView, UICollectionViewFlowLayout, WFActionDrawerCategoriesCollectionViewManager, WFActionDrawerCategoriesMetrics;

@interface WFActionDrawerCategoriesTableViewCell : UITableViewCell {

	BOOL _shouldStackVertically;
	UICollectionView* _categoriesCollectionView;
	UICollectionViewFlowLayout* _categoriesFlowLayout;
	WFActionDrawerCategoriesCollectionViewManager* _categoriesCollectionViewManager;
	WFActionDrawerCategoriesMetrics* _metrics;

}

@property (assign,nonatomic,__weak) UICollectionView * categoriesCollectionView;                                           //@synthesize categoriesCollectionView=_categoriesCollectionView - In the implementation block
@property (assign,nonatomic,__weak) UICollectionViewFlowLayout * categoriesFlowLayout;                                     //@synthesize categoriesFlowLayout=_categoriesFlowLayout - In the implementation block
@property (nonatomic,retain) WFActionDrawerCategoriesCollectionViewManager * categoriesCollectionViewManager;              //@synthesize categoriesCollectionViewManager=_categoriesCollectionViewManager - In the implementation block
@property (assign,nonatomic,__weak) WFActionDrawerCategoriesMetrics * metrics;                                             //@synthesize metrics=_metrics - In the implementation block
@property (assign,nonatomic) BOOL shouldStackVertically;                                                                   //@synthesize shouldStackVertically=_shouldStackVertically - In the implementation block
-(void)setMetrics:(WFActionDrawerCategoriesMetrics *)arg1 ;
-(WFActionDrawerCategoriesMetrics *)metrics;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)configureWithContentTypeCategories:(id)arg1 coordinator:(id)arg2 metrics:(id)arg3 ;
-(void)setShouldStackVertically:(BOOL)arg1 ;
-(void)adjustForVerticalStacking;
-(BOOL)shouldStackVertically;
-(UICollectionView *)categoriesCollectionView;
-(void)setCategoriesCollectionView:(UICollectionView *)arg1 ;
-(UICollectionViewFlowLayout *)categoriesFlowLayout;
-(void)setCategoriesFlowLayout:(UICollectionViewFlowLayout *)arg1 ;
-(WFActionDrawerCategoriesCollectionViewManager *)categoriesCollectionViewManager;
-(void)setCategoriesCollectionViewManager:(WFActionDrawerCategoriesCollectionViewManager *)arg1 ;
@end

