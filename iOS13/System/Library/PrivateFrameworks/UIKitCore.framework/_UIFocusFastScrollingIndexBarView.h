/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, NSMutableArray, UIFont, NSArray;

@interface _UIFocusFastScrollingIndexBarView : UIView {

	UIView* _indicatorView;
	double _preferredIndicatorWidth;
	double _preferredLabelFontSize;
	NSMutableArray* _backgroundLabels;
	NSMutableArray* _foregroundLabels;
	UIView* _foregroundWrapperView;
	UIView* _foregroundMaskView;
	long long _deflectedIndex;
	double _deflectionAmount;
	UIFont* _backgroundFont;
	UIFont* _foregroundFont;
	NSArray* _entries;
	long long _focusProminence;
	long long _style;
	CGPoint _minimumContentOffset;
	CGPoint _maximumContentOffset;

}

@property (nonatomic,copy) NSArray * entries;                           //@synthesize entries=_entries - In the implementation block
@property (assign,nonatomic) long long focusProminence;                 //@synthesize focusProminence=_focusProminence - In the implementation block
@property (assign,nonatomic) CGPoint minimumContentOffset;              //@synthesize minimumContentOffset=_minimumContentOffset - In the implementation block
@property (assign,nonatomic) CGPoint maximumContentOffset;              //@synthesize maximumContentOffset=_maximumContentOffset - In the implementation block
@property (assign,nonatomic) long long style;                           //@synthesize style=_style - In the implementation block
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)setEntries:(NSArray *)arg1 ;
-(NSArray *)entries;
-(void)_updateColors;
-(void)setMinimumContentOffset:(CGPoint)arg1 ;
-(void)setMaximumContentOffset:(CGPoint)arg1 ;
-(void)resetDeflection:(BOOL)arg1 ;
-(void)setIndexOfDeflectedEntry:(long long)arg1 amount:(double)arg2 ;
-(void)setFocusProminence:(long long)arg1 ;
-(void)updateForContentOffset:(CGPoint)arg1 ;
-(void)_showNormalFocusProminence;
-(void)_determinePreferredSizes;
-(void)_showReducedFocusProminence;
-(double)_indicatorVerticalPositionForContentOffset:(CGPoint)arg1 ;
-(void)_createLabels;
-(id)_indicatorShadowPath;
-(id)_backgroundFont;
-(id)_backgroundLabelTextColor;
-(id)_foregroundFont;
-(BOOL)_shouldUseDarkAppearance;
-(id)_upperEntryForOffset:(double)arg1 ;
-(id)_lowerEntryForOffset:(double)arg1 ;
-(long long)focusProminence;
-(CGPoint)minimumContentOffset;
-(CGPoint)maximumContentOffset;
@end

