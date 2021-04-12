/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <UIKitCore/UIView.h>

@protocol _TVRUIEventDelegate, TVRUIStyleProvider;
@class TVRUIButton, NSMutableArray;

@interface _TVRUIButtonPanelView : UIView {

	id<_TVRUIEventDelegate> _buttonEventDelegate;
	id<TVRUIStyleProvider> _styleProvider;
	TVRUIButton* _primaryButton;
	NSMutableArray* _leftButtons;
	NSMutableArray* _rightButtons;

}

@property (nonatomic,retain) TVRUIButton * primaryButton;                                     //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,retain) NSMutableArray * leftButtons;                                    //@synthesize leftButtons=_leftButtons - In the implementation block
@property (nonatomic,retain) NSMutableArray * rightButtons;                                   //@synthesize rightButtons=_rightButtons - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRUIEventDelegate> buttonEventDelegate;              //@synthesize buttonEventDelegate=_buttonEventDelegate - In the implementation block
@property (nonatomic,retain) id<TVRUIStyleProvider> styleProvider;                            //@synthesize styleProvider=_styleProvider - In the implementation block
-(void)layoutSubviews;
-(void)_buttonPressed:(id)arg1 ;
-(void)setStyleProvider:(id<TVRUIStyleProvider>)arg1 ;
-(id<TVRUIStyleProvider>)styleProvider;
-(void)_buttonTapped:(id)arg1 ;
-(void)setPrimaryButton:(TVRUIButton *)arg1 ;
-(TVRUIButton *)primaryButton;
-(void)_sendButtonTapped:(long long)arg1 ;
-(void)_configureButton:(id)arg1 ;
-(id)_processButtons:(id)arg1 ;
-(NSMutableArray *)leftButtons;
-(NSMutableArray *)rightButtons;
-(void)_buttonReleased:(id)arg1 ;
-(void)_enableButton:(id)arg1 ;
-(void)_disableButton:(id)arg1 changeAlpha:(BOOL)arg2 ;
-(id)_searchButton;
-(void)_sendButtonPressed:(long long)arg1 ;
-(void)_sendButtonReleased:(long long)arg1 ;
-(id<_TVRUIEventDelegate>)buttonEventDelegate;
-(id)initWithPrimaryButtonType:(long long)arg1 secondaryLeftButtons:(id)arg2 secondaryRightButtons:(id)arg3 styleProvider:(id)arg4 ;
-(void)enableButtons;
-(void)disableButtons:(BOOL)arg1 ;
-(void)disableSearchButton;
-(void)enableSearchButton;
-(void)setButtonEventDelegate:(id<_TVRUIEventDelegate>)arg1 ;
-(void)setLeftButtons:(NSMutableArray *)arg1 ;
-(void)setRightButtons:(NSMutableArray *)arg1 ;
@end

