/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIPopoverBackgroundView, UIImageView, UIActionSheet, UIPopoverController, UIColor;

@interface _UIPopoverView : UIView {

	UIView* _contentView;
	UIPopoverBackgroundView* _backgroundView;
	Class _backgroundViewClass;
	UIImageView* _toolbarShine;
	BOOL _showsBackgroundComponentHighlights;
	BOOL _showsBackgroundViewHighlight;
	BOOL _showsContentViewHighlight;
	BOOL _contentExtendsOverArrow;
	BOOL _chromeHidden;
	UIActionSheet* _presentedActionSheet;
	UIPopoverController* _popoverController;

}

@property (assign,nonatomic) BOOL showsBackgroundComponentHighlights;              //@synthesize showsBackgroundComponentHighlights=_showsBackgroundComponentHighlights - In the implementation block
@property (assign,nonatomic) BOOL showsBackgroundViewHighlight;                    //@synthesize showsBackgroundViewHighlight=_showsBackgroundViewHighlight - In the implementation block
@property (assign,nonatomic) BOOL showsContentViewHighlight;                       //@synthesize showsContentViewHighlight=_showsContentViewHighlight - In the implementation block
@property (nonatomic,readonly) BOOL contentExtendsOverArrow;                       //@synthesize contentExtendsOverArrow=_contentExtendsOverArrow - In the implementation block
@property (assign,nonatomic) double arrowOffset; 
@property (assign,nonatomic) unsigned long long arrowDirection; 
@property (assign,nonatomic) long long backgroundStyle; 
@property (nonatomic,copy) UIColor * popoverBackgroundColor; 
@property (nonatomic,copy) UIColor * arrowBackgroundColor; 
@property (assign,nonatomic) BOOL chromeHidden;                                    //@synthesize chromeHidden=_chromeHidden - In the implementation block
@property (nonatomic,retain) UIActionSheet * presentedActionSheet;                 //@synthesize presentedActionSheet=_presentedActionSheet - In the implementation block
@property (assign,nonatomic) UIPopoverController * popoverController;              //@synthesize popoverController=_popoverController - In the implementation block
+(id)popoverViewContainingView:(id)arg1 ;
-(int)_style;
-(id)contentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)backgroundView;
-(void)layoutSubviews;
-(UIPopoverController *)popoverController;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_setCornerRadius:(double)arg1 ;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(BOOL)_definesTintColor;
-(id)_normalInheritedTintColor;
-(unsigned long long)arrowDirection;
-(void)setPopoverController:(UIPopoverController *)arg1 ;
-(void)_setFrame:(CGRect)arg1 arrowOffset:(double)arg2 ;
-(void)setPopoverBackgroundColor:(UIColor *)arg1 ;
-(double)arrowOffset;
-(void)setArrowOffset:(double)arg1 ;
-(void)_setPopoverContentView:(id)arg1 ;
-(void)setArrowBackgroundColor:(UIColor *)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(BOOL)contentExtendsOverArrow;
-(id)initWithFrame:(CGRect)arg1 backgroundViewClass:(Class)arg2 embeddedInView:(BOOL)arg3 contentExtendsOverArrow:(BOOL)arg4 ;
-(void)setArrowDirection:(unsigned long long)arg1 ;
-(void)setChromeHidden:(BOOL)arg1 ;
-(void)prepareForAnimatedTransitioningWithCoordinator:(id)arg1 ;
-(BOOL)chromeHidden;
-(UIEdgeInsets)safeAreaInsetsForContentView;
-(UIColor *)arrowBackgroundColor;
-(void)setUseToolbarShine:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 backgroundViewClass:(Class)arg2 ;
-(void)_hideArrow;
-(void)_showArrow;
-(UIActionSheet *)presentedActionSheet;
-(CGRect)_snapshotBounds;
-(long long)backgroundStyle;
-(BOOL)_needsLayoutOnAnimatedFrameChangeForNewFrame:(CGRect)arg1 ;
-(UIColor *)popoverBackgroundColor;
-(id)standardChromeView;
-(void)_layoutToolbarShine;
-(void)_performBlockCheckingDefinesTintColor:(/*^block*/id)arg1 ;
-(id)toolbarShine;
-(BOOL)_allowsCustomizationOfContent;
-(BOOL)showsBackgroundComponentHighlights;
-(void)setShowsBackgroundComponentHighlights:(BOOL)arg1 ;
-(BOOL)showsBackgroundViewHighlight;
-(void)setShowsBackgroundViewHighlight:(BOOL)arg1 ;
-(BOOL)showsContentViewHighlight;
-(void)setShowsContentViewHighlight:(BOOL)arg1 ;
-(void)setPresentedActionSheet:(UIActionSheet *)arg1 ;
@end

