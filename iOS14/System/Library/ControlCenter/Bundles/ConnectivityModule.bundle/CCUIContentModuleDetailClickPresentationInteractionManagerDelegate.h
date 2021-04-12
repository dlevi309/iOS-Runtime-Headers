/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

