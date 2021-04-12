/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@interface MCPersonaHelper : NSObject
+(void)removePersona:(id)arg1 ;
+(void)trackDirtyPersona:(id)arg1 ;
+(void)untrackDirtyPersona:(id)arg1 ;
+(void)removePersonaAndAccountsWithPersonaID:(id)arg1 ;
+(void)removeExistingEnterprisePersonaAndAccountsAsynchronously;
+(BOOL)personaWithUniqueIdentifierExists:(id)arg1 ;
+(id)managedAppleIDNameWithPersonaID:(id)arg1 ;
+(id)performBlockUnderPersona:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)performBlockUnderPersonalPersona:(/*^block*/id)arg1 ;
+(BOOL)isCurrentPersonaEnterprise;
+(id)createEnterprisePersona:(id*)arg1 passcode:(id)arg2 ;
+(void)untrackAllDirtyPersonas;
+(id)accountIdentifierForAppleAccountWithPersonaID:(id)arg1 ;
+(void)signOutEnterpriseAccountWithPersonaID:(id)arg1 ;
+(id)currentPersonaID;
+(id)fetchDirtyPersonaIDs;
+(id)appleAccountWithPersonaID:(id)arg1 ;
+(id)updateAccountDescriptionName:(id)arg1 forAppleAccountWithPersonaID:(id)arg2 ;
+(BOOL)adoptPersona:(id)arg1 error:(id*)arg2 ;
@end

