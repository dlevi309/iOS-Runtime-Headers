/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKitCore/UIView.h>

@class BFFPaneHeaderView_RemoteUI, UIButton, _UIBackdropView, UIView, UIScrollView, RUIChoiceViewElement, RUIElement, RUISubHeaderElement;

@interface RUIChoiceView : UIView {

	BFFPaneHeaderView_RemoteUI* _headerView;
	UIButton* _bigChoice;
	UIButton* _smallChoice;
	_UIBackdropView* _trayBackdrop;
	UIView* _buttonTray;
	UIScrollView* _scrollView;
	long long _currentStyle;
	BOOL _usesTwoButtonLayout;
	RUIChoiceViewElement* _target;
	RUIElement* _header;
	RUISubHeaderElement* _subHeader;
	UIEdgeInsets _customSafeAreaInsets;

}

@property (nonatomic,readonly) UIButton * bigChoice;                            //@synthesize bigChoice=_bigChoice - In the implementation block
@property (nonatomic,readonly) UIButton * smallChoice;                          //@synthesize smallChoice=_smallChoice - In the implementation block
@property (nonatomic,readonly) UIView * buttonTray;                             //@synthesize buttonTray=_buttonTray - In the implementation block
@property (assign,nonatomic) UIEdgeInsets customSafeAreaInsets;                 //@synthesize customSafeAreaInsets=_customSafeAreaInsets - In the implementation block
@property (assign,nonatomic,__weak) RUIChoiceViewElement * target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) RUIElement * header;                               //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) RUISubHeaderElement * subHeader;                   //@synthesize subHeader=_subHeader - In the implementation block
@property (nonatomic,readonly) UIView*<RUIHeader> headerView; 
@property (assign,nonatomic) BOOL usesTwoButtonLayout;                          //@synthesize usesTwoButtonLayout=_usesTwoButtonLayout - In the implementation block
-(id)init;
-(void)setTarget:(RUIChoiceViewElement *)arg1 ;
-(RUIChoiceViewElement *)target;
-(void)setImage:(id)arg1 ;
-(RUIElement *)header;
-(id)titleLabel;
-(void)layoutSubviews;
-(UIView*<RUIHeader>)headerView;
-(void)setHeader:(RUIElement *)arg1 ;
-(void)setHeaderTitle:(id)arg1 ;
-(UIView *)buttonTray;
-(void)setUsesTwoButtonLayout:(BOOL)arg1 ;
-(BOOL)usesTwoButtonLayout;
-(void)choiceTapped:(id)arg1 ;
-(void)_updateTrayBackdrop;
-(UIEdgeInsets)customSafeAreaInsets;
-(void)setFirstChoiceTitle:(id)arg1 withColor:(id)arg2 ;
-(void)setSecondChoiceTitle:(id)arg1 withColor:(id)arg2 ;
-(void)setHelpLinkTitle:(id)arg1 ;
-(RUISubHeaderElement *)subHeader;
-(void)setSubHeader:(RUISubHeaderElement *)arg1 ;
-(UIButton *)bigChoice;
-(UIButton *)smallChoice;
-(void)setCustomSafeAreaInsets:(UIEdgeInsets)arg1 ;
@end

