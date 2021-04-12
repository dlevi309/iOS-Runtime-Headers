/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol TUISystemInputAssistantPageViewDelegate;
@class UIView, TUIPredictionCellButton, UIScrollView, NSString;

@interface TUISystemInputAssistantPageView : UIView <UIScrollViewDelegate> {

	unsigned long long _currentChevronStyle;
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
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)_contentSize;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)_setRenderConfig:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(TUIPredictionCellButton *)expandButton;
-(void)setPrimaryView:(UIView *)arg1 ;
-(UIView *)primaryView;
-(void)setSecondaryView:(UIView *)arg1 ;
-(void)setHidesExpandButton:(BOOL)arg1 ;
-(void)updateScrollEnabled;
-(BOOL)_expandButtonVisible;
-(unsigned long long)_expandChevronImageStyleForRenderConfig:(id)arg1 ;
-(void)_updateExpandButtonChevronImage;
-(id)imageSymbolConfigurationForAssistantItem;
-(id)_createExpandButtonIfNecessary;
-(void)setSecondaryViewVisible:(BOOL)arg1 ;
-(void)setSecondaryViewVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSecondaryViewVisible:(BOOL)arg1 withAnimationType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_checkOldBounds:(CGRect)arg1 forContentOffsetChangeWithNewBounds:(CGRect)arg2 ;
-(UIView *)secondaryView;
-(BOOL)hidesExpandButton;
-(id<TUISystemInputAssistantPageViewDelegate>)pageViewDelegate;
-(void)setPageViewDelegate:(id<TUISystemInputAssistantPageViewDelegate>)arg1 ;
-(BOOL)secondaryViewVisible;
-(UIView *)clipView;
-(void)setClipView:(UIView *)arg1 ;
-(UIView *)primaryContainerView;
-(void)setPrimaryContainerView:(UIView *)arg1 ;
@end

