/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MTVisualStylingProviderObservingPrivate.h>

@protocol MediaControlsActionsDelegate;
@class MPCPlayerResponse, MTVisualStylingProvider, MediaControlsTransportButton, NSString;

@interface MediaControlsTransportStackView : UIView <MTVisualStylingProviderObservingPrivate> {

	BOOL _empty;
	BOOL _shouldShowTVRemoteButton;
	BOOL _isGMCEnabled;
	long long _style;
	MPCPlayerResponse* _response;
	MTVisualStylingProvider* _visualStylingProvider;
	id<MediaControlsActionsDelegate> _actionsDelegate;
	MediaControlsTransportButton* _tvRemoteButton;
	MediaControlsTransportButton* _leftButton;
	MediaControlsTransportButton* _middleButton;
	MediaControlsTransportButton* _rightButton;
	MediaControlsTransportButton* _languageOptionsButton;

}

@property (nonatomic,retain) MediaControlsTransportButton * tvRemoteButton;                        //@synthesize tvRemoteButton=_tvRemoteButton - In the implementation block
@property (nonatomic,retain) MediaControlsTransportButton * leftButton;                            //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,retain) MediaControlsTransportButton * middleButton;                          //@synthesize middleButton=_middleButton - In the implementation block
@property (nonatomic,retain) MediaControlsTransportButton * rightButton;                           //@synthesize rightButton=_rightButton - In the implementation block
@property (nonatomic,retain) MediaControlsTransportButton * languageOptionsButton;                 //@synthesize languageOptionsButton=_languageOptionsButton - In the implementation block
@property (assign,nonatomic) BOOL shouldShowTVRemoteButton;                                        //@synthesize shouldShowTVRemoteButton=_shouldShowTVRemoteButton - In the implementation block
@property (assign,nonatomic) BOOL isGMCEnabled;                                                    //@synthesize isGMCEnabled=_isGMCEnabled - In the implementation block
@property (assign,nonatomic) long long style;                                                      //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) MPCPlayerResponse * response;                                         //@synthesize response=_response - In the implementation block
@property (assign,getter=isEmpty,nonatomic) BOOL empty;                                            //@synthesize empty=_empty - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * visualStylingProvider;                      //@synthesize visualStylingProvider=_visualStylingProvider - In the implementation block
@property (assign,nonatomic,__weak) id<MediaControlsActionsDelegate> actionsDelegate;              //@synthesize actionsDelegate=_actionsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MediaControlsActionsDelegate>)actionsDelegate;
-(MediaControlsTransportButton *)leftButton;
-(MTVisualStylingProvider *)visualStylingProvider;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateVisualStylingForButtons;
-(MediaControlsTransportButton *)tvRemoteButton;
-(void)providedStylesDidChangeForProvider:(id)arg1 ;
-(void)_resetTransportButton:(id)arg1 ;
-(MediaControlsTransportButton *)rightButton;
-(void)touchUpInsideHangdogButton:(id)arg1 ;
-(void)updateOnRouteChange;
-(void)_updateButtonLayout;
-(void)setActionsDelegate:(id<MediaControlsActionsDelegate>)arg1 ;
-(void)_updateButtonConfiguration;
-(void)_updateButtonVisualStyling:(id)arg1 ;
-(void)setIsGMCEnabled:(BOOL)arg1 ;
-(void)touchUpInsideMiddleButton:(id)arg1 ;
-(void)layoutSubviews;
-(void)touchUpInsideRightButton:(id)arg1 ;
-(MediaControlsTransportButton *)middleButton;
-(id)_createTransportButton;
-(MPCPlayerResponse *)response;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setResponse:(MPCPlayerResponse *)arg1 ;
-(void)buttonHoldReleased:(id)arg1 ;
-(void)setMiddleButton:(MediaControlsTransportButton *)arg1 ;
-(void)setRightButton:(MediaControlsTransportButton *)arg1 ;
-(void)setShouldShowTVRemoteButton:(BOOL)arg1 ;
-(void)touchUpInsideLeftButton:(id)arg1 ;
-(void)setLanguageOptionsButton:(MediaControlsTransportButton *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(BOOL)isGMCEnabled;
-(void)touchUpInsideCaptionsButton:(id)arg1 ;
-(BOOL)isEmpty;
-(void)setLeftButton:(MediaControlsTransportButton *)arg1 ;
-(void)setTvRemoteButton:(MediaControlsTransportButton *)arg1 ;
-(long long)style;
-(MediaControlsTransportButton *)languageOptionsButton;
-(void)setEmpty:(BOOL)arg1 ;
-(void)buttonHoldBegan:(id)arg1 ;
-(BOOL)shouldShowTVRemoteButton;
@end

