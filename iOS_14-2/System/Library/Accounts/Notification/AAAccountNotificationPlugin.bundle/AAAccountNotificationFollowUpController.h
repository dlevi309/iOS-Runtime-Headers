/*
* Generated on Thursday, January 14, 2021 at 2:29:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Accounts/Notification/AAAccountNotificationPlugin.bundle/AAAccountNotificationPlugin
*/


@class AAFollowUpController;

@interface AAAccountNotificationFollowUpController : NSObject {

	AAFollowUpController* _followUpController;

}
+(id)_secondaryAccountTypes;
-(id)init;
-(void)updateStartUsingiCloudFollowupForAccountStore:(id)arg1 account:(id)arg2 oldAccount:(id)arg3 ;
-(void)dismissAllFollowupsForAccount:(id)arg1 ;
-(void)updateVerifyTermsFollowupForAccountStore:(id)arg1 account:(id)arg2 oldAccount:(id)arg3 ;
-(void)_updateStartUsingiCloudFollowupForAccountStore:(id)arg1 account:(id)arg2 oldAccount:(id)arg3 ;
-(void)_updateVerifyTermsFollowupForAccountStore:(id)arg1 account:(id)arg2 oldAccount:(id)arg3 ;
-(void)_dismissStartUsingFollowUp;
-(BOOL)_didAddAccount:(id)arg1 oldAccount:(id)arg2 ;
-(BOOL)_didDeleteAccount:(id)arg1 oldAccount:(id)arg2 ;
@end

