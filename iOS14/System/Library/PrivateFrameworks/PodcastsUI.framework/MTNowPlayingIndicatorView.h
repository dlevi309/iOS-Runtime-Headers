/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
*/

#import <PodcastsUI/PodcastsUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSMutableArray, UIColor;

@interface MTNowPlayingIndicatorView : UIControl {

	NSMutableArray* _levelViews;
	BOOL bufferingShouldDisplayAsPaused;
	BOOL _showsLevelGutters;
	double _interLevelSpacing;
	double _levelCornerRadius;
	double _levelWidth;
	double _maximumLevelHeight;
	double _minimumLevelHeight;
	long long _numberOfLevels;
	long long _playbackState;
	long long _bounceStyle;
	UIColor* _levelGuttersColor;

}

@property (assign,nonatomic) double interLevelSpacing;                 //@synthesize interLevelSpacing=_interLevelSpacing - In the implementation block
@property (assign,nonatomic) double levelCornerRadius;                 //@synthesize levelCornerRadius=_levelCornerRadius - In the implementation block
@property (assign,nonatomic) double levelWidth;                        //@synthesize levelWidth=_levelWidth - In the implementation block
@property (assign,nonatomic) double maximumLevelHeight;                //@synthesize maximumLevelHeight=_maximumLevelHeight - In the implementation block
@property (assign,nonatomic) double minimumLevelHeight;                //@synthesize minimumLevelHeight=_minimumLevelHeight - In the implementation block
@property (assign,nonatomic) long long numberOfLevels;                 //@synthesize numberOfLevels=_numberOfLevels - In the implementation block
@property (assign,nonatomic) long long playbackState;                  //@synthesize playbackState=_playbackState - In the implementation block
@property (assign,nonatomic) long long bounceStyle;                    //@synthesize bounceStyle=_bounceStyle - In the implementation block
@property (assign,nonatomic) BOOL showsLevelGutters;                   //@synthesize showsLevelGutters=_showsLevelGutters - In the implementation block
@property (nonatomic,retain) UIColor * levelGuttersColor;              //@synthesize levelGuttersColor=_levelGuttersColor - In the implementation block
-(void)setPlaybackState:(long long)arg1 ;
-(BOOL)canBecomeFocused;
-(void)setMinimumLevelHeight:(double)arg1 ;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBounceStyle:(long long)arg1 ;
-(long long)playbackState;
-(double)levelWidth;
-(void)_reloadLevelViews;
-(void)_removeAllAnimations:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(double)_fixedSeedValueForBarIndex:(unsigned long long)arg1 ;
-(void)_bufferTimerFired;
-(BOOL)showsLevelGutters;
-(void)layoutSubviews;
-(void)setMaximumLevelHeight:(double)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setInterLevelSpacing:(double)arg1 ;
-(void)setNumberOfLevels:(long long)arg1 ;
-(double)minimumLevelHeight;
-(UIColor *)levelGuttersColor;
-(double)_seedValueForBarIndex:(unsigned long long)arg1 ;
-(long long)bounceStyle;
-(double)interLevelSpacing;
-(long long)numberOfLevels;
-(void)_updateLevelAnimations;
-(void)setLevelGuttersColor:(UIColor *)arg1 ;
-(double)maximumLevelHeight;
-(void)setLevelCornerRadius:(double)arg1 ;
-(double)_randomSeedValueForBar;
-(void)setLevelWidth:(double)arg1 ;
-(double)levelCornerRadius;
-(void)setShowsLevelGutters:(BOOL)arg1 ;
@end

