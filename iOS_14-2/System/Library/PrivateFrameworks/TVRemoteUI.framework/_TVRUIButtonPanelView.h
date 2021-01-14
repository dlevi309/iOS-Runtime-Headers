/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPrimaryButton:(TVRUIButton *)arg1 ;
-(void)_buttonTapped:(id)arg1 ;
-(void)layoutSubviews;
-(TVRUIButton *)primaryButton;
-(id<TVRUIStyleProvider>)styleProvider;
-(void)setStyleProvider:(id<TVRUIStyleProvider>)arg1 ;
-(void)_buttonPressed:(id)arg1 ;
-(id)_searchButton;
-(void)_buttonReleased:(id)arg1 ;
-(void)enableSearchButton;
-(void)_sendButtonTapped:(long long)arg1 ;
-(void)_configureButton:(id)arg1 ;
-(id)_processButtons:(id)arg1 ;
-(NSMutableArray *)leftButtons;
-(NSMutableArray *)rightButtons;
-(void)_enableButton:(id)arg1 ;
-(void)_disableButton:(id)arg1 changeAlpha:(BOOL)arg2 ;
-(void)_sendButtonPressed:(long long)arg1 ;
-(void)_sendButtonReleased:(long long)arg1 ;
-(id<_TVRUIEventDelegate>)buttonEventDelegate;
-(id)initWithPrimaryButtonType:(long long)arg1 secondaryLeftButtons:(id)arg2 secondaryRightButtons:(id)arg3 styleProvider:(id)arg4 ;
-(void)enableButtons;
-(void)disableButtons:(BOOL)arg1 ;
-(void)disableSearchButton;
-(void)setButtonEventDelegate:(id<_TVRUIEventDelegate>)arg1 ;
-(void)setLeftButtons:(NSMutableArray *)arg1 ;
-(void)setRightButtons:(NSMutableArray *)arg1 ;
@end

