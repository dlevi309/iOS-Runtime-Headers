/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <AVKit/AVPlayerViewController.h>

@class IMAVPlayer;

@interface IMAVPlayerVideoViewController : AVPlayerViewController {

	IMAVPlayer* _im_player;

}

@property (assign,nonatomic,__weak) IMAVPlayer * im_player;              //@synthesize im_player=_im_player - In the implementation block
-(id)initWithPlayer:(id)arg1 ;
-(void)mediaItemDidChange;
-(void)setIm_player:(IMAVPlayer *)arg1 ;
-(void)playbackSpeedDidChange;
-(IMAVPlayer *)im_player;
@end

