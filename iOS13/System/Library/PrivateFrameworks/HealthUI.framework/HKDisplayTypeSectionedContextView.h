/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol HKDisplayTypeSectionedContextViewDelegate;
@class UICollectionView, UICollectionViewFlowLayout, NSIndexPath, NSArray, NSString;

@interface HKDisplayTypeSectionedContextView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	long long _style;
	BOOL _bottomInsetsEnabled;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _collectionViewLayout;
	NSIndexPath* _lastSelectedIndex;
	NSArray* _displayTypeContextSections;
	id<HKDisplayTypeSectionedContextViewDelegate> _delegate;

}

@property (nonatomic,retain) NSArray * displayTypeContextSections;                                       //@synthesize displayTypeContextSections=_displayTypeContextSections - In the implementation block
@property (assign,nonatomic,__weak) id<HKDisplayTypeSectionedContextViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HKDisplayTypeSectionedContextViewDelegate>)delegate;
-(void)setDelegate:(id<HKDisplayTypeSectionedContextViewDelegate>)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(double)_contentHeight;
-(void)_dynamicUserInterfaceTraitDidChange;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)selectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(double)_contentWidth;
-(void)deselectAllItemsAnimated:(BOOL)arg1 ;
-(id)_buildCollectionViewLayout;
-(void)_handleSelection:(id)arg1 indexPath:(id)arg2 informDelegate:(BOOL)arg3 ;
-(void)setDisplayTypeContextSections:(NSArray *)arg1 ;
-(id)initWithStyle:(long long)arg1 useBottomInsets:(BOOL)arg2 ;
-(NSArray *)displayTypeContextSections;
-(double)_preferredCollectionViewHeightForCount:(long long)arg1 ;
-(long long)_rowsForScreenSize;
-(double)_maximumHeaderLabelLength;
@end

