/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)init;
-(BOOL)canReadFromLocalAccount;
-(id)readableAccountsFromAccounts:(id)arg1 ;
-(BOOL)canWriteToAccountWithIdentifier:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 managedProfileConnection:(id)arg2 ;
-(id)initWithAuditToken:(SCD_Struct_CN1)arg1 managedProfileConnection:(id)arg2 ;
-(BOOL)accountIsManaged:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)readableAccountIdentifiersFromIdentifiers:(id)arg1 ;
-(id)accountForIdentifier:(id)arg1 ;
-(BOOL)deviceHasManagementRestrictions;
-(BOOL)canReadFromAccountWithIdentifier:(id)arg1 ;
-(id)writableAccountIdentifiersFromIdentifiers:(id)arg1 ;
-(id<CNManagedProfileConnection>)profileConnection;
-(BOOL)accountIsManagedForIdentifier:(id)arg1 ;
-(id)writableAccountsFromAccounts:(id)arg1 ;
-(BOOL)canWriteToLocalAccount;
@end

