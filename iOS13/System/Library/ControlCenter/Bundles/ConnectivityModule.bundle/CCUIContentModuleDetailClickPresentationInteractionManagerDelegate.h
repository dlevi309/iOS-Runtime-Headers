/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/ConnectivityModule.bundle/ConnectivityModule
*/


@protocol CCUIContentModuleDetailClickPresentationInteractionManagerDelegate <NSObject>
@optional
-(BOOL)contentModuleDetailClickPresentationInteractionControllerInteractionShouldBegin:(id)arg1;
-(void)contentModuleDetailClickPresentationInteractionController:(id)arg1 requestsAuthenticationForPresentationWithCompletionHandler:(/*^block*/id)arg2;
-(void)contentModuleDetailClickPresentationInteractionControllerInteractionEnded:(id)arg1 wasCancelled:(BOOL)arg2;

@required
-(id)presentedViewControllerForContentModuleDetailClickPresentationInteractionController:(id)arg1;

@end

