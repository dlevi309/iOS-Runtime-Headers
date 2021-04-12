/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class NSArray, WFActionDrawerCoordinator, UICollectionView, WFActionDrawerCategoriesMetrics, NSString;

@interface WFActionDrawerCategoriesCollectionViewManager : NSObject <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate> {

	BOOL _shouldUseVerticalStacking;
	NSArray* _contentTypeCategories;
	WFActionDrawerCoordinator* _coordinator;
	UICollectionView* _collectionView;
	WFActionDrawerCategoriesMetrics* _metrics;

}

@property (nonatomic,copy,readonly) NSArray * contentTypeCategories;                        //@synthesize contentTypeCategories=_contentTypeCategories - In the implementation block
@property (nonatomic,__weak,readonly) WFActionDrawerCoordinator * coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;                           //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) WFActionDrawerCategoriesMetrics * metrics;                   //@synthesize metrics=_metrics - In the implementation block
@property (assign,nonatomic) BOOL shouldUseVerticalStacking;                                //@synthesize shouldUseVerticalStacking=_shouldUseVerticalStacking - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(WFActionDrawerCategoriesMetrics *)metrics;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(WFActionDrawerCoordinator *)coordinator;
-(NSArray *)contentTypeCategories;
-(id)initWithCollectionView:(id)arg1 coordinator:(id)arg2 contentTypeCategories:(id)arg3 metrics:(id)arg4 ;
-(void)_configureCell:(id)arg1 withContentTypeCategory:(id)arg2 ;
-(void)setShouldUseVerticalStacking:(BOOL)arg1 ;
-(BOOL)shouldUseVerticalStacking;
@end

