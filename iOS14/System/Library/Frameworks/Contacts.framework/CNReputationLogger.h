/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@interface CNReputationLogger : NSObject
+(id)obfuscateHandle:(id)arg1 ;
+(id)queryLog;
+(id)describeScore:(long long)arg1 ;
+(id)obfuscate:(id)arg1 ;
+(id)performanceLog;
-(void)couldNotQueryCoreRecentsWithError:(id)arg1 ;
-(void)couldNotQueryContactsForEmailAddressWithError:(id)arg1 ;
-(void)contactsConfirmedTrustOfPhoneNumber;
-(void)contactsConfirmedTrustOfEmailAddress;
-(void)beginQueryForHandle:(id)arg1 ;
-(void)reputationUnestablished;
-(void)coreRecentsCouldNotConfirmTrust;
-(void)queryForHandle:(id)arg1 didFinishWithReputation:(id)arg2 ;
-(void)timeToResolve:(double)arg1 ;
-(void)contactsCouldNotConfirmTrustOfEmailAddress;
-(void)contactsCouldNotConfirmTrustOfPhoneNumber;
-(void)couldNotQueryContactsForPhoneNumberWithError:(id)arg1 ;
-(void)coreRecentsConfirmedTrust;
-(void)queryForHandle:(id)arg1 didFailWithError:(id)arg2 ;
@end

