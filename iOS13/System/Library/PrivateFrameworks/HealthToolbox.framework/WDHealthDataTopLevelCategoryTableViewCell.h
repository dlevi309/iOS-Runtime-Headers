/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol WDHealthDataTopLevelCategoryTableViewCellDelegate;
@class NSArray, UICollectionView, NSString;

@interface WDHealthDataTopLevelCategoryTableViewCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate> {

	NSArray* _topLevelDataCategories;
	UICollectionView* _collectionView;
	double _cachedCategoryNameFittingScaleFactor;
	id<WDHealthDataTopLevelCategoryTableViewCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WDHealthDataTopLevelCategoryTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
+(id)reuseIdentifier;
+(double)contentHeightWithCount:(unsigned long long)arg1 ;
+(unsigned long long)collectionViewItemsPerRow;
+(double)_contentItemHeight;
+(double)_collectionViewWidth;
+(double)_contentItemWidth;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<WDHealthDataTopLevelCategoryTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<WDHealthDataTopLevelCategoryTableViewCellDelegate>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(double)contentHeight;
-(void)_setupCollectionView;
-(id)initWithTopLevelDataCategories:(id)arg1 ;
-(CGSize)_contentItemSize;
-(double)_categoryNameWidth;
-(double)_categoryNameFittingScaleFactor;
-(double)categoryNameLabelFontSize;
-(CGRect)_collectionViewFrame;
@end

