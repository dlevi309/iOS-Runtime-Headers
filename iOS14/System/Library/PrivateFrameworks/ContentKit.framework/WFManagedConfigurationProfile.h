/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@protocol OS_dispatch_queue;
@class NSSet, ACAccount, NSObject, ACAccountStore, NSMutableDictionary, MCProfileConnection;

@interface WFManagedConfigurationProfile : NSObject {

	NSSet* _managedAppBundleIDs;
	ACAccount* _primaryAppleAccount;
	NSObject*<OS_dispatch_queue> _operatingQueue;
	ACAccountStore* _accountStore;
	NSMutableDictionary* _accounts;
	NSMutableDictionary* _accountIdentifiersByDataClass;
	MCProfileConnection* _profileConnection;

}

@property (nonatomic,readonly) ACAccount * primaryAppleAccount; 
@property (readonly) BOOL isOpenInRestrictionInEffect; 
@property (readonly) BOOL mayOpenFromUnmanagedToManaged; 
@property (readonly) BOOL mayOpenFromManagedToUnmanaged; 
@property (readonly) BOOL isWiFiPowerModificationAllowed; 
@property (readonly) BOOL isBluetoothModificationAllowed; 
@property (nonatomic,copy,readonly) NSSet * managedAppBundleIDs;                                 //@synthesize managedAppBundleIDs=_managedAppBundleIDs - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> operatingQueue;                      //@synthesize operatingQueue=_operatingQueue - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;                                    //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) ACAccount * primaryAppleAccount;                                  //@synthesize primaryAppleAccount=_primaryAppleAccount - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * accounts;                                   //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * accountIdentifiersByDataClass;              //@synthesize accountIdentifiersByDataClass=_accountIdentifiersByDataClass - In the implementation block
@property (nonatomic,copy,readonly) MCProfileConnection * profileConnection;                     //@synthesize profileConnection=_profileConnection - In the implementation block
+(id)defaultProfile;
-(BOOL)isAppManaged:(id)arg1 ;
-(NSMutableDictionary *)accounts;
-(BOOL)isAccountManaged:(id)arg1 ;
-(BOOL)isOpenInRestrictionInEffect;
-(id)init;
-(id)accountIdentifiersEnabledForDataclass:(id)arg1 ;
-(NSSet *)managedAppBundleIDs;
-(ACAccountStore *)accountStore;
-(BOOL)isWiFiPowerModificationAllowed;
-(BOOL)mayOpenFromUnmanagedToManaged;
-(MCProfileConnection *)profileConnection;
-(id)accountWithIdentifier:(id)arg1 ;
-(BOOL)isBluetoothModificationAllowed;
-(BOOL)mayOpenFromManagedToUnmanaged;
-(ACAccount *)primaryAppleAccount;
-(ACAccount *)primaryAppleAccount;
-(void)handleAccountStoreDidChangeNotification:(id)arg1 ;
-(id)initWithProfileConnection:(id)arg1 accountStore:(id)arg2 ;
-(void)removeCachedChildrenAccountForAccount:(id)arg1 ;
-(void)handleManagedAppDidChangeNotification:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)operatingQueue;
-(NSMutableDictionary *)accountIdentifiersByDataClass;
-(BOOL)isAccountBasedSourceApp:(id)arg1 ;
-(unsigned long long)managedLevelForContentOfURL:(id)arg1 ;
@end

