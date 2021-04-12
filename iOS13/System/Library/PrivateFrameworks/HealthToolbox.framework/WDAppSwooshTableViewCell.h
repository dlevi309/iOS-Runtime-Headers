/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol WDAppSwooshTableViewCellDelegate;
@class UILabel, UICollectionView, HKHorizontalFlowLayout, NSLayoutConstraint, NSArray, HKDisplayCategory, NSString, HKDisplayType;

@interface WDAppSwooshTableViewCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource> {

	UILabel* _headerLabel;
	UICollectionView* _collectionView;
	HKHorizontalFlowLayout* _flowLayout;
	NSLayoutConstraint* _headerBaselineConstraint;
	NSLayoutConstraint* _collectionHeightConstraint;
	CGSize _iconSize;
	NSArray* _marginConstraints;
	unsigned long long _displayMode;
	HKDisplayCategory* _category;
	NSString* _headerText;
	id<WDAppSwooshTableViewCellDelegate> _delegate;
	NSArray* _storeItems;
	HKDisplayType* _displayType;

}

@property (nonatomic,copy) NSString * headerText;                                               //@synthesize headerText=_headerText - In the implementation block
@property (assign,nonatomic,__weak) id<WDAppSwooshTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * storeItems;                                              //@synthesize storeItems=_storeItems - In the implementation block
@property (nonatomic,retain) HKDisplayType * displayType;                                       //@synthesize displayType=_displayType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
+(id)reuseIdentifier;
+(id)defaultReuseIdentifier;
+(id)_headerLabelFont;
-(void)dealloc;
-(id<WDAppSwooshTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<WDAppSwooshTableViewCellDelegate>)arg1 ;
-(HKDisplayType *)displayType;
-(void)setDisplayType:(HKDisplayType *)arg1 ;
-(void)updateConstraints;
-(void)layoutMarginsDidChange;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(void)contentSizeDidChange;
-(CGSize)_iconSize;
-(double)contentHeight;
-(void)_setUpAfterInit;
-(id)initWithDisplayType:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setStoreItems:(NSArray *)arg1 ;
-(id)initWithCategory:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateStoreData:(id)arg1 ;
-(id)_createHeaderLabel;
-(double)_headerBaselineOffsetFromTop;
-(void)refreshMarginConstraints;
-(id)_storeDetailIdentifier;
-(NSArray *)storeItems;
@end

