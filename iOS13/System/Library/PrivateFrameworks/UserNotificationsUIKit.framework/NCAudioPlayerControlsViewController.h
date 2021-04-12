/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MPDetailSliderDelegate.h>
#import <libobjc.A.dylib/NCAudioPlayerControllerDelegate.h>
#import <libobjc.A.dylib/NCAudioPlayerControlsDelegate.h>

@class NSURL, NCAudioPlayerController, NCAudioPlayerControlsView, NSString;

@interface NCAudioPlayerControlsViewController : UIViewController <MPDetailSliderDelegate, NCAudioPlayerControllerDelegate, NCAudioPlayerControlsDelegate> {

	NSURL* _URL;
	NCAudioPlayerController* _playerController;
	NCAudioPlayerControlsView* _playerControlsView;

}

@property (nonatomic,retain) NCAudioPlayerController * playerController;                  //@synthesize playerController=_playerController - In the implementation block
@property (nonatomic,retain) NCAudioPlayerControlsView * playerControlsView;              //@synthesize playerControlsView=_playerControlsView - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                                 //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(NCAudioPlayerController *)playerController;
-(void)setPlayerController:(NCAudioPlayerController *)arg1 ;
-(void)detailSliderTrackingDidBegin:(id)arg1 ;
-(void)detailSliderTrackingDidEnd:(id)arg1 ;
-(void)detailSliderTrackingDidCancel:(id)arg1 ;
-(void)detailSlider:(id)arg1 didChangeValue:(float)arg2 ;
-(NCAudioPlayerControlsView *)playerControlsView;
-(void)playerController:(id)arg1 didChangeToCurrentTime:(float)arg2 ;
-(void)playerController:(id)arg1 didChangeToDuration:(double)arg2 ;
-(void)playerController:(id)arg1 didChangeToPlaybackState:(long long)arg2 ;
-(void)playerController:(id)arg1 didChangeToStatus:(long long)arg2 ;
-(void)playerController:(id)arg1 didSeekToTime:(float)arg2 ;
-(void)playbackControls:(id)arg1 didRequestState:(long long)arg2 ;
-(void)setPlayerControlsView:(NCAudioPlayerControlsView *)arg1 ;
@end

