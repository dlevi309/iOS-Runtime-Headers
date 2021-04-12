/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/WFActionDrawerCategoriesCollectionViewManagerDelegate.h>

@protocol WFActionDrawerCategoriesTableViewCellDelegate;
@class UICollectionView, UICollectionViewFlowLayout, WFActionDrawerCategoriesCollectionViewManager, WFActionDrawerCategoriesMetrics, NSString;

@interface WFActionDrawerCategoriesTableViewCell : UITableViewCell <WFActionDrawerCategoriesCollectionViewManagerDelegate> {

	BOOL _shouldStackVertically;
	id<WFActionDrawerCategoriesTableViewCellDelegate> _delegate;
	UICollectionView* _categoriesCollectionView;
	UICollectionViewFlowLayout* _categoriesFlowLayout;
	WFActionDrawerCategoriesCollectionViewManager* _categoriesCollectionViewManager;
	WFActionDrawerCategoriesMetrics* _metrics;

}

@property (assign,nonatomic,__weak) UICollectionView * categoriesCollectionView;                                           //@synthesize categoriesCollectionView=_categoriesCollectionView - In the implementation block
@property (assign,nonatomic,__weak) UICollectionViewFlowLayout * categoriesFlowLayout;                                     //@synthesize categoriesFlowLayout=_categoriesFlowLayout - In the implementation block
@property (nonatomic,retain) WFActionDrawerCategoriesCollectionViewManager * categoriesCollectionViewManager;              //@synthesize categoriesCollectionViewManager=_categoriesCollectionViewManager - In the implementation block
@property (assign,nonatomic,__weak) WFActionDrawerCategoriesMetrics * metrics;                                             //@synthesize metrics=_metrics - In the implementation block
@property (assign,nonatomic,__weak) id<WFActionDrawerCategoriesTableViewCellDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldStackVertically;                                                                   //@synthesize shouldStackVertically=_shouldStackVertically - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFActionDrawerCategoriesTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<WFActionDrawerCategoriesTableViewCellDelegate>)arg1 ;
-(WFActionDrawerCategoriesMetrics *)metrics;
-(void)setMetrics:(WFActionDrawerCategoriesMetrics *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)categoriesCollectionViewManager:(id)arg1 didSelectAction:(id)arg2 ;
-(void)categoriesCollectionViewManager:(id)arg1 didSelectDocumentationForAction:(id)arg2 fromView:(id)arg3 ;
-(void)categoriesCollectionViewManagerDidSelectCategoryApps:(id)arg1 title:(id)arg2 ;
-(void)categoriesCollectionViewManagerDidSelectCategoryFavorites:(id)arg1 title:(id)arg2 ;
-(void)categoriesCollectionViewManagerDidSelectCategoryScripting:(id)arg1 title:(id)arg2 ;
-(void)categoriesCollectionViewManager:(id)arg1 didSelectCategoryForContentType:(id)arg2 title:(id)arg3 ;
-(void)configureWithContentTypeCategories:(id)arg1 metrics:(id)arg2 ;
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

