/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(MPAVController *)player;
-(void)setPlayer:(MPAVController *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)animationDidStop:(id)arg1 ;
-(void)_fadeOut;
-(void)_changeState;
-(void)_playbackStateDidChangeNotification:(id)arg1 ;
-(void)dealloc;
@end

