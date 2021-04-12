/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardFoundation/SBFTouchPassThroughViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/SBElasticAudioDataSource.h>
#import <libobjc.A.dylib/SBElasticAudioVolumeViewControllerDelegate.h>
#import <libobjc.A.dylib/SBHUDViewControlling.h>

@protocol SBVolumeHUDViewControllerDelegate;
@class SBElasticVolumeViewController, NSString;

@interface SBVolumeHUDViewController : SBFTouchPassThroughViewController <UIViewControllerTransitioningDelegate, SBElasticAudioDataSource, SBElasticAudioVolumeViewControllerDelegate, SBHUDViewControlling> {

	id<SBVolumeHUDViewControllerDelegate> _delegate;
	SBElasticVolumeViewController* _elasticAudioViewController;

}

@property (nonatomic,readonly) SBElasticVolumeViewController * elasticAudioViewController;              //@synthesize elasticAudioViewController=_elasticAudioViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SBVolumeHUDViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id<SBVolumeHUDViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBVolumeHUDViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)_dismiss;
-(BOOL)definesAnimatedDismissal;
-(void)dismissAnimatedWithCompletion:(/*^block*/id)arg1 ;
-(void)noteVolumeUpWasHit:(BOOL)arg1 ;
-(void)noteVolumeDownWasHit:(BOOL)arg1 ;
-(void)noteVolumeWillDeltaStepToVolume:(double)arg1 ;
-(void)noteVolumeDidChange:(float)arg1 ;
-(void)refreshAudioUI;
-(float)elasticAudioViewControllerCurrentVolume:(id)arg1 ;
-(BOOL)elasticAudioViewController:(id)arg1 updateCurrentVolumeToLevel:(float)arg2 ;
-(id)elasticAudioViewControllerActiveAudioRouteTypes:(id)arg1 ;
-(id)elasticAudioViewControllerActiveAudioCategory:(id)arg1 ;
-(BOOL)elasticAudioViewControllerShouldShowVolumeWarningForCurrentVolumeLevel:(id)arg1 ;
-(void)elasticVolumeViewControllerNeedsDismissal:(id)arg1 ;
-(unsigned long long)_volumeHUDPresentationEdge;
-(SBElasticVolumeViewController *)elasticAudioViewController;
@end

