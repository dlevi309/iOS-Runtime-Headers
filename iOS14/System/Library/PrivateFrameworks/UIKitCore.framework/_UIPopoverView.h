/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 backgroundViewClass:(Class)arg2 embeddedInView:(BOOL)arg3 contentExtendsOverArrow:(BOOL)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)backgroundStyle;
-(id)backgroundView;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(id)_normalInheritedTintColor;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(UIColor *)popoverBackgroundColor;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGRect)_snapshotBounds;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)setUseToolbarShine:(BOOL)arg1 ;
-(void)_hideArrow;
-(void)_showArrow;
-(UIActionSheet *)presentedActionSheet;
-(void)setPopoverController:(UIPopoverController *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 backgroundViewClass:(Class)arg2 ;
-(void)_setFrame:(CGRect)arg1 arrowOffset:(double)arg2 ;
-(BOOL)chromeHidden;
-(void)setPopoverBackgroundColor:(UIColor *)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(BOOL)_needsLayoutOnAnimatedFrameChangeForNewFrame:(CGRect)arg1 ;
-(void)_setPopoverContentView:(id)arg1 ;
-(UIColor *)arrowBackgroundColor;
-(void)setArrowBackgroundColor:(UIColor *)arg1 ;
-(void)setArrowDirection:(unsigned long long)arg1 ;
-(double)arrowOffset;
-(BOOL)contentExtendsOverArrow;
-(UIPopoverController *)popoverController;
-(UIEdgeInsets)safeAreaInsetsForContentView;
-(void)_setCornerRadius:(double)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)contentView;
-(BOOL)_definesTintColor;
-(unsigned long long)arrowDirection;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setArrowOffset:(double)arg1 ;
-(id)standardChromeView;
-(void)_layoutToolbarShine;
-(void)_performBlockCheckingDefinesTintColor:(/*^block*/id)arg1 ;
-(id)toolbarShine;
-(void)setChromeHidden:(BOOL)arg1 ;
-(BOOL)_allowsCustomizationOfContent;
-(BOOL)showsBackgroundComponentHighlights;
-(void)setShowsBackgroundComponentHighlights:(BOOL)arg1 ;
-(BOOL)showsBackgroundViewHighlight;
-(void)setShowsBackgroundViewHighlight:(BOOL)arg1 ;
-(BOOL)showsContentViewHighlight;
-(void)setShowsContentViewHighlight:(BOOL)arg1 ;
-(void)setPresentedActionSheet:(UIActionSheet *)arg1 ;
@end

