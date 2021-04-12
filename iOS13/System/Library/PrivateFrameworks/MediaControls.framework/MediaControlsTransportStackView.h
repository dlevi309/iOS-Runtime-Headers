/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MTVisualStylingProviderObservingPrivate.h>

@protocol MediaControlsActionsDelegate;
@class MPCPlayerResponse, MTVisualStylingProvider, MediaControlsTransportButton, NSArray, NSString;

@interface MediaControlsTransportStackView : UIView <MTVisualStylingProviderObservingPrivate> {

	BOOL _empty;
	long long _style;
	MPCPlayerResponse* _response;
	MTVisualStylingProvider* _visualStylingProvider;
	id<MediaControlsActionsDelegate> _actionsDelegate;
	MediaControlsTransportButton* _tvRemoteButton;
	MediaControlsTransportButton* _leftButton;
	MediaControlsTransportButton* _middleButton;
	MediaControlsTransportButton* _rightButton;
	MediaControlsTransportButton* _languageOptionsButton;
	NSArray* _threeButtonContraints;
	NSArray* _fiveButtonContraints;

}

@property (nonatomic,retain) MediaControlsTransportButton * tvRemoteButton;                        //@synthesize tvRemoteButton=_tvRemoteButton - In the implementation block
@property (nonatomic,retain) MediaControlsTransportButton * leftButton;                            //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,retain) MediaControlsTransportButton * middleButton;                          //@synthesize middleButton=_middleButton - In the implementation block
@property (nonatomic,retain) MediaControlsTransportButton * rightButton;                           //@synthesize rightButton=_rightButton - In the implementation block
@property (nonatomic,retain) MediaControlsTransportButton * languageOptionsButton;                 //@synthesize languageOptionsButton=_languageOptionsButton - In the implementation block
@property (nonatomic,retain) NSArray * threeButtonContraints;                                      //@synthesize threeButtonContraints=_threeButtonContraints - In the implementation block
@property (nonatomic,retain) NSArray * fiveButtonContraints;                                       //@synthesize fiveButtonContraints=_fiveButtonContraints - In the implementation block
@property (assign,nonatomic) long long style;                                                      //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) MPCPlayerResponse * response;                                         //@synthesize response=_response - In the implementation block
@property (assign,getter=isEmpty,nonatomic) BOOL empty;                                            //@synthesize empty=_empty - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * visualStylingProvider;                      //@synthesize visualStylingProvider=_visualStylingProvider - In the implementation block
@property (assign,nonatomic,__weak) id<MediaControlsActionsDelegate> actionsDelegate;              //@synthesize actionsDelegate=_actionsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEmpty;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(MPCPlayerResponse *)response;
-(void)setResponse:(MPCPlayerResponse *)arg1 ;
-(void)setEmpty:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(MediaControlsTransportButton *)leftButton;
-(void)setLeftButton:(MediaControlsTransportButton *)arg1 ;
-(id<MediaControlsActionsDelegate>)actionsDelegate;
-(void)setActionsDelegate:(id<MediaControlsActionsDelegate>)arg1 ;
-(void)setMiddleButton:(MediaControlsTransportButton *)arg1 ;
-(MediaControlsTransportButton *)rightButton;
-(void)setRightButton:(MediaControlsTransportButton *)arg1 ;
-(MediaControlsTransportButton *)middleButton;
-(void)buttonHoldReleased:(id)arg1 ;
-(void)providedStylesDidChangeForProvider:(id)arg1 ;
-(MTVisualStylingProvider *)visualStylingProvider;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(void)updateOnRouteChange;
-(id)_createTransportButton;
-(void)_updateButtonConfiguration;
-(void)touchUpInsideHangdogButton:(id)arg1 ;
-(void)touchUpInsideLeftButton:(id)arg1 ;
-(void)touchUpInsideMiddleButton:(id)arg1 ;
-(void)touchUpInsideRightButton:(id)arg1 ;
-(void)touchUpInsideCaptionsButton:(id)arg1 ;
-(void)buttonHoldBegan:(id)arg1 ;
-(MediaControlsTransportButton *)tvRemoteButton;
-(MediaControlsTransportButton *)languageOptionsButton;
-(void)_updateVisualStylingForButtons;
-(void)_updateButtonLayout;
-(void)_resetTransportButton:(id)arg1 ;
-(void)_updateButtonVisualStyling:(id)arg1 ;
-(void)setTvRemoteButton:(MediaControlsTransportButton *)arg1 ;
-(void)setLanguageOptionsButton:(MediaControlsTransportButton *)arg1 ;
-(NSArray *)threeButtonContraints;
-(void)setThreeButtonContraints:(NSArray *)arg1 ;
-(NSArray *)fiveButtonContraints;
-(void)setFiveButtonContraints:(NSArray *)arg1 ;
@end

