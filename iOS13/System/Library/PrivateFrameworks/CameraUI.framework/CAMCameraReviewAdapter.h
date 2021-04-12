/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <libobjc.A.dylib/CAMCameraCaptureDelegate.h>

@protocol CAMCameraReviewViewController;
@class NSMutableArray, UIViewController, NSString;

@interface CAMCameraReviewAdapter : NSObject <CAMCameraCaptureDelegate> {

	NSMutableArray* __pendingAssetsForReview;
	UIViewController*<CAMCameraReviewViewController> _cachedReviewViewController;

}

@property (nonatomic,readonly) NSMutableArray * _pendingAssetsForReview;                                                                                                                         //@synthesize _pendingAssetsForReview=__pendingAssetsForReview - In the implementation block
@property (setter=_setCachedReviewViewController:,getter=_cachedReviewViewController,nonatomic,retain) UIViewController*<CAMCameraReviewViewController> cachedReviewViewController;              //@synthesize cachedReviewViewController=_cachedReviewViewController - In the implementation block
@property (nonatomic,readonly) UIViewController*<CAMCameraReviewViewController> cameraReviewViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)cameraReviewViewControllerClass;
+(id)reviewAssetForPhoto:(id)arg1 withProperties:(id)arg2 ;
+(id)reviewAssetForLivePhoto:(id)arg1 withProperties:(id)arg2 ;
+(id)reviewAssetForAVAsset:(id)arg1 audioMix:(id)arg2 properties:(id)arg3 ;
-(id)init;
-(void)cameraViewController:(id)arg1 didCapturePhoto:(id)arg2 withProperties:(id)arg3 error:(id)arg4 ;
-(void)cameraViewController:(id)arg1 didCaptureLivePhoto:(id)arg2 withProperties:(id)arg3 error:(id)arg4 ;
-(void)cameraViewController:(id)arg1 didCaptureAVAsset:(id)arg2 andAudioMix:(id)arg3 withProperties:(id)arg4 error:(id)arg5 ;
-(id)_cachedReviewViewController;
-(NSMutableArray *)_pendingAssetsForReview;
-(void)_setCachedReviewViewController:(id)arg1 ;
-(UIViewController*<CAMCameraReviewViewController>)cameraReviewViewController;
@end

