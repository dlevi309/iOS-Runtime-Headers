/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/


@interface MCUIUserEnrollmentAccountSpecifierProvider : NSObject {

	/*^block*/id _devicePasscodeVerificationCompletionHandler;

}

@property (nonatomic,copy) id devicePasscodeVerificationCompletionHandler;              //@synthesize devicePasscodeVerificationCompletionHandler=_devicePasscodeVerificationCompletionHandler - In the implementation block
+(id)labelTextForAccountSummaryCell;
+(id)titleForAccountSummaryGroup;
+(id)deleteAccountGroupFooterText;
+(id)warningTextForAccountDeletion;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)didCancelEnteringPIN;
-(void)preflightsAccountDeletion:(id)arg1 presentingViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_verifyDevicePasscodeWithPresentingViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDevicePasscodeVerificationCompletionHandler:(id)arg1 ;
-(id)devicePasscodeVerificationCompletionHandler;
@end

