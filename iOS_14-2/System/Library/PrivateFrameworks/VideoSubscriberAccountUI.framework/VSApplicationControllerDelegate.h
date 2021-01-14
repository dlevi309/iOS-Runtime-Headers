/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


@protocol VSApplicationControllerDelegate <NSObject>
@optional
-(void)applicationControllerDidStop:(id)arg1;

@required
-(BOOL)applicationController:(id)arg1 requestsAlert:(id)arg2;
-(void)applicationController:(id)arg1 request:(id)arg2 didCompleteWithResponse:(id)arg3;
-(void)applicationController:(id)arg1 didReceiveViewModel:(id)arg2;
-(void)applicationController:(id)arg1 didReceiveViewModelError:(id)arg2;
-(void)applicationController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;
-(void)applicationControllerDidStart:(id)arg1;
-(void)applicationController:(id)arg1 startDidFailWithError:(id)arg2;

@end

