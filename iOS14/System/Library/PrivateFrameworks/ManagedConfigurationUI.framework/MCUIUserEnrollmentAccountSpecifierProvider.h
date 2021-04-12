/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <libobjc.A.dylib/DevicePINControllerDelegate.h>

@class NSString;

@interface MCUIUserEnrollmentAccountSpecifierProvider : NSObject <DevicePINControllerDelegate> {

	/*^block*/id _devicePasscodeVerificationCompletionHandler;

}

@property (nonatomic,copy) id devicePasscodeVerificationCompletionHandler;              //@synthesize devicePasscodeVerificationCompletionHandler=_devicePasscodeVerificationCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)labelTextForAccountSummaryCell;
+(id)titleForAccountSummaryGroup;
+(id)deleteAccountGroupFooterText;
+(id)warningTextForAccountDeletion;
-(void)didCancelEnteringPIN;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)preflightsAccountDeletion:(id)arg1 presentingViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_verifyDevicePasscodeWithPresentingViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDevicePasscodeVerificationCompletionHandler:(id)arg1 ;
-(id)devicePasscodeVerificationCompletionHandler;
@end

