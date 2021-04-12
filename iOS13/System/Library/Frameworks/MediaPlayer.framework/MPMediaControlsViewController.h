/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol MPMediaControlsViewControllerDelegate;
@class MPMediaControlsConfiguration, MPMediaControls, NSString;

@interface MPMediaControlsViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {

	MPMediaControlsConfiguration* _configuration;
	/*^block*/id _didDismissHandler;
	id<MPMediaControlsViewControllerDelegate> _delegate;
	MPMediaControls* _mediaControls;

}

@property (nonatomic,retain) MPMediaControls * mediaControls;                                        //@synthesize mediaControls=_mediaControls - In the implementation block
@property (nonatomic,readonly) MPMediaControlsConfiguration * configuration;                         //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) id didDismissHandler;                                                     //@synthesize didDismissHandler=_didDismissHandler - In the implementation block
@property (assign,nonatomic,__weak) id<MPMediaControlsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<MPMediaControlsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MPMediaControlsViewControllerDelegate>)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(MPMediaControlsConfiguration *)configuration;
-(void)dismiss;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(BOOL)prefersStatusBarHidden;
-(void)_present;
-(void)setOverrideRouteSharingPolicy:(unsigned long long)arg1 routingContextUID:(id)arg2 ;
-(void)setDidDismissHandler:(id)arg1 ;
-(void)setMediaControls:(MPMediaControls *)arg1 ;
-(void)_createMediaControlsIfNeeded;
-(void)prepareRemoteViewController;
-(void)startPrewarming;
-(void)stopPrewarming;
-(id)didDismissHandler;
-(MPMediaControls *)mediaControls;
@end

