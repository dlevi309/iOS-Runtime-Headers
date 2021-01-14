/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SiriUICardSnippetViewDataSource, SiriUICardSnippetViewDelegate;
@class UIView, SiriUISashView, SiriUISnippetViewController, UIButton;

@interface SiriUICardSnippetView : UIView {

	UIView* _cardView;
	SiriUISashView* _sashView;
	BOOL _shouldClipTopOfCard;
	SiriUISnippetViewController* _backingViewController;
	id<SiriUICardSnippetViewDataSource> _dataSource;
	id<SiriUICardSnippetViewDelegate> _delegate;

}

@property (assign,getter=isNavigating,nonatomic) BOOL navigating; 
@property (assign,nonatomic) BOOL shouldClipTopOfCard;                                                //@synthesize shouldClipTopOfCard=_shouldClipTopOfCard - In the implementation block
@property (nonatomic,readonly) UIButton * backNavigationButton; 
@property (assign,nonatomic,__weak) SiriUISnippetViewController * backingViewController;              //@synthesize backingViewController=_backingViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUICardSnippetViewDataSource> dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUICardSnippetViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id<SiriUICardSnippetViewDelegate>)delegate;
-(id<SiriUICardSnippetViewDataSource>)dataSource;
-(void)setDelegate:(id<SiriUICardSnippetViewDelegate>)arg1 ;
-(void)setNavigating:(BOOL)arg1 ;
-(void)setDataSource:(id<SiriUICardSnippetViewDataSource>)arg1 ;
-(void)layoutSubviews;
-(void)reloadData;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setCardView:(id)arg1 ;
-(BOOL)isNavigating;
-(id)accessibilityIdentifier;
-(void)setBackingViewController:(SiriUISnippetViewController *)arg1 ;
-(UIButton *)backNavigationButton;
-(void)setShouldClipTopOfCard:(BOOL)arg1 ;
-(void)_sashViewRecognizedTapGestureWithGestureRecognizer:(id)arg1 ;
-(BOOL)shouldClipTopOfCard;
-(SiriUISnippetViewController *)backingViewController;
@end

