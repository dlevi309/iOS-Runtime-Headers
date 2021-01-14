/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUCameraStreamFullScreenAnimator.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class HMCameraSnapshot, NSURL, NSString;

@interface HUCameraStreamFullScreenPresentingAnimator : HUCameraStreamFullScreenAnimator <UIViewControllerAnimatedTransitioning> {

	HMCameraSnapshot* _cameraSnapshot;
	NSURL* _demoSnapshotURL;

}

@property (nonatomic,readonly) HMCameraSnapshot * cameraSnapshot;              //@synthesize cameraSnapshot=_cameraSnapshot - In the implementation block
@property (nonatomic,retain) NSURL * demoSnapshotURL;                          //@synthesize demoSnapshotURL=_demoSnapshotURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateTransition:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(HMCameraSnapshot *)cameraSnapshot;
-(NSURL *)demoSnapshotURL;
-(id)initWithSourceCameraCell:(id)arg1 cameraSnapshot:(id)arg2 ;
-(id)initWithSourceCameraCell:(id)arg1 cameraSnapshot:(id)arg2 snapshotDemoURL:(id)arg3 ;
-(void)setDemoSnapshotURL:(NSURL *)arg1 ;
@end

