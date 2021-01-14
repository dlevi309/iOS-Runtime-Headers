/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UINavigationBar, _UINavigationBarItemStack, _UINavigationBarModernPromptView, _UINavigationBarContentView, _UIBarBackground, _UINavigationBarLargeTitleView, _UINavigationBarLayout, _UINavigationBarContentViewLayout, _UINavigationBarLargeTitleViewLayout, NSMutableSet, UIView;

@interface _UINavigationBarTransitionContext : NSObject {

	UINavigationBar* _navigationBar;
	_UINavigationBarItemStack* _stack;
	_UINavigationBarModernPromptView* _promptView;
	_UINavigationBarContentView* _contentView;
	_UIBarBackground* _backgroundView;
	_UINavigationBarLargeTitleView* _largeTitleView;
	_UINavigationBarLayout* _fromLayout;
	_UINavigationBarLayout* _toLayout;
	_UINavigationBarContentViewLayout* _fromContentLayout;
	_UINavigationBarContentViewLayout* _toContentLayout;
	_UINavigationBarLargeTitleViewLayout* _fromLargeTitleLayout;
	_UINavigationBarLargeTitleViewLayout* _toLargeTitleLayout;
	double _backgroundAlpha;
	int _largeTitleTransitionType;
	long long _apiVersion;
	struct {
		unsigned isRTL : 1;
		unsigned compact : 1;
		unsigned allowLargeTitles : 1;
		unsigned twoPart : 1;
		unsigned beginWithLargeTitle : 1;
		unsigned endWithLargeTitle : 1;
		unsigned observedScrollViewOffsetIsApplicable : 1;
		unsigned sharesContentViewLayouts : 1;
	}  _navigationBarTransitionContextFlags;
	NSMutableSet* _clippingViews;
	CGPoint _startingContentOffsetForObservedScrollView;

}

@property (nonatomic,readonly) int transition; 
@property (assign,nonatomic) UINavigationBar * navigationBar;                                 //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) _UINavigationBarItemStack * stack;                               //@synthesize stack=_stack - In the implementation block
@property (assign,setter=setRTL:,nonatomic) BOOL isRTL; 
@property (assign,nonatomic) BOOL compact; 
@property (assign,nonatomic) BOOL allowLargeTitles; 
@property (assign,nonatomic) BOOL twoPart; 
@property (assign,nonatomic) long long apiVersion;                                            //@synthesize apiVersion=_apiVersion - In the implementation block
@property (assign,nonatomic) double backgroundAlpha;                                          //@synthesize backgroundAlpha=_backgroundAlpha - In the implementation block
@property (nonatomic,retain) _UINavigationBarModernPromptView * promptView;                   //@synthesize promptView=_promptView - In the implementation block
@property (nonatomic,retain) _UINavigationBarContentView * contentView;                       //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) _UIBarBackground * backgroundView;                               //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) _UINavigationBarLargeTitleView * largeTitleView;                 //@synthesize largeTitleView=_largeTitleView - In the implementation block
@property (nonatomic,readonly) UIView * viewFadingInFromCustomAlpha; 
@property (nonatomic,readonly) UIView * viewUsingEaseOutCurve; 
@property (nonatomic,readonly) UIView * viewUsingEaseInCurve; 
@property (nonatomic,readonly) double contentViewFittingHeight; 
@property (nonatomic,readonly) double contentViewMaxY; 
@property (assign,nonatomic) BOOL beginWithLargeTitle; 
@property (assign,nonatomic) BOOL endWithLargeTitle; 
@property (assign,nonatomic) CGPoint startingContentOffsetForObservedScrollView;              //@synthesize startingContentOffsetForObservedScrollView=_startingContentOffsetForObservedScrollView - In the implementation block
@property (assign,nonatomic) BOOL observedScrollViewOffsetIsApplicable; 
@property (assign,nonatomic) BOOL sharesContentViewLayouts; 
@property (nonatomic,retain) _UINavigationBarLayout * fromLayout;                             //@synthesize fromLayout=_fromLayout - In the implementation block
@property (nonatomic,retain) _UINavigationBarLayout * toLayout;                               //@synthesize toLayout=_toLayout - In the implementation block
+(id)contextForTransition:(int)arg1 ;
-(void)_removeAllClippingViews;
-(void)_animateAsTwoPartsWithOverlap:(double)arg1 partOne:(/*^block*/id)arg2 partTwo:(/*^block*/id)arg3 ;
-(void)setStartingContentOffsetForObservedScrollView:(CGPoint)arg1 ;
-(UIView *)viewUsingEaseInCurve;
-(void)setStack:(_UINavigationBarItemStack *)arg1 ;
-(void)_prepareToBottomPaletteAtEdge:(unsigned long long)arg1 ;
-(void)setToLayout:(_UINavigationBarLayout *)arg1 ;
-(BOOL)observedScrollViewOffsetIsApplicable;
-(void)setBackgroundView:(_UIBarBackground *)arg1 ;
-(BOOL)isRTL;
-(void)setRTL:(BOOL)arg1 ;
-(_UIBarBackground *)backgroundView;
-(_UINavigationBarItemStack *)stack;
-(void)setObservedScrollViewOffsetIsApplicable:(BOOL)arg1 ;
-(void)_addClippingView:(id)arg1 ;
-(void)setBackgroundAlpha:(double)arg1 ;
-(double)contentViewMaxY;
-(void)setBeginWithLargeTitle:(BOOL)arg1 ;
-(void)setAllLargeTitleLayoutsVisible;
-(UINavigationBar *)navigationBar;
-(long long)apiVersion;
-(UIView *)viewUsingEaseOutCurve;
-(BOOL)sharesContentViewLayouts;
-(void)setSharesContentViewLayouts:(BOOL)arg1 ;
-(double)backgroundAlpha;
-(_UINavigationBarModernPromptView *)promptView;
-(id)description;
-(void)recordUpdates:(/*^block*/id)arg1 ;
-(void)_updateIncomingLayoutWidthToMatchOutgoingLayout;
-(void)complete;
-(BOOL)allowLargeTitles;
-(BOOL)endWithLargeTitle;
-(void)setAllowLargeTitles:(BOOL)arg1 ;
-(void)_animateAsTwoPartsWithoutOverlap:(/*^block*/id)arg1 partTwo:(/*^block*/id)arg2 ;
-(double)contentViewFittingHeight;
-(void)setContentView:(_UINavigationBarContentView *)arg1 ;
-(UIView *)viewFadingInFromCustomAlpha;
-(void)setApiVersion:(long long)arg1 ;
-(void)setPromptView:(_UINavigationBarModernPromptView *)arg1 ;
-(void)_animateAsTwoPartsWithOverlapIfNecessaryPartOne:(/*^block*/id)arg1 partTwo:(/*^block*/id)arg2 ;
-(void)setTwoPart:(BOOL)arg1 ;
-(void)setCompact:(BOOL)arg1 ;
-(void)setNavigationBar:(UINavigationBar *)arg1 ;
-(void)animate;
-(BOOL)compact;
-(_UINavigationBarLayout *)fromLayout;
-(void)_animateBackgroundView;
-(void)setEndWithLargeTitle:(BOOL)arg1 ;
-(void)_animateFromBottomPaletteAtEdge:(unsigned long long)arg1 ;
-(_UINavigationBarContentView *)contentView;
-(_UINavigationBarLayout *)toLayout;
-(void)_resetContentAndLargeTitleViewCompleted:(BOOL)arg1 ;
-(void)cancel;
-(CGPoint)startingContentOffsetForObservedScrollView;
-(void)prepare;
-(BOOL)twoPart;
-(void)setFromLayout:(_UINavigationBarLayout *)arg1 ;
-(_UINavigationBarLargeTitleView *)largeTitleView;
-(BOOL)beginWithLargeTitle;
-(void)setLargeTitleView:(_UINavigationBarLargeTitleView *)arg1 ;
@end

