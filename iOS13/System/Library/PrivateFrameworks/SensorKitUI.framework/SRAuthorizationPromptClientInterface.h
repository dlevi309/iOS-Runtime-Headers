/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
*/


@protocol SRAuthorizationPromptClientInterface <NSObject>
@required
-(void)authorizationRequestCompleted;
-(void)authorizationRequestFailedWithError:(id)arg1;
-(void)authorizationUIReadyForDisplayModally:(BOOL)arg1;
-(void)authorizationPresentDeleteAllAlertWithTitle:(id)arg1 actionTitle:(id)arg2 cancelTitle:(id)arg3;
-(void)authorizationPresentDownloadPath:(id)arg1 sandboxExtensionToken:(id)arg2;
-(void)authorizationRequestWillDisappear;
-(void)authorizationRequestDidDisappear;

@end

