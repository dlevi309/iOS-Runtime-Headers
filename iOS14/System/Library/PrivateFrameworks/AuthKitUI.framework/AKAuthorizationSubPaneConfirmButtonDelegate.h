/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/


@protocol AKAuthorizationSubPaneConfirmButtonDelegate <NSObject>
@optional
-(BOOL)validateReadyForAuthorization;

@required
-(void)subPaneConfirmButtonDidEnterProcessingState:(id)arg1;
-(void)subpaneConfirmButtonDidFailBiometry:(id)arg1;
-(void)performPasswordAuthentication;
-(void)performAuthorization;

@end

