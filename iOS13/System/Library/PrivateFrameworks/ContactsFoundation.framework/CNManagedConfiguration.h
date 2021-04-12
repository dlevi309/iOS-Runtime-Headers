/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@protocol CNManagedProfileConnection;
#import <ContactsFoundation/ContactsFoundation-Structs.h>
@class NSString;

@interface CNManagedConfiguration : NSObject {

	NSString* _bundleIdentifier;
	id<CNManagedProfileConnection> _profileConnection;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) id<CNManagedProfileConnection> profileConnection;              //@synthesize profileConnection=_profileConnection - In the implementation block
+(id)os_log;
+(id)bundleIdentifierFromEntitlementForAuditToken:(SCD_Struct_CN1*)arg1 ;
+(id)bundleIdentifierFromInfoPlistForAuditToken:(SCD_Struct_CN1*)arg1 ;
+(id)bundleIdentifierForAuditToken:(SCD_Struct_CN1*)arg1 ;
-(NSString *)bundleIdentifier;
-(BOOL)deviceHasManagementRestrictions;
-(id)readableAccountIdentifiersFromIdentifiers:(id)arg1 ;
-(id)accountForIdentifier:(id)arg1 ;
-(BOOL)canWriteToLocalAccount;
-(BOOL)canWriteToAccountWithIdentifier:(id)arg1 ;
-(BOOL)canReadFromLocalAccount;
-(BOOL)canReadFromAccountWithIdentifier:(id)arg1 ;
-(id<CNManagedProfileConnection>)profileConnection;
-(id)initWithBundleIdentifier:(id)arg1 managedProfileConnection:(id)arg2 ;
-(BOOL)accountIsManaged:(id)arg1 ;
-(id)readableAccountsFromAccounts:(id)arg1 ;
-(id)writableAccountsFromAccounts:(id)arg1 ;
-(id)initWithAuditToken:(SCD_Struct_CN1)arg1 managedProfileConnection:(id)arg2 ;
-(BOOL)accountIsManagedForIdentifier:(id)arg1 ;
-(id)writableAccountIdentifiersFromIdentifiers:(id)arg1 ;
@end

