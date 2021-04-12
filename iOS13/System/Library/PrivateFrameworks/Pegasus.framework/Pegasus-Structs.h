/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

typedef struct {
	unsigned pictureInPictureController_didCreatePictureInPictureViewController : 1;
	unsigned pictureInPictureController_willDestroyPictureInPictureViewController : 1;
	unsigned pictureInPictureController_willHidePictureInPictureViewController : 1;
	unsigned pictureInPictureController_didHidePictureInPictureViewController : 1;
	unsigned pictureInPictureController_shouldCancelPictureInPictureForApplication_whenStartingPictureInPictureForApplication : 1;
	unsigned pictureInPictureController_shouldDenyNewConnection : 1;
} SCD_Struct_PG0;

typedef struct {
	unsigned pictureInPictureRemoteObject_shouldAcceptSetupRequest : 1;
	unsigned pictureInPictureRemoteObject_shouldCancelActivePictureInPictureOnStart : 1;
	unsigned pictureInPictureRemoteObject_shouldUpdateCancellationPolicyOnStart : 1;
	unsigned pictureInPictureRemoteObject_didCreatePictureInPictureViewController : 1;
	unsigned pictureInPictureRemoteObject_willShowPictureInPictureViewController : 1;
	unsigned pictureInPictureRemoteObject_didShowPictureInPictureViewController : 1;
	unsigned pictureInPictureRemoteObject_willHidePictureInPictureViewController : 1;
	unsigned pictureInPictureRemoteObject_didHidePictureInPictureViewController : 1;
	unsigned pictureInPictureRemoteObject_willDestroyPictureInPictureViewController : 1;
} SCD_Struct_PG1;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct {
	unsigned pictureInPictureProxyInterfaceOrientationForTransitionAnimation : 1;
	unsigned pictureInPictureProxyViewFrameForTransitionAnimation : 1;
	unsigned pictureInPictureProxyViewControllerWindowForTransitionAnimation : 1;
	unsigned pictureInPictureProxy_willStartPictureInPictureWithAnimationType : 1;
	unsigned pictureInPictureProxy_didStartPictureInPictureWithAnimationType : 1;
	unsigned pictureInPictureProxy_failedToStartPictureInPictureWithAnimationType_error : 1;
	unsigned pictureInPictureProxy_restoreUserInterfaceForPictureInPictureStopWithCompletionHandler : 1;
	unsigned pictureInPictureProxy_willStopPictureInPictureWithAnimationType_reason : 1;
	unsigned pictureInPictureProxy_didStopPictureInPictureWithAnimationType_reason : 1;
	unsigned pictureInPictureProxyPictureInPictureInterruptionBegan : 1;
	unsigned pictureInPictureProxyPictureInPictureInterruptionEnded : 1;
} SCD_Struct_PG6;

typedef struct {
	unsigned pictureInPictureControlsViewControllerStopButtonTapped : 1;
	unsigned pictureInPictureControlsViewControllerActionButtonTapped : 1;
	unsigned pictureInPictureControlsViewControllerCancelButtonTapped : 1;
	unsigned pictureInPictureControlsViewControllerShouldHandleTapGesture : 1;
	unsigned pictureInPictureControlsViewControllerShouldHandleDoubleTapGesture : 1;
} SCD_Struct_PG7;

