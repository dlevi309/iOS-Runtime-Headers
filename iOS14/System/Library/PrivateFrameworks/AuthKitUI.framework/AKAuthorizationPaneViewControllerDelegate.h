/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/


@protocol AKAuthorizationPaneViewControllerDelegate <NSObject,AKAuthorizationPaneAutomaticResizeDelegate>
@optional
-(void)authorizationPaneViewController:(id)arg1 didRequestIconWithCompletion:(/*^block*/id)arg2;
-(void)authorizationPaneViewController:(id)arg1 pushEditScope:(id)arg2 presentationContext:(id)arg3 options:(id)arg4;
-(void)performAppleIDAuthorizationForPaneViewController:(id)arg1;
-(void)performPasswordAuthenticationForPaneViewController:(id)arg1;

@required
-(void)authorizationPaneViewController:(id)arg1 dismissWithAuthorization:(id)arg2 error:(id)arg3;
-(void)authorizationPaneViewController:(id)arg1 didRequestAuthorizationWithUserProvidedInformation:(id)arg2 completion:(/*^block*/id)arg3;

@end

