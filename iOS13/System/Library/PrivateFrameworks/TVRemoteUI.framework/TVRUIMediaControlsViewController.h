/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <UIKitCore/UIViewController.h>
#import <TVRemoteUI/TVRUIRemoteViewProvider.h>

@protocol _TVRUIEventDelegate, TVRUIStyleProvider, TVRUIDevice;
@class TVRUIButton, TVRUICaptionsButton, NSString;

@interface TVRUIMediaControlsViewController : UIViewController <TVRUIRemoteViewProvider> {

	BOOL _showSkipControls;
	BOOL _showCaptionControl;
	id<_TVRUIEventDelegate> _buttonActionsDelegate;
	TVRUIButton* _skipForwardButton;
	TVRUIButton* _skipBackwardButton;
	TVRUICaptionsButton* _captionsButton;
	id<TVRUIStyleProvider> _styleProvider;
	id<TVRUIDevice> _device;

}

@property (nonatomic,retain) TVRUIButton * skipForwardButton;                                     //@synthesize skipForwardButton=_skipForwardButton - In the implementation block
@property (nonatomic,retain) TVRUIButton * skipBackwardButton;                                    //@synthesize skipBackwardButton=_skipBackwardButton - In the implementation block
@property (nonatomic,retain) TVRUICaptionsButton * captionsButton;                                //@synthesize captionsButton=_captionsButton - In the implementation block
@property (nonatomic,retain) id<TVRUIStyleProvider> styleProvider;                                //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) id<TVRUIDevice> device;                                              //@synthesize device=_device - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRUIEventDelegate> buttonActionsDelegate;                //@synthesize buttonActionsDelegate=_buttonActionsDelegate - In the implementation block
@property (assign,getter=isShowingSkipControls,nonatomic) BOOL showSkipControls;                  //@synthesize showSkipControls=_showSkipControls - In the implementation block
@property (assign,getter=isShowingCaptionControl,nonatomic) BOOL showCaptionControl;              //@synthesize showCaptionControl=_showCaptionControl - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TVRUIDevice>)device;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)setDevice:(id<TVRUIDevice>)arg1 ;
-(void)setStyleProvider:(id<TVRUIStyleProvider>)arg1 ;
-(id<TVRUIStyleProvider>)styleProvider;
-(TVRUIButton *)skipForwardButton;
-(void)_createButtons;
-(void)setSkipForwardButton:(TVRUIButton *)arg1 ;
-(void)_skipForwardTapped:(id)arg1 ;
-(void)setCaptionsButton:(TVRUICaptionsButton *)arg1 ;
-(TVRUICaptionsButton *)captionsButton;
-(void)_captionsTapped:(id)arg1 ;
-(void)setSkipBackwardButton:(TVRUIButton *)arg1 ;
-(TVRUIButton *)skipBackwardButton;
-(void)_skipBackwardTapped:(id)arg1 ;
-(void)_sendButtonTapped:(long long)arg1 ;
-(id<_TVRUIEventDelegate>)buttonActionsDelegate;
-(void)setShowSkipControls:(BOOL)arg1 ;
-(void)setShowCaptionControl:(BOOL)arg1 ;
-(void)updateCaptionState:(BOOL)arg1 ;
-(void)setButtonActionsDelegate:(id<_TVRUIEventDelegate>)arg1 ;
-(BOOL)isShowingSkipControls;
-(BOOL)isShowingCaptionControl;
@end

