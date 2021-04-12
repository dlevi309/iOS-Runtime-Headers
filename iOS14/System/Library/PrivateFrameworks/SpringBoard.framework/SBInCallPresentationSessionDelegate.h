/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBInCallPresentationSessionDelegate <NSObject>
@required
-(void)inCallClientPresentationSession:(id)arg1 callConnectedStatusChangedForPresentableViewController:(id)arg2;
-(void)inCallClientPresentationSessionSceneWasDestroyed:(id)arg1;
-(void)inCallClientPresentationSession:(id)arg1 handleDestroySceneActionWithReason:(long long)arg2 analyticsSource:(id)arg3 completion:(/*^block*/id)arg4;
-(long long)inCallClientPresentationSessionInterfaceOrientationForTransientOverlayPresentation:(id)arg1;
-(long long)inCallClientPresentationSessionInterfaceOrientationForBannerPresentation:(id)arg1;

@end

