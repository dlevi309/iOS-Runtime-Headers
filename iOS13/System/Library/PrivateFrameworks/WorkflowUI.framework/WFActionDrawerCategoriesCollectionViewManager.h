/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol WFActionDrawerCategoriesCollectionViewManagerDelegate;
@class NSArray, UICollectionView, WFActionDrawerCategoriesMetrics, NSString;

@interface WFActionDrawerCategoriesCollectionViewManager : NSObject <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate> {

	BOOL _shouldUseVerticalStacking;
	NSArray* _contentTypeCategories;
	id<WFActionDrawerCategoriesCollectionViewManagerDelegate> _delegate;
	UICollectionView* _collectionView;
	double _itemWidth;
	WFActionDrawerCategoriesMetrics* _metrics;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                                      //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) double itemWidth;                                                                       //@synthesize itemWidth=_itemWidth - In the implementation block
@property (nonatomic,retain) WFActionDrawerCategoriesMetrics * metrics;                                              //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contentTypeCategories;                                                 //@synthesize contentTypeCategories=_contentTypeCategories - In the implementation block
@property (assign,nonatomic) BOOL shouldUseVerticalStacking;                                                         //@synthesize shouldUseVerticalStacking=_shouldUseVerticalStacking - In the implementation block
@property (assign,nonatomic,__weak) id<WFActionDrawerCategoriesCollectionViewManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFActionDrawerCategoriesCollectionViewManagerDelegate>)delegate;
-(void)setDelegate:(id<WFActionDrawerCategoriesCollectionViewManagerDelegate>)arg1 ;
-(WFActionDrawerCategoriesMetrics *)metrics;
-(void)setMetrics:(WFActionDrawerCategoriesMetrics *)arg1 ;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setItemWidth:(double)arg1 ;
-(double)itemWidth;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(NSArray *)contentTypeCategories;
-(id)initWithCollectionView:(id)arg1 contentTypeCategories:(id)arg2 metrics:(id)arg3 ;
-(void)_configureCell:(id)arg1 withContentTypeCategory:(id)arg2 ;
-(id)appsSectionTitle;
-(id)favoritesSectionTitle;
-(id)scriptingSectionTitle;
-(id)localizedTitleForCategory:(id)arg1 ;
-(void)setShouldUseVerticalStacking:(BOOL)arg1 ;
-(BOOL)shouldUseVerticalStacking;
@end

