/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@interface MCPersonaHelper : NSObject
+(id)performBlockUnderPersonalPersona:(/*^block*/id)arg1 ;
+(id)managedAppleIDNameWithPersonaID:(id)arg1 ;
+(void)removePersona:(id)arg1 ;
+(void)removePersonaAndAccountsWithPersonaID:(id)arg1 ;
+(void)signOutEnterpriseAccountWithPersonaID:(id)arg1 ;
+(id)appleAccountWithPersonaID:(id)arg1 ;
+(id)performBlockUnderPersona:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)createEnterprisePersona:(id*)arg1 passcode:(id)arg2 ;
+(BOOL)adoptPersona:(id)arg1 error:(id*)arg2 ;
+(void)removeExistingEnterprisePersonaAndAccountsAsynchronously;
+(id)accountIdentifierForAppleAccountWithPersonaID:(id)arg1 ;
+(id)updateAccountDescriptionName:(id)arg1 forAppleAccountWithPersonaID:(id)arg2 ;
+(id)currentPersonaID;
+(BOOL)isCurrentPersonaEnterprise;
+(BOOL)personaWithUniqueIdentifierExists:(id)arg1 ;
+(void)trackDirtyPersona:(id)arg1 ;
+(void)untrackDirtyPersona:(id)arg1 ;
+(void)untrackAllDirtyPersonas;
+(id)fetchDirtyPersonaIDs;
@end

