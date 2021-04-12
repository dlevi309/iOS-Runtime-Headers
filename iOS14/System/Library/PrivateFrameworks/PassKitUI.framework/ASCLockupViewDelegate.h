/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol ASCLockupViewDelegate <NSObject>
@optional
-(void)lockupViewDidBeginRequest:(id)arg1;
-(void)lockupViewDidFinishRequest:(id)arg1;
-(void)lockupView:(id)arg1 didFailRequestWithError:(id)arg2;
-(void)lockupView:(id)arg1 appStateDidChange:(id)arg2;
-(id)metricsActivityForLockupView:(id)arg1 toPerformActionOfOffer:(id)arg2;
-(id)metricsActivityForLockupView:(id)arg1 toPerformActionOfOffer:(id)arg2;
-(void)lockupViewDidInvalidateIntrinsicContentSize:(id)arg1;

@required
-(id)presentingViewControllerForLockupView:(id)arg1;
-(id)presentingViewControllerForLockupView:(id)arg1;

@end

