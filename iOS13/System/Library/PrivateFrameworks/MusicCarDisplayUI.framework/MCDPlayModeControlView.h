/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKitCore/UIView.h>

@class MCDRepeatButton, MCDPlayModeButton, UIStackView, NSArray;

@interface MCDPlayModeControlView : UIView {

	BOOL _fuseSubscriberLayout;
	BOOL _showsArtwork;
	MCDRepeatButton* _repeatButton;
	MCDPlayModeButton* _moreButton;
	MCDPlayModeButton* _shuffleButton;
	MCDPlayModeButton* _addToLibraryButton;
	MCDPlayModeButton* _playbackRateButton;
	UIStackView* _stackView;
	NSArray* _activeButtonLayoutConstraints;

}

@property (nonatomic,retain) NSArray * activeButtonLayoutConstraints;               //@synthesize activeButtonLayoutConstraints=_activeButtonLayoutConstraints - In the implementation block
@property (nonatomic,readonly) MCDRepeatButton * repeatButton;                      //@synthesize repeatButton=_repeatButton - In the implementation block
@property (nonatomic,readonly) MCDPlayModeButton * moreButton;                      //@synthesize moreButton=_moreButton - In the implementation block
@property (nonatomic,readonly) MCDPlayModeButton * shuffleButton;                   //@synthesize shuffleButton=_shuffleButton - In the implementation block
@property (nonatomic,readonly) MCDPlayModeButton * addToLibraryButton;              //@synthesize addToLibraryButton=_addToLibraryButton - In the implementation block
@property (nonatomic,readonly) MCDPlayModeButton * playbackRateButton;              //@synthesize playbackRateButton=_playbackRateButton - In the implementation block
@property (assign,nonatomic) BOOL fuseSubscriberLayout;                             //@synthesize fuseSubscriberLayout=_fuseSubscriberLayout - In the implementation block
@property (nonatomic,readonly) UIStackView * stackView;                             //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) double maximumButtonWidth; 
@property (assign,nonatomic) BOOL showsArtwork;                                     //@synthesize showsArtwork=_showsArtwork - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIStackView *)stackView;
-(MCDPlayModeButton *)moreButton;
-(MCDPlayModeButton *)shuffleButton;
-(MCDPlayModeButton *)addToLibraryButton;
-(MCDPlayModeButton *)playbackRateButton;
-(MCDRepeatButton *)repeatButton;
-(void)_updateButtonLayouts;
-(BOOL)showsArtwork;
-(id)_visibleControlButtons;
-(double)maximumButtonWidth;
-(void)setShowsArtwork:(BOOL)arg1 ;
-(BOOL)fuseSubscriberLayout;
-(void)setFuseSubscriberLayout:(BOOL)arg1 ;
-(NSArray *)activeButtonLayoutConstraints;
-(void)setActiveButtonLayoutConstraints:(NSArray *)arg1 ;
@end

