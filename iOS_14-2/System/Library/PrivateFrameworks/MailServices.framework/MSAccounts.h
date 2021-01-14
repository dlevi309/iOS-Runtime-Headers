/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
*/

#import <MailServices/MSMailDefaultService.h>

@interface MSAccounts : MSMailDefaultService
+(BOOL)canSendMailSourceAccountManagement:(int)arg1 ;
+(BOOL)canSendMail;
+(id)attachmentCapabilities;
+(id)customSignatureForSendingEmailAddress:(id)arg1 ;
+(void)accountValuesForKeys:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 launchMobileMail:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
+(BOOL)hasActiveAccounts;
+(void)accountValuesForKeys:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)accountValuesForKeys:(id)arg1 launchMobileMail:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
+(BOOL)deleteAccountsWithUniqueIdentifiers:(id)arg1 error:(id*)arg2 ;
+(void)mailboxListingForAccountWithUniqueIdentifier:(id)arg1 keys:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(BOOL)setPushStateForMailboxWithPath:(id)arg1 account:(id)arg2 pushState:(BOOL)arg3 error:(id*)arg4 ;
-(void)_listAccountKeys:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 handler:(/*^block*/id)arg4 ;
-(void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(/*^block*/id)arg3 ;
@end

