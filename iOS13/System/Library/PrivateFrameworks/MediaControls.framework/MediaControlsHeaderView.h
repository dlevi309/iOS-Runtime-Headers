/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>

@class MPCPlayerPath, UIImageView, MPRouteLabel, NSString, MediaControlsRoutingButtonView, MPButton, UIButton, MTVisualStylingProvider, _UICursorInteraction, MTMaterialView, UIView, MPUMarqueeView, UILabel;

@interface MediaControlsHeaderView : UIView <_UICursorInteractionDelegate> {

	BOOL _transitioning;
	BOOL _showPlaceholderString;
	BOOL _marqueeEnabled;
	BOOL _routing;
	BOOL _shouldUseOverrideSize;
	MPCPlayerPath* _playerPath;
	UIImageView* _artworkView;
	UIImageView* _placeholderArtworkView;
	long long _style;
	MPRouteLabel* _routeLabel;
	NSString* _primaryString;
	NSString* _secondaryString;
	NSString* _placeholderString;
	MediaControlsRoutingButtonView* _routingButton;
	MPButton* _doneButton;
	UIButton* _launchNowPlayingAppButton;
	long long _buttonType;
	MTVisualStylingProvider* _visualStylingProvider;
	_UICursorInteraction* _cursorInteraction;
	MTMaterialView* _artworkBackground;
	UIView* _shadow;
	MPUMarqueeView* _primaryMarqueeView;
	UILabel* _primaryLabel;
	MPUMarqueeView* _secondaryMarqueeView;
	UILabel* _secondaryLabel;
	UILabel* _placeholderLabel;
	UIView* _artworkContentView;
	CGSize _overrideSize;

}

@property (nonatomic,retain) _UICursorInteraction * cursorInteraction;                     //@synthesize cursorInteraction=_cursorInteraction - In the implementation block
@property (nonatomic,retain) MTMaterialView * artworkBackground;                           //@synthesize artworkBackground=_artworkBackground - In the implementation block
@property (nonatomic,retain) UIView * shadow;                                              //@synthesize shadow=_shadow - In the implementation block
@property (nonatomic,retain) MPUMarqueeView * primaryMarqueeView;                          //@synthesize primaryMarqueeView=_primaryMarqueeView - In the implementation block
@property (nonatomic,retain) UILabel * primaryLabel;                                       //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,retain) MPUMarqueeView * secondaryMarqueeView;                        //@synthesize secondaryMarqueeView=_secondaryMarqueeView - In the implementation block
@property (nonatomic,retain) UILabel * secondaryLabel;                                     //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) UILabel * placeholderLabel;                                   //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (assign,nonatomic) BOOL shouldUseOverrideSize;                                   //@synthesize shouldUseOverrideSize=_shouldUseOverrideSize - In the implementation block
@property (nonatomic,retain) UIView * artworkContentView;                                  //@synthesize artworkContentView=_artworkContentView - In the implementation block
@property (nonatomic,copy) MPCPlayerPath * playerPath;                                     //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,retain) UIImageView * artworkView;                                    //@synthesize artworkView=_artworkView - In the implementation block
@property (nonatomic,retain) UIImageView * placeholderArtworkView;                         //@synthesize placeholderArtworkView=_placeholderArtworkView - In the implementation block
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning;                    //@synthesize transitioning=_transitioning - In the implementation block
@property (assign,nonatomic) long long style;                                              //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) MPRouteLabel * routeLabel;                                    //@synthesize routeLabel=_routeLabel - In the implementation block
@property (nonatomic,copy) NSString * primaryString;                                       //@synthesize primaryString=_primaryString - In the implementation block
@property (nonatomic,copy) NSString * secondaryString;                                     //@synthesize secondaryString=_secondaryString - In the implementation block
@property (nonatomic,copy) NSString * placeholderString;                                   //@synthesize placeholderString=_placeholderString - In the implementation block
@property (assign,nonatomic) BOOL showPlaceholderString;                                   //@synthesize showPlaceholderString=_showPlaceholderString - In the implementation block
@property (nonatomic,retain) MediaControlsRoutingButtonView * routingButton;               //@synthesize routingButton=_routingButton - In the implementation block
@property (nonatomic,retain) MPButton * doneButton;                                        //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIButton * launchNowPlayingAppButton;                         //@synthesize launchNowPlayingAppButton=_launchNowPlayingAppButton - In the implementation block
@property (assign,nonatomic) BOOL marqueeEnabled;                                          //@synthesize marqueeEnabled=_marqueeEnabled - In the implementation block
@property (assign,nonatomic) long long buttonType;                                         //@synthesize buttonType=_buttonType - In the implementation block
@property (assign,getter=isRouting,nonatomic) BOOL routing;                                //@synthesize routing=_routing - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * visualStylingProvider;              //@synthesize visualStylingProvider=_visualStylingProvider - In the implementation block
@property (assign,nonatomic) CGSize overrideSize;                                          //@synthesize overrideSize=_overrideSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(UIView *)shadow;
-(NSString *)primaryString;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setMarqueeEnabled:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(void)_updateStyle;
-(void)didMoveToWindow;
-(long long)buttonType;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(void)setOverrideSize:(CGSize)arg1 ;
-(CGSize)overrideSize;
-(void)setTransitioning:(BOOL)arg1 ;
-(_UICursorInteraction *)cursorInteraction;
-(BOOL)isTransitioning;
-(void)setShadow:(UIView *)arg1 ;
-(void)setDoneButton:(MPButton *)arg1 ;
-(MPButton *)doneButton;
-(BOOL)marqueeEnabled;
-(void)setCursorInteraction:(_UICursorInteraction *)arg1 ;
-(UILabel *)primaryLabel;
-(UILabel *)secondaryLabel;
-(NSString *)placeholderString;
-(void)setButtonType:(long long)arg1 ;
-(void)_handleContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(MPCPlayerPath *)playerPath;
-(void)setPrimaryLabel:(UILabel *)arg1 ;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(void)setRouting:(BOOL)arg1 ;
-(UILabel *)placeholderLabel;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
-(void)setPlayerPath:(MPCPlayerPath *)arg1 ;
-(UIImageView *)artworkView;
-(void)setPrimaryString:(NSString *)arg1 ;
-(void)setSecondaryString:(NSString *)arg1 ;
-(NSString *)secondaryString;
-(MTVisualStylingProvider *)visualStylingProvider;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(void)setArtworkView:(UIImageView *)arg1 ;
-(BOOL)isRouting;
-(MediaControlsRoutingButtonView *)routingButton;
-(UIButton *)launchNowPlayingAppButton;
-(void)setPlaceholderString:(NSString *)arg1 ;
-(MPRouteLabel *)routeLabel;
-(void)setShowPlaceholderString:(BOOL)arg1 ;
-(UIImageView *)placeholderArtworkView;
-(void)updateArtworkStyle;
-(void)clearOverrideSize;
-(MPUMarqueeView *)primaryMarqueeView;
-(MPUMarqueeView *)secondaryMarqueeView;
-(UIView *)artworkContentView;
-(MTMaterialView *)artworkBackground;
-(void)launchNowPlayingAppButtonPressed;
-(BOOL)shouldUseOverrideSize;
-(CGSize)layoutTextInAvailableBounds:(CGRect)arg1 setFrames:(BOOL)arg2 ;
-(void)_updateRTL;
-(void)setShouldUseOverrideSize:(BOOL)arg1 ;
-(void)setPlaceholderArtworkView:(UIImageView *)arg1 ;
-(void)setRouteLabel:(MPRouteLabel *)arg1 ;
-(BOOL)showPlaceholderString;
-(void)setRoutingButton:(MediaControlsRoutingButtonView *)arg1 ;
-(void)setLaunchNowPlayingAppButton:(UIButton *)arg1 ;
-(void)setArtworkBackground:(MTMaterialView *)arg1 ;
-(void)setPrimaryMarqueeView:(MPUMarqueeView *)arg1 ;
-(void)setSecondaryMarqueeView:(MPUMarqueeView *)arg1 ;
-(void)setArtworkContentView:(UIView *)arg1 ;
@end

