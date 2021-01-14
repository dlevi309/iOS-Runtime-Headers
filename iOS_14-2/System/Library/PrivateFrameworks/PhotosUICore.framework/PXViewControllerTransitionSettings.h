/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@class PXViewControllerZoomTransitionSettings, PXViewControllerPinchTransitionSettings, PXViewControllerSwipeDownTransitionSettings;

@interface PXViewControllerTransitionSettings : PXSettings {

	PXViewControllerZoomTransitionSettings* _zoomTransitionSettings;
	PXViewControllerPinchTransitionSettings* _pinchTransitionSettings;
	PXViewControllerSwipeDownTransitionSettings* _swipeDownTransitionSettings;

}

@property (nonatomic,retain) PXViewControllerZoomTransitionSettings * zoomTransitionSettings;                        //@synthesize zoomTransitionSettings=_zoomTransitionSettings - In the implementation block
@property (nonatomic,retain) PXViewControllerPinchTransitionSettings * pinchTransitionSettings;                      //@synthesize pinchTransitionSettings=_pinchTransitionSettings - In the implementation block
@property (nonatomic,retain) PXViewControllerSwipeDownTransitionSettings * swipeDownTransitionSettings;              //@synthesize swipeDownTransitionSettings=_swipeDownTransitionSettings - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setSwipeDownTransitionSettings:(PXViewControllerSwipeDownTransitionSettings *)arg1 ;
-(PXViewControllerSwipeDownTransitionSettings *)swipeDownTransitionSettings;
-(void)setPinchTransitionSettings:(PXViewControllerPinchTransitionSettings *)arg1 ;
-(void)setZoomTransitionSettings:(PXViewControllerZoomTransitionSettings *)arg1 ;
-(PXViewControllerZoomTransitionSettings *)zoomTransitionSettings;
-(PXViewControllerPinchTransitionSettings *)pinchTransitionSettings;
-(void)createChildren;
@end

