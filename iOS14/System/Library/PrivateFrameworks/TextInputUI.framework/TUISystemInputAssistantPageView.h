/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol TUISystemInputAssistantPageViewDelegate;
@class UIView, TUIPredictionCellButton, UIScrollView, NSString;

@interface TUISystemInputAssistantPageView : UIView <UIScrollViewDelegate> {

	unsigned long long _currentChevronStyle;
	BOOL _secondaryViewInitialized;
	BOOL _layoutIsDirty;
	BOOL _hidesExpandButton;
	BOOL _secondaryViewVisible;
	UIView* _primaryView;
	UIView* _secondaryView;
	TUIPredictionCellButton* _expandButton;
	id<TUISystemInputAssistantPageViewDelegate> _pageViewDelegate;
	UIView* _clipView;
	UIView* _primaryContainerView;
	UIScrollView* _scrollView;

}

@property (nonatomic,retain) UIView * clipView;                                                                //@synthesize clipView=_clipView - In the implementation block
@property (nonatomic,retain) UIView * primaryContainerView;                                                    //@synthesize primaryContainerView=_primaryContainerView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                        //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIView * primaryView;                                                             //@synthesize primaryView=_primaryView - In the implementation block
@property (nonatomic,retain) UIView * secondaryView;                                                           //@synthesize secondaryView=_secondaryView - In the implementation block
@property (assign,nonatomic) BOOL hidesExpandButton;                                                           //@synthesize hidesExpandButton=_hidesExpandButton - In the implementation block
@property (nonatomic,readonly) TUIPredictionCellButton * expandButton;                                         //@synthesize expandButton=_expandButton - In the implementation block
@property (assign,nonatomic,__weak) id<TUISystemInputAssistantPageViewDelegate> pageViewDelegate;              //@synthesize pageViewDelegate=_pageViewDelegate - In the implementation block
@property (assign,nonatomic) BOOL secondaryViewVisible;                                                        //@synthesize secondaryViewVisible=_secondaryViewVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setRenderConfig:(id)arg1 ;
-(void)setPageViewDelegate:(id<TUISystemInputAssistantPageViewDelegate>)arg1 ;
-(id)_createExpandButtonIfNecessary;
-(void)setSecondaryViewVisible:(BOOL)arg1 ;
-(void)setHidesExpandButton:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_checkOldBounds:(CGRect)arg1 forContentOffsetChangeWithNewBounds:(CGRect)arg2 ;
-(UIView *)secondaryView;
-(UIView *)clipView;
-(unsigned long long)_expandChevronImageStyleForRenderConfig:(id)arg1 ;
-(BOOL)secondaryViewVisible;
-(void)setBounds:(CGRect)arg1 ;
-(void)updateScrollEnabled;
-(void)layoutSubviews;
-(CGSize)_contentSize;
-(void)setSecondaryViewVisible:(BOOL)arg1 force:(BOOL)arg2 withAnimationType:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)setPrimaryView:(UIView *)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(id<TUISystemInputAssistantPageViewDelegate>)pageViewDelegate;
-(BOOL)hidesExpandButton;
-(BOOL)_expandButtonVisible;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)_updateExpandButtonChevronImage;
-(void)setPrimaryContainerView:(UIView *)arg1 ;
-(id)imageSymbolConfigurationForAssistantItem;
-(UIView *)primaryView;
-(TUIPredictionCellButton *)expandButton;
-(void)setSecondaryViewVisible:(BOOL)arg1 withAnimationType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(UIScrollView *)scrollView;
-(void)setSecondaryViewVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(UIView *)primaryContainerView;
-(void)setClipView:(UIView *)arg1 ;
-(void)setNeedsLayout;
-(void)setSecondaryView:(UIView *)arg1 ;
@end

