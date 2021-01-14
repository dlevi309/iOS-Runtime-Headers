/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
*/


@protocol APUIWFLIntentControllerDelegate <NSObject>
@optional
-(BOOL)intentController:(id)arg1 shouldRequireConfirmationForIntent:(id)arg2 intentResponse:(id)arg3;

@required
-(void)intentController:(id)arg1 didHandleInteraction:(id)arg2;
-(void)intentController:(id)arg1 didFailWithError:(id)arg2 forInteraction:(id)arg3;
-(void)intentController:(id)arg1 requiresContinuingInAppForIntent:(id)arg2 proceedHandler:(/*^block*/id)arg3;
-(void)intentController:(id)arg1 requiresConfirmationForIntent:(id)arg2 intentResponse:(id)arg3;
-(void)intentControllerDidFailAuthorizationCheck:(id)arg1;

@end

