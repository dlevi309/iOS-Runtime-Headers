/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <UIKitCore/UIView.h>

@class RUIModernHeaderView, UIButton, UIVisualEffectView, UIView, UIScrollView, NSLayoutConstraint, RUIChoiceViewElement, RUIElement, RUISubHeaderElement;

@interface RUIChoiceView : UIView {

	RUIModernHeaderView* _headerView;
	UIButton* _bigChoice;
	UIButton* _smallChoice;
	UIVisualEffectView* _trayBackdrop;
	UIView* _buttonTray;
	UIScrollView* _scrollView;
	long long _currentStyle;
	NSLayoutConstraint* _trayHeightConstraint;
	BOOL _usesTwoButtonLayout;
	RUIChoiceViewElement* _target;
	RUIElement* _header;
	RUISubHeaderElement* _subHeader;

}

@property (nonatomic,readonly) UIButton * bigChoice;                            //@synthesize bigChoice=_bigChoice - In the implementation block
@property (nonatomic,readonly) UIButton * smallChoice;                          //@synthesize smallChoice=_smallChoice - In the implementation block
@property (nonatomic,readonly) UIView * buttonTray;                             //@synthesize buttonTray=_buttonTray - In the implementation block
@property (assign,nonatomic,__weak) RUIChoiceViewElement * target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) RUIElement * header;                               //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) RUISubHeaderElement * subHeader;                   //@synthesize subHeader=_subHeader - In the implementation block
@property (nonatomic,readonly) UIView*<RUIHeader> headerView; 
@property (assign,nonatomic) BOOL usesTwoButtonLayout;                          //@synthesize usesTwoButtonLayout=_usesTwoButtonLayout - In the implementation block
-(id)titleLabel;
-(void)setTarget:(RUIChoiceViewElement *)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)setHeader:(RUIElement *)arg1 ;
-(id)init;
-(RUIElement *)header;
-(void)setUsesTwoButtonLayout:(BOOL)arg1 ;
-(BOOL)usesTwoButtonLayout;
-(void)layoutSubviews;
-(UIView *)buttonTray;
-(RUIChoiceViewElement *)target;
-(void)setHeaderTitle:(id)arg1 ;
-(UIView*<RUIHeader>)headerView;
-(RUISubHeaderElement *)subHeader;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_setupTrayConstraints;
-(void)choiceTapped:(id)arg1 ;
-(BOOL)headerUsesModernHeaderView;
-(void)setFirstChoiceTitle:(id)arg1 withColor:(id)arg2 ;
-(void)setSecondChoiceTitle:(id)arg1 withColor:(id)arg2 ;
-(void)setHelpLinkTitle:(id)arg1 ;
-(void)setSubHeader:(RUISubHeaderElement *)arg1 ;
-(UIButton *)bigChoice;
-(UIButton *)smallChoice;
@end

