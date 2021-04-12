/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIKeyCommandDiscoverabilityHUDColumnViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class NSArray, UIView, NSLayoutConstraint, UIBlurEffect, UIVibrancyEffect, UIVisualEffectView, UICollectionViewFlowLayout, UICollectionView, UIPageControl, UIKeyCommandDiscoverabilityHUDVisualStyle, NSString;

@interface UIKeyCommandDiscoverabilityHUDView : UIView <UIKeyCommandDiscoverabilityHUDColumnViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {

	NSArray* _keyCommands;
	UIView* _HUDOutlineView;
	NSLayoutConstraint* _HUDOutlineViewWidthConstraint;
	NSLayoutConstraint* _HUDOutlineViewHeightConstraint;
	UIBlurEffect* _blurEffect;
	UIVibrancyEffect* _vibrancyEffect;
	UIVisualEffectView* _backdropView;
	UICollectionViewFlowLayout* _flowLayout;
	UICollectionView* _collectionView;
	NSLayoutConstraint* _collectionViewTopConstraint;
	NSLayoutConstraint* _collectionViewBottomConstraint;
	NSLayoutConstraint* _collectionViewLeadingConstraint;
	NSLayoutConstraint* _collectionViewTrailingConstraint;
	UIPageControl* _pageControl;
	NSLayoutConstraint* _pageControlYAnchor;
	double _fontScaleFactor;
	unsigned long long _pageCount;
	unsigned long long _cellsPerColumn;
	CGSize _columnSize;
	BOOL _twoColumnsPerPage;
	BOOL _shouldUseWordsNotSymbols;
	UIKeyCommandDiscoverabilityHUDVisualStyle* _visualStyle;

}

@property (getter=_shouldUseWordsNotSymbols,nonatomic,readonly) BOOL shouldUseWordsNotSymbols;              //@synthesize shouldUseWordsNotSymbols=_shouldUseWordsNotSymbols - In the implementation block
@property (nonatomic,retain) UIKeyCommandDiscoverabilityHUDVisualStyle * visualStyle;                       //@synthesize visualStyle=_visualStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBounds:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIKeyCommandDiscoverabilityHUDVisualStyle *)visualStyle;
-(void)setVisualStyle:(UIKeyCommandDiscoverabilityHUDVisualStyle *)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)_pageControlValueChanged:(id)arg1 ;
-(id)initWithKeyCommands:(id)arg1 keyboard:(GSKeyboardRef)arg2 ;
-(void)animateOutWithCompletion:(/*^block*/id)arg1 ;
-(id)discoverabilityHUDColumnView:(id)arg1 descriptionStringForKeyCommand:(id)arg2 ;
-(id)discoverabilityHUDColumnView:(id)arg1 modifiersStringForKeyCommand:(id)arg2 ;
-(id)discoverabilityHUDColumnView:(id)arg1 inputStringForKeyCommand:(id)arg2 ;
-(void)recalculatePages;
-(id)_discoverabilityTitleForKeyCommand:(id)arg1 ;
-(id)_stringForModifierFlags:(long long)arg1 ;
-(id)_stringForInput:(id)arg1 withModifierFlags:(long long)arg2 ;
-(id)_displayInputAndModifierFlagsForInput:(id)arg1 modifierFlags:(long long)arg2 ;
-(id)_keyCommandsForColumnIndex:(unsigned long long)arg1 withCellsPerColumn:(unsigned long long)arg2 ;
-(CGSize)_bestColumnSizeWithCellsPerColumn:(unsigned long long)arg1 maxColumnSize:(CGSize)arg2 columnCount:(unsigned long long)arg3 usingColumnView:(id)arg4 getFontScaleFactor:(double*)arg5 ;
-(id)_columnViewForColumnIndex:(unsigned long long)arg1 reusingView:(id)arg2 ;
-(void)animateIn;
-(BOOL)_shouldUseWordsNotSymbols;
@end

