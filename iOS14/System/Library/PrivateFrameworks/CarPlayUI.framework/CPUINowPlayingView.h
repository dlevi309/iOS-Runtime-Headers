/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
*/

#import <CarPlayUI/CarPlayUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CPUINowPlayingLayoutProtocol;
@class CPUITransportControlView, CPUIPlayModeControlView, CPUIProgressView, CPUISongDetailsView, CPUIShadowImageView, UIFocusContainerGuide, NSArray, NSLayoutConstraint;

@interface CPUINowPlayingView : UIView {

	id<CPUINowPlayingLayoutProtocol> _nowPlayingLayout;
	CPUITransportControlView* _transportControlView;
	CPUIPlayModeControlView* _playModeControlView;
	CPUIProgressView* _progressView;
	CPUISongDetailsView* _songDetailsView;
	CPUIShadowImageView* _artworkViewBrick;
	UIFocusContainerGuide* _controlsFocusContainerGuide;
	NSArray* _activeConstraints;
	NSArray* _verticalSpacerLayoutGuides;
	NSLayoutConstraint* _songDetailsViewHeightConstraint;

}

@property (nonatomic,retain) UIFocusContainerGuide * controlsFocusContainerGuide;               //@synthesize controlsFocusContainerGuide=_controlsFocusContainerGuide - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;                                       //@synthesize activeConstraints=_activeConstraints - In the implementation block
@property (nonatomic,retain) NSArray * verticalSpacerLayoutGuides;                              //@synthesize verticalSpacerLayoutGuides=_verticalSpacerLayoutGuides - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * songDetailsViewHeightConstraint;              //@synthesize songDetailsViewHeightConstraint=_songDetailsViewHeightConstraint - In the implementation block
@property (nonatomic,readonly) id<CPUINowPlayingLayoutProtocol> nowPlayingLayout;               //@synthesize nowPlayingLayout=_nowPlayingLayout - In the implementation block
@property (nonatomic,readonly) CPUITransportControlView * transportControlView;                 //@synthesize transportControlView=_transportControlView - In the implementation block
@property (nonatomic,readonly) CPUIPlayModeControlView * playModeControlView;                   //@synthesize playModeControlView=_playModeControlView - In the implementation block
@property (nonatomic,readonly) CPUIProgressView * progressView;                                 //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,readonly) CPUISongDetailsView * songDetailsView;                           //@synthesize songDetailsView=_songDetailsView - In the implementation block
@property (nonatomic,readonly) CPUIShadowImageView * artworkViewBrick;                          //@synthesize artworkViewBrick=_artworkViewBrick - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)activeConstraints;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(CPUIProgressView *)progressView;
-(CPUIPlayModeControlView *)playModeControlView;
-(CPUITransportControlView *)transportControlView;
-(CPUISongDetailsView *)songDetailsView;
-(void)recalculateLayout:(BOOL)arg1 allowsAlbumArt:(BOOL)arg2 hasDataSource:(BOOL)arg3 viewArea:(CGRect)arg4 safeArea:(CGRect)arg5 ;
-(id<CPUINowPlayingLayoutProtocol>)nowPlayingLayout;
-(CPUIShadowImageView *)artworkViewBrick;
-(UIFocusContainerGuide *)controlsFocusContainerGuide;
-(id)_constraintsForNowPlayingLayout:(id)arg1 ;
-(NSArray *)verticalSpacerLayoutGuides;
-(id)_verticalSpacerLayoutGuidesForNowPlayingLayout:(id)arg1 ;
-(void)setControlsFocusContainerGuide:(UIFocusContainerGuide *)arg1 ;
-(void)setVerticalSpacerLayoutGuides:(NSArray *)arg1 ;
-(NSLayoutConstraint *)songDetailsViewHeightConstraint;
-(void)setSongDetailsViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

