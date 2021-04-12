/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(HMCameraSnapshot *)cameraSnapshot;
-(NSURL *)demoSnapshotURL;
-(id)initWithSourceCameraCell:(id)arg1 cameraSnapshot:(id)arg2 ;
-(id)initWithSourceCameraCell:(id)arg1 cameraSnapshot:(id)arg2 snapshotDemoURL:(id)arg3 ;
-(void)setDemoSnapshotURL:(NSURL *)arg1 ;
@end

