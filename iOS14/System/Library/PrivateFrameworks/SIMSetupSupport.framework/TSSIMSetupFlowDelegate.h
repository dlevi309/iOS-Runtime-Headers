/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/


@protocol TSSIMSetupFlowDelegate <NSObject>
@optional
-(void)waitForResponse:(id)arg1;
-(void)receivedResponse;
-(void)userDidTapCancel;
-(void)setDefaultNavigationItems:(id)arg1;
-(long long)signupUserConsentResponse;
-(void)popViewController:(id)arg1;

@required
-(void)viewControllerDidComplete:(id)arg1;

@end

