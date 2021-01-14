/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMargin:(double)arg1 ;
-(void)setMinimumInterItemSpace:(double)arg1 ;
-(double)margin;
-(id)_debug;
-(void)layoutMarginsDidChange;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateVisualProvider;
-(void)encodeWithCoder:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)setVisualProvider:(_UIButtonBarButtonVisualProvider *)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundEffect:(UIBlurEffect *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLeadingBarButtonGroups:(NSArray *)arg1 ;
-(void)validateAllItems;
-(void)_setButtonAlpha:(double)arg1 ;
-(void)setTrailingBarButtonGroups:(NSArray *)arg1 ;
-(double)minimumInterItemSpace;
-(BOOL)independentGroupSizes;
-(double)minimumInterGroupSpace;
-(double)leadingBarSizeLimit;
-(double)trailingBarSizeLimit;
-(_UIButtonBarButtonVisualProvider *)visualProvider;
-(UIBlurEffect *)backgroundEffect;
-(void)buttonBarWillUpdateLayout:(id)arg1 ;
-(void)_updateBarMargins;
-(NSArray *)leadingBarButtonGroups;
-(NSArray *)centerBarButtonGroups;
-(void)setCenterBarButtonGroups:(NSArray *)arg1 ;
-(NSArray *)trailingBarButtonGroups;
-(void)setIndependentGroupSizes:(BOOL)arg1 ;
-(void)setMinimumInterGroupSpace:(double)arg1 ;
-(void)setLeadingBarSizeLimit:(double)arg1 ;
-(void)setTrailingBarSizeLimit:(double)arg1 ;
@end

