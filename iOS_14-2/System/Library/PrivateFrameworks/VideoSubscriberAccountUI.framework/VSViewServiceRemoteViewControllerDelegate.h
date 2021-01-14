/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


@protocol VSViewServiceRemoteViewControllerDelegate <NSObject>
@required
-(void)presentViewServiceRemoteViewController:(id)arg1;
-(void)dismissViewServiceRemoteViewController:(id)arg1;
-(void)viewServiceRemoteViewController:(id)arg1 didTerminateWithError:(id)arg2;
-(void)viewServiceRemoteViewController:(id)arg1 request:(id)arg2 didFinishWithResponse:(id)arg3;
-(void)viewServiceRemoteViewController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;
-(void)viewServiceRemoteViewController:(id)arg1 didChooseAdditionalProvidersForRequest:(id)arg2;
-(void)viewServiceRemoteViewController:(id)arg1 didCancelRequest:(id)arg2;
-(void)viewServiceRemoteViewController:(id)arg1 didSelectProviderWithIdentifier:(id)arg2 vetoHandler:(/*^block*/id)arg3;

@end

