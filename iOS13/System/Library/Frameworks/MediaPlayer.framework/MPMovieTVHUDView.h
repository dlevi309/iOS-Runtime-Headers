/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, MPAVController;

@interface MPMovieTVHUDView : UIView {

	long long _currentState;
	UIImageView* _playbackMode;
	MPAVController* _player;

}

@property (nonatomic,retain) MPAVController * player;              //@synthesize player=_player - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)animationDidStop:(id)arg1 ;
-(MPAVController *)player;
-(void)setPlayer:(MPAVController *)arg1 ;
-(void)_changeState;
-(void)_fadeOut;
-(void)_playbackStateDidChangeNotification:(id)arg1 ;
@end

