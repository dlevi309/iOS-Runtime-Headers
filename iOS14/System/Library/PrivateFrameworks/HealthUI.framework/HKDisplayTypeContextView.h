/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/HKDisplayTypeContextHorizontalCollectionViewCellDelegate.h>

@protocol HKDisplayTypeContextViewDelegate;
@class UICollectionView, UICollectionViewFlowLayout, NSLayoutConstraint, NSArray, NSString;

@interface HKDisplayTypeContextView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, HKDisplayTypeContextHorizontalCollectionViewCellDelegate> {

	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _collectionViewLayout;
	NSLayoutConstraint* _collectionHeightConstraint;
	long long _lastSelectedRow;
	NSArray* _displayTypeContextItems;
	id<HKDisplayTypeContextViewDelegate> _delegate;

}

@property (nonatomic,retain) NSArray * displayTypeContextItems;                                 //@synthesize displayTypeContextItems=_displayTypeContextItems - In the implementation block
@property (assign,nonatomic,__weak) id<HKDisplayTypeContextViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(id)init;
-(id<HKDisplayTypeContextViewDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(double)_contentHeight;
-(void)setDelegate:(id<HKDisplayTypeContextViewDelegate>)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(double)preferredHeight;
-(id)_backgroundColor;
-(id)_buildCollectionViewLayout;
-(void)didTapOnInfoButtonForCollectionViewCell:(id)arg1 ;
-(void)_handleSelection:(id)arg1 indexPath:(id)arg2 informDelegate:(BOOL)arg3 ;
-(void)setDisplayTypeContextItems:(NSArray *)arg1 ;
-(void)selectItemAtIndex:(long long)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3 ;
-(NSArray *)displayTypeContextItems;
@end

