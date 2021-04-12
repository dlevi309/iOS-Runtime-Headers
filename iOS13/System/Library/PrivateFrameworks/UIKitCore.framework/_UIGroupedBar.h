/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIButtonBarDelegate.h>

@class _UIButtonBar, UIVisualEffectView, NSLayoutConstraint, _UIButtonBarButtonVisualProvider, UIBlurEffect, NSArray, NSString;

@interface _UIGroupedBar : UIView <_UIButtonBarDelegate> {

	_UIButtonBar* _leftBar;
	_UIButtonBar* _centerBar;
	_UIButtonBar* _rightBar;
	UIVisualEffectView* _backgroundView;
	NSLayoutConstraint* _centeringConstraint;
	NSLayoutConstraint* _leadingLimitConstraint;
	NSLayoutConstraint* _trailingLimitConstraint;
	BOOL _independentGroupSizes;
	double _margin;
	double _minimumInterItemSpace;
	double _minimumInterGroupSpace;
	double _leadingBarSizeLimit;
	double _trailingBarSizeLimit;
	_UIButtonBarButtonVisualProvider* _visualProvider;
	UIBlurEffect* _backgroundEffect;

}

@property (nonatomic,copy) NSArray * leadingBarButtonGroups; 
@property (nonatomic,copy) NSArray * centerBarButtonGroups; 
@property (nonatomic,copy) NSArray * trailingBarButtonGroups; 
@property (assign,nonatomic) BOOL independentGroupSizes;                                   //@synthesize independentGroupSizes=_independentGroupSizes - In the implementation block
@property (assign,nonatomic) double margin;                                                //@synthesize margin=_margin - In the implementation block
@property (assign,nonatomic) double minimumInterItemSpace;                                 //@synthesize minimumInterItemSpace=_minimumInterItemSpace - In the implementation block
@property (assign,nonatomic) double minimumInterGroupSpace;                                //@synthesize minimumInterGroupSpace=_minimumInterGroupSpace - In the implementation block
@property (assign,nonatomic) double leadingBarSizeLimit;                                   //@synthesize leadingBarSizeLimit=_leadingBarSizeLimit - In the implementation block
@property (assign,nonatomic) double trailingBarSizeLimit;                                  //@synthesize trailingBarSizeLimit=_trailingBarSizeLimit - In the implementation block
@property (nonatomic,copy) _UIButtonBarButtonVisualProvider * visualProvider;              //@synthesize visualProvider=_visualProvider - In the implementation block
@property (nonatomic,copy) UIBlurEffect * backgroundEffect;                                //@synthesize backgroundEffect=_backgroundEffect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)layoutMarginsDidChange;
-(void)didMoveToSuperview;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(id)_debug;
-(UIBlurEffect *)backgroundEffect;
-(void)setBackgroundEffect:(UIBlurEffect *)arg1 ;
-(void)buttonBarWillUpdateLayout:(id)arg1 ;
-(_UIButtonBarButtonVisualProvider *)visualProvider;
-(void)setMinimumInterItemSpace:(double)arg1 ;
-(double)minimumInterItemSpace;
-(void)setVisualProvider:(_UIButtonBarButtonVisualProvider *)arg1 ;
-(void)_updateBarMargins;
-(void)_updateVisualProvider;
-(NSArray *)leadingBarButtonGroups;
-(void)setLeadingBarButtonGroups:(NSArray *)arg1 ;
-(NSArray *)centerBarButtonGroups;
-(void)setCenterBarButtonGroups:(NSArray *)arg1 ;
-(NSArray *)trailingBarButtonGroups;
-(void)setTrailingBarButtonGroups:(NSArray *)arg1 ;
-(void)setIndependentGroupSizes:(BOOL)arg1 ;
-(void)setMargin:(double)arg1 ;
-(void)setMinimumInterGroupSpace:(double)arg1 ;
-(void)setLeadingBarSizeLimit:(double)arg1 ;
-(void)setTrailingBarSizeLimit:(double)arg1 ;
-(void)validateAllItems;
-(void)_setButtonAlpha:(double)arg1 ;
-(BOOL)independentGroupSizes;
-(double)margin;
-(double)minimumInterGroupSpace;
-(double)leadingBarSizeLimit;
-(double)trailingBarSizeLimit;
@end

