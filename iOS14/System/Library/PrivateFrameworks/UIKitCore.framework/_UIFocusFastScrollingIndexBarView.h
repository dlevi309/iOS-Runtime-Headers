/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)canBecomeFocused;
-(void)_updateColors;
-(void)setEntries:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(id)_indicatorShadowPath;
-(void)_showNormalFocusProminence;
-(void)_determinePreferredSizes;
-(void)_showReducedFocusProminence;
-(id)_backgroundFont;
-(double)_indicatorVerticalPositionForContentOffset:(CGPoint)arg1 ;
-(void)_createLabels;
-(id)_backgroundLabelTextColor;
-(id)_foregroundFont;
-(long long)focusProminence;
-(BOOL)_shouldUseDarkAppearance;
-(id)_upperEntryForOffset:(double)arg1 ;
-(id)_lowerEntryForOffset:(double)arg1 ;
-(CGPoint)minimumContentOffset;
-(CGPoint)maximumContentOffset;
-(NSArray *)entries;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setMinimumContentOffset:(CGPoint)arg1 ;
-(void)setMaximumContentOffset:(CGPoint)arg1 ;
-(void)resetDeflection:(BOOL)arg1 ;
-(void)setIndexOfDeflectedEntry:(long long)arg1 amount:(double)arg2 ;
-(long long)style;
-(void)setFocusProminence:(long long)arg1 ;
-(void)updateForContentOffset:(CGPoint)arg1 ;
@end

