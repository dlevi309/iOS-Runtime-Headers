/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBRemoteTransientOverlayViewController, SBSRemoteAlertPresentationTarget;

@interface SBDeviceApplicationRemoteTransientOverlayPresentationContext : NSObject {

	SBRemoteTransientOverlayViewController* _remoteViewController;
	SBSRemoteAlertPresentationTarget* _presentationTarget;

}

@property (nonatomic,retain) SBRemoteTransientOverlayViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) SBSRemoteAlertPresentationTarget * presentationTarget;                      //@synthesize presentationTarget=_presentationTarget - In the implementation block
-(SBRemoteTransientOverlayViewController *)remoteViewController;
-(void)setRemoteViewController:(SBRemoteTransientOverlayViewController *)arg1 ;
-(SBSRemoteAlertPresentationTarget *)presentationTarget;
-(void)setPresentationTarget:(SBSRemoteAlertPresentationTarget *)arg1 ;
@end

