/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/


@protocol TSSIMSetupFlowDelegate <NSObject>
@optional
-(void)receivedResponse;
-(void)waitForResponse:(id)arg1;
-(void)userDidTapCancel;
-(void)setDefaultNavigationItems:(id)arg1;
-(long long)signupUserConsentResponse;
-(void)popViewController:(id)arg1;

@required
-(void)viewControllerDidComplete:(id)arg1;

@end

