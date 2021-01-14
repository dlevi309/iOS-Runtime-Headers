/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/MRUVisualStylingProviderObserver.h>

@class MRUArtworkView, MRUNowPlayingRoutingButton, MRUTransportButton, MRUVisualStylingProvider, MRUNowPlayingLabelView, MPAVRoute, NSString;

@interface MRUNowPlayingHeaderView : UIControl <MRUVisualStylingProviderObserver> {

	BOOL _showArtworkView;
	BOOL _showTransportButton;
	BOOL _showRoutingButton;
	BOOL _useArtworkOverrideFrame;
	MRUArtworkView* _artworkView;
	MRUNowPlayingRoutingButton* _routingButton;
	MRUTransportButton* _transportButton;
	long long _layout;
	long long _context;
	MRUVisualStylingProvider* _stylingProvider;
	double _textCenterOffsetY;
	MRUNowPlayingLabelView* _labelView;
	CGRect _artworkOverrideFrame;

}

@property (nonatomic,retain) MRUNowPlayingLabelView * labelView;                        //@synthesize labelView=_labelView - In the implementation block
@property (nonatomic,readonly) MRUArtworkView * artworkView;                            //@synthesize artworkView=_artworkView - In the implementation block
@property (nonatomic,readonly) MRUNowPlayingRoutingButton * routingButton;              //@synthesize routingButton=_routingButton - In the implementation block
@property (nonatomic,readonly) MRUTransportButton * transportButton;                    //@synthesize transportButton=_transportButton - In the implementation block
@property (nonatomic,retain) MPAVRoute * route; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * placeholderText; 
@property (assign,nonatomic) BOOL showPlaceholderText; 
@property (assign,nonatomic) BOOL showArtworkView;                                      //@synthesize showArtworkView=_showArtworkView - In the implementation block
@property (assign,nonatomic) BOOL showTransportButton;                                  //@synthesize showTransportButton=_showTransportButton - In the implementation block
@property (assign,nonatomic) BOOL showRoutingButton;                                    //@synthesize showRoutingButton=_showRoutingButton - In the implementation block
@property (assign,getter=isMarqueeEnabled,nonatomic) BOOL marqueeEnabled; 
@property (assign,nonatomic) long long layout;                                          //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) long long context;                                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;                //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (assign,nonatomic) double textCenterOffsetY;                                  //@synthesize textCenterOffsetY=_textCenterOffsetY - In the implementation block
@property (assign,nonatomic) BOOL useArtworkOverrideFrame;                              //@synthesize useArtworkOverrideFrame=_useArtworkOverrideFrame - In the implementation block
@property (assign,nonatomic) CGRect artworkOverrideFrame;                               //@synthesize artworkOverrideFrame=_artworkOverrideFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMarqueeEnabled:(BOOL)arg1 ;
-(void)setRoute:(MPAVRoute *)arg1 ;
-(MRUNowPlayingRoutingButton *)routingButton;
-(MPAVRoute *)route;
-(id)initWithFrame:(CGRect)arg1 ;
-(MRUArtworkView *)artworkView;
-(MRUNowPlayingLabelView *)labelView;
-(NSString *)placeholderText;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(long long)context;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isMarqueeEnabled;
-(void)updateArtworkStyle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)updateVisibility;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(void)setLabelView:(MRUNowPlayingLabelView *)arg1 ;
-(MRUTransportButton *)transportButton;
-(void)setLayout:(long long)arg1 ;
-(void)updateVisualStyling;
-(NSString *)title;
-(long long)layout;
-(void)setContext:(long long)arg1 ;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(BOOL)showPlaceholderText;
-(void)setShowPlaceholderText:(BOOL)arg1 ;
-(void)setShowTransportButton:(BOOL)arg1 ;
-(void)visualStylingProviderDidChange:(id)arg1 ;
-(void)setTextCenterOffsetY:(double)arg1 ;
-(void)setArtworkOverrideFrame:(CGRect)arg1 ;
-(void)setShowArtworkView:(BOOL)arg1 ;
-(void)setUseArtworkOverrideFrame:(BOOL)arg1 ;
-(void)setShowRoutingButton:(BOOL)arg1 ;
-(double)textInsetForSize:(CGSize)arg1 ;
-(BOOL)showArtworkView;
-(BOOL)showTransportButton;
-(BOOL)showRoutingButton;
-(double)textCenterOffsetY;
-(BOOL)useArtworkOverrideFrame;
-(CGRect)artworkOverrideFrame;
@end

