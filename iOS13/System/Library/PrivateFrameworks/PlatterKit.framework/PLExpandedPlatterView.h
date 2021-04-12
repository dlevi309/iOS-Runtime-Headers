/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

#import <PlatterKit/PlatterKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>
#import <libobjc.A.dylib/PLExpandedPlatter.h>
#import <libobjc.A.dylib/PLTitled.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>

@protocol PLExpandedPlatterViewDelegate;
@class UIScrollView, NSArray, UIControl, NSString, NSDate, NSTimeZone, UIButton, UIView, PLPlatterHeaderContentView, MTMaterialView, PLInterfaceActionGroupView;

@interface PLExpandedPlatterView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate, _UICursorInteractionDelegate, PLExpandedPlatter, PLTitled, PLContentSizeCategoryAdjusting> {

	UIView* _headerBackgroundView;
	UIView* _headerKeyLineView;
	UIView* _headerTintView;
	PLPlatterHeaderContentView* _headerContentView;
	UIView* _scrollViewContentView;
	UIView* _topRubberbandingView;
	UIView* _customContentView;
	MTMaterialView* _actionsBackgroundView;
	PLInterfaceActionGroupView* _actionsView;
	BOOL _actionsHidden;
	BOOL _clipsVisibleContentToBounds;
	UIScrollView* _scrollView;
	UIControl* _dismissControl;
	double _contentBottomInset;
	long long _dismissControlPosition;
	id<PLExpandedPlatterViewDelegate> _delegate;
	UIView* _mainContentView;
	CGSize _customContentSize;

}

@property (getter=_mainContentView,nonatomic,readonly) UIView * mainContentView; 
@property (getter=_headerContentView,nonatomic,readonly) UIView * headerContentView; 
@property (getter=_mainContentView,nonatomic,retain) UIView * mainContentView;                    //@synthesize mainContentView=_mainContentView - In the implementation block
@property (assign,nonatomic,__weak) id<PLExpandedPlatterViewDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * customContentView;                                        //@synthesize customContentView=_customContentView - In the implementation block
@property (assign,nonatomic) BOOL hasShadow; 
@property (assign,getter=isBackgroundBlurred,nonatomic) BOOL backgroundBlurred; 
@property (nonatomic,readonly) UIScrollView * scrollView;                                         //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) CGSize customContentSize;                                            //@synthesize customContentSize=_customContentSize - In the implementation block
@property (nonatomic,retain) NSArray * interfaceActions; 
@property (assign,getter=isActionsHidden,nonatomic) BOOL actionsHidden; 
@property (nonatomic,readonly) UIControl * dismissControl;                                        //@synthesize dismissControl=_dismissControl - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets dismissControlInsets; 
@property (assign,nonatomic) long long dismissControlPosition;                                    //@synthesize dismissControlPosition=_dismissControlPosition - In the implementation block
@property (assign,nonatomic) BOOL clipsVisibleContentToBounds;                                    //@synthesize clipsVisibleContentToBounds=_clipsVisibleContentToBounds - In the implementation block
@property (assign,nonatomic) double contentBottomInset;                                           //@synthesize contentBottomInset=_contentBottomInset - In the implementation block
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory; 
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
@property (nonatomic,copy) NSArray * icons; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSDate * date; 
@property (assign,getter=isDateAllDay,nonatomic) BOOL dateAllDay; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic) long long dateFormatStyle; 
@property (nonatomic,readonly) NSArray * iconButtons; 
@property (nonatomic,readonly) UIButton * utilityButton; 
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id<PLExpandedPlatterViewDelegate>)delegate;
-(void)setDelegate:(id<PLExpandedPlatterViewDelegate>)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)date;
-(NSTimeZone *)timeZone;
-(NSArray *)icons;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIView *)customContentView;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(BOOL)hasShadow;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(double)contentBottomInset;
-(UIScrollView *)scrollView;
-(BOOL)adjustsFontForContentSizeCategory;
-(void)setHasShadow:(BOOL)arg1 ;
-(void)setIcons:(NSArray *)arg1 ;
-(id)_mainContentView;
-(CGRect)scrollViewFrame;
-(void)setInterfaceActions:(NSArray *)arg1 ;
-(NSArray *)interfaceActions;
-(void)_layoutScrollView;
-(CGSize)_contentViewSize;
-(void)_reduceTransparencyDidChange:(id)arg1 ;
-(long long)dateFormatStyle;
-(void)setDateFormatStyle:(long long)arg1 ;
-(NSArray *)iconButtons;
-(CGSize)sizeThatFitsContentWithSize:(CGSize)arg1 ;
-(void)_configureHeaderViewsIfNecessary;
-(UIButton *)utilityButton;
-(BOOL)adjustForContentSizeCategoryChange;
-(CGSize)contentSizeForSize:(CGSize)arg1 ;
-(id)_headerContentView;
-(void)setBackgroundBlurred:(BOOL)arg1 ;
-(BOOL)isBackgroundBlurred;
-(void)_configureCustomContentViewIfNecessary;
-(UIEdgeInsets)dismissControlInsets;
-(CGSize)sizeExcludingActions;
-(CGSize)contentSizeExcludingActions;
-(CGSize)actionsSizeThatFits:(CGSize)arg1 ;
-(CGRect)frameForPlatterFrame:(CGRect)arg1 ;
-(CGRect)platterFrameForFrame:(CGRect)arg1 ;
-(UIEdgeInsets)minimumScrollViewContentInsets;
-(CGSize)customContentSize;
-(void)setCustomContentSize:(CGSize)arg1 ;
-(BOOL)isActionsHidden;
-(void)setActionsHidden:(BOOL)arg1 ;
-(UIControl *)dismissControl;
-(long long)dismissControlPosition;
-(void)setDismissControlPosition:(long long)arg1 ;
-(BOOL)clipsVisibleContentToBounds;
-(void)setClipsVisibleContentToBounds:(BOOL)arg1 ;
-(void)setContentBottomInset:(double)arg1 ;
-(void)_configureScrollViewIfNecessary;
-(BOOL)isDateAllDay;
-(void)setDateAllDay:(BOOL)arg1 ;
-(void)_configureDismissControlIfNecessary;
-(void)_configureScrollViewContentViewIfNecessary;
-(void)_configureMainContentViewIfNecessary;
-(void)_layoutDismissControl;
-(void)_layoutHeader;
-(void)_layoutScrollViewContentView;
-(void)_layoutMainContentView;
-(void)_layoutCustomContentView;
-(void)_layoutActionsView;
-(void)_layoutTopRubberbandingView;
-(CGSize)_sizeThatFitsContentExcludingActionsWithSize:(CGSize)arg1 ;
-(UIEdgeInsets)_dismissControlTotalOutset;
-(CGSize)_contentSizeThatFitsContentWithSizeExcludingActions:(CGSize)arg1 ;
-(CGSize)_actionsSizeThatFits:(CGSize)arg1 includingPadding:(BOOL)arg2 ;
-(CGRect)_boundsInsetHorizontallyFromDismissControlIfNecessary;
-(void)_configureActionViewIfNecessaryWithActions:(id)arg1 ;
-(double)_headerKeyLineAlphaForContentOffset;
-(void)_updateHeaderKeyLineAlphaIfNecessary;
-(void)_configureHeaderBackgroundForReduceTransparencyIfNecessary;
-(void)_configureHeaderBackgroundDefaultIfNecessary;
-(void)_configureCustomContentView;
-(void)_configureActionsBackgroundViewIfNecessaryWithActions:(id)arg1 ;
-(CGRect)_scrollViewContentViewFrame;
-(CGRect)_effectiveMainContentViewFrame;
-(CGRect)_actionsViewFrame;
-(void)setMainContentView:(UIView *)arg1 ;
-(void)_layoutMainContentViewIfNecessary;
-(CGSize)_flexibleAreaSizeForBounds:(CGRect)arg1 ;
-(CGRect)_mainContentViewFrame;
@end

