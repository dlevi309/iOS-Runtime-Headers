/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>

@class MRUNowPlayingHeaderView, MRUNowPlayingTimeControlsView, MRUNowPlayingTransportControlsView, MRUNowPlayingVolumeControlsView, MRUVisualStylingProvider;

@interface MRUNowPlayingControlsView : UIView {

	BOOL _showTimeControlsView;
	BOOL _showTransportControlsView;
	BOOL _supportsHorizontalLayout;
	MRUNowPlayingHeaderView* _headerView;
	MRUNowPlayingTimeControlsView* _timeControlsView;
	MRUNowPlayingTransportControlsView* _transportControlsView;
	MRUNowPlayingVolumeControlsView* _volumeControlsView;
	MRUVisualStylingProvider* _stylingProvider;
	long long _layout;
	long long _context;

}

@property (nonatomic,readonly) MRUNowPlayingHeaderView * headerView;                                    //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) MRUNowPlayingTimeControlsView * timeControlsView;                        //@synthesize timeControlsView=_timeControlsView - In the implementation block
@property (nonatomic,readonly) MRUNowPlayingTransportControlsView * transportControlsView;              //@synthesize transportControlsView=_transportControlsView - In the implementation block
@property (nonatomic,readonly) MRUNowPlayingVolumeControlsView * volumeControlsView;                    //@synthesize volumeControlsView=_volumeControlsView - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;                                //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (assign,nonatomic) long long layout;                                                          //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) long long context;                                                         //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL showTimeControlsView;                                                 //@synthesize showTimeControlsView=_showTimeControlsView - In the implementation block
@property (assign,nonatomic) BOOL showTransportControlsView;                                            //@synthesize showTransportControlsView=_showTransportControlsView - In the implementation block
@property (assign,nonatomic) BOOL supportsHorizontalLayout;                                             //@synthesize supportsHorizontalLayout=_supportsHorizontalLayout - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)context;
-(void)layoutSubviews;
-(MRUNowPlayingTransportControlsView *)transportControlsView;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(MRUNowPlayingHeaderView *)headerView;
-(void)updateVisibility;
-(void)setLayout:(long long)arg1 ;
-(long long)layout;
-(void)setContext:(long long)arg1 ;
-(void)setSupportsHorizontalLayout:(BOOL)arg1 ;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)updateTimeControlVisibility:(id)arg1 ;
-(void)setShowTimeControlsView:(BOOL)arg1 ;
-(void)setShowTransportControlsView:(BOOL)arg1 ;
-(MRUNowPlayingTimeControlsView *)timeControlsView;
-(MRUNowPlayingVolumeControlsView *)volumeControlsView;
-(BOOL)showTimeControlsView;
-(BOOL)showTransportControlsView;
-(BOOL)supportsHorizontalLayout;
@end

