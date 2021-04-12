/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/


@protocol AKAuthorizationSubPaneConfirmButtonDelegate <NSObject>
@optional
-(BOOL)validateReadyForAuthorization;

@required
-(id)presentationContext;
-(void)subPaneConfirmButtonDidEnterProcessingState:(id)arg1;
-(void)subpaneConfirmButtonDidFailBiometry:(id)arg1;
-(void)performPasswordAuthentication;
-(void)performAuthorization;

@end

