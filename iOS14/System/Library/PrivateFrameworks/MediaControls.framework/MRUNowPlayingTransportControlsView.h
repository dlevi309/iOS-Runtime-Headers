/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>

@protocol MRUNowPlayingTransportControlsViewDelegate;
@class MPCPlayerResponse, MRUVisualStylingProvider, MRUTransportButton;

@interface MRUNowPlayingTransportControlsView : UIView {

	BOOL _showTVButtons;
	id<MRUNowPlayingTransportControlsViewDelegate> _delegate;
	MPCPlayerResponse* _response;
	MRUVisualStylingProvider* _stylingProvider;
	long long _layout;
	MRUTransportButton* _tvRemoteButton;
	MRUTransportButton* _leftButton;
	MRUTransportButton* _middleButton;
	MRUTransportButton* _rightButton;
	MRUTransportButton* _languageOptionsButton;

}

@property (nonatomic,retain) MRUTransportButton * tvRemoteButton;                                         //@synthesize tvRemoteButton=_tvRemoteButton - In the implementation block
@property (nonatomic,retain) MRUTransportButton * leftButton;                                             //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,retain) MRUTransportButton * middleButton;                                           //@synthesize middleButton=_middleButton - In the implementation block
@property (nonatomic,retain) MRUTransportButton * rightButton;                                            //@synthesize rightButton=_rightButton - In the implementation block
@property (nonatomic,retain) MRUTransportButton * languageOptionsButton;                                  //@synthesize languageOptionsButton=_languageOptionsButton - In the implementation block
@property (assign,nonatomic,__weak) id<MRUNowPlayingTransportControlsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPCPlayerResponse * response;                                                //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;                                  //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (assign,nonatomic) long long layout;                                                            //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) BOOL showTVButtons;                                                          //@synthesize showTVButtons=_showTVButtons - In the implementation block
-(MRUTransportButton *)leftButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(MRUTransportButton *)tvRemoteButton;
-(id<MRUNowPlayingTransportControlsViewDelegate>)delegate;
-(MRUTransportButton *)rightButton;
-(void)setDelegate:(id<MRUNowPlayingTransportControlsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(MRUTransportButton *)middleButton;
-(MPCPlayerResponse *)response;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setResponse:(MPCPlayerResponse *)arg1 ;
-(void)buttonHoldReleased:(id)arg1 ;
-(void)setMiddleButton:(MRUTransportButton *)arg1 ;
-(void)setRightButton:(MRUTransportButton *)arg1 ;
-(void)setLanguageOptionsButton:(MRUTransportButton *)arg1 ;
-(void)updateVisibility;
-(void)setLeftButton:(MRUTransportButton *)arg1 ;
-(void)setLayout:(long long)arg1 ;
-(void)currentLocaleDidChangeNotification:(id)arg1 ;
-(void)setTvRemoteButton:(MRUTransportButton *)arg1 ;
-(MRUTransportButton *)languageOptionsButton;
-(void)buttonHoldBegan:(id)arg1 ;
-(long long)layout;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)didSelectTVRemoteButton:(id)arg1 ;
-(void)didSelectedLeftButton:(id)arg1 ;
-(void)didSelectedMiddleButton:(id)arg1 ;
-(void)didSelectedRightButton:(id)arg1 ;
-(void)didSelectLanguageOptionsButton:(id)arg1 ;
-(void)updateResponse;
-(void)updateImageConfiguration;
-(void)setShowTVButtons:(BOOL)arg1 ;
-(BOOL)showTVButtons;
@end

