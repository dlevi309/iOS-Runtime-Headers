/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIViewController.h>

@class MPVolumeView;

@interface MPVolumeViewController : UIViewController {

	MPVolumeView* _volumeView;

}

@property (nonatomic,readonly) MPVolumeView * volumeView;              //@synthesize volumeView=_volumeView - In the implementation block
-(id)init;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(MPVolumeView *)volumeView;
@end

