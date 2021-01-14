/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
*/

#import <CarPlayUI/CarPlayUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CPUIPlayModeControlViewDelegate;
@class UIStackView, NSArray, CPUIPlayModeButton, CPUIRepeatButton;

@interface CPUIPlayModeControlView : UIView {

	BOOL _fuseSubscriberLayout;
	BOOL _showsArtwork;
	id<CPUIPlayModeControlViewDelegate> _delegate;
	UIStackView* _stackView;
	NSArray* _mediaButtons;
	double _buttonWidth;
	double _buttonSpacing;
	CPUIPlayModeButton* _shuffleButton;
	CPUIPlayModeButton* _addToLibraryButton;
	CPUIPlayModeButton* _moreButton;
	CPUIPlayModeButton* _playbackRateButton;
	CPUIRepeatButton* _repeatButton;
	NSArray* _activeButtonLayoutConstraints;

}

@property (nonatomic,retain) NSArray * activeButtonLayoutConstraints;                          //@synthesize activeButtonLayoutConstraints=_activeButtonLayoutConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<CPUIPlayModeControlViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL fuseSubscriberLayout;                                        //@synthesize fuseSubscriberLayout=_fuseSubscriberLayout - In the implementation block
@property (nonatomic,readonly) UIStackView * stackView;                                        //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) NSArray * mediaButtons;                                           //@synthesize mediaButtons=_mediaButtons - In the implementation block
@property (assign,nonatomic) double buttonWidth;                                               //@synthesize buttonWidth=_buttonWidth - In the implementation block
@property (assign,nonatomic) double buttonSpacing;                                             //@synthesize buttonSpacing=_buttonSpacing - In the implementation block
@property (assign,nonatomic) BOOL showsArtwork;                                                //@synthesize showsArtwork=_showsArtwork - In the implementation block
@property (nonatomic,readonly) CPUIPlayModeButton * shuffleButton;                             //@synthesize shuffleButton=_shuffleButton - In the implementation block
@property (nonatomic,readonly) CPUIPlayModeButton * addToLibraryButton;                        //@synthesize addToLibraryButton=_addToLibraryButton - In the implementation block
@property (nonatomic,readonly) CPUIPlayModeButton * moreButton;                                //@synthesize moreButton=_moreButton - In the implementation block
@property (nonatomic,readonly) CPUIPlayModeButton * playbackRateButton;                        //@synthesize playbackRateButton=_playbackRateButton - In the implementation block
@property (nonatomic,readonly) CPUIRepeatButton * repeatButton;                                //@synthesize repeatButton=_repeatButton - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<CPUIPlayModeControlViewDelegate>)delegate;
-(UIStackView *)stackView;
-(void)setDelegate:(id<CPUIPlayModeControlViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(double)buttonSpacing;
-(void)setButtonSpacing:(double)arg1 ;
-(CPUIPlayModeButton *)moreButton;
-(void)traitCollectionDidChange:(id)arg1 ;
-(double)buttonWidth;
-(NSArray *)mediaButtons;
-(CPUIRepeatButton *)repeatButton;
-(CPUIPlayModeButton *)shuffleButton;
-(CPUIPlayModeButton *)addToLibraryButton;
-(CPUIPlayModeButton *)playbackRateButton;
-(id)defaultPlayModeButtons;
-(void)playModeButtonTapped:(id)arg1 ;
-(void)_updateButtonLayouts;
-(id)_visibleControlButtons;
-(void)setMediaButtons:(NSArray *)arg1 ;
-(void)setShowsArtwork:(BOOL)arg1 ;
-(void)setButtonWidth:(double)arg1 ;
-(BOOL)fuseSubscriberLayout;
-(void)setFuseSubscriberLayout:(BOOL)arg1 ;
-(BOOL)showsArtwork;
-(NSArray *)activeButtonLayoutConstraints;
-(void)setActiveButtonLayoutConstraints:(NSArray *)arg1 ;
@end

