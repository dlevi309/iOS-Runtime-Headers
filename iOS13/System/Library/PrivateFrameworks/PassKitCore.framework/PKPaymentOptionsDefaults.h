/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PKPaymentOptionsSynchronizationDelegate.h>
#import <libobjc.A.dylib/PKPaymentOptionsProtocol.h>

@class CNContact, NSDictionary, PKPaymentOptionsSynchronization, NSString;

@interface PKPaymentOptionsDefaults : NSObject <PKPaymentOptionsSynchronizationDelegate, PKPaymentOptionsProtocol> {

	int _defaultsChangedNotifyToken;
	unsigned long long _postedNotificationCount;
	PKPaymentOptionsSynchronization* _optionsSynchronization;
	NSDictionary* _defaultBillingAddresses;
	CNContact* _defaultShippingAddress;
	CNContact* _defaultContactName;
	CNContact* _defaultContactEmail;
	CNContact* _defaultContactPhone;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) CNContact * defaultShippingAddress;                    //@synthesize defaultShippingAddress=_defaultShippingAddress - In the implementation block
@property (nonatomic,readonly) NSDictionary * defaultBillingAddresses;              //@synthesize defaultBillingAddresses=_defaultBillingAddresses - In the implementation block
@property (nonatomic,retain) CNContact * defaultContactEmail;                       //@synthesize defaultContactEmail=_defaultContactEmail - In the implementation block
@property (nonatomic,retain) CNContact * defaultContactPhone;                       //@synthesize defaultContactPhone=_defaultContactPhone - In the implementation block
@property (nonatomic,retain) CNContact * defaultContactName;                        //@synthesize defaultContactName=_defaultContactName - In the implementation block
+(id)defaults;
-(id)init;
-(void)dealloc;
-(id)defaultBillingAddressForPaymentPass:(id)arg1 ;
-(void)setDefaultBillingAddress:(id)arg1 forPaymentPass:(id)arg2 ;
-(CNContact *)defaultContactName;
-(void)setDefaultContactName:(CNContact *)arg1 ;
-(void)optionsSynchronizationDidChangeTo:(BOOL)arg1 ;
-(void)_registerForChangeNotifications;
-(void)_unregisterForChangeNotifications;
-(void)_deleteKeychainDataForKey:(id)arg1 localOnly:(BOOL)arg2 ;
-(void)_setKeychainData:(id)arg1 forKey:(id)arg2 ;
-(id)_keychainDataForKey:(id)arg1 ;
-(id)_contactForKeychainKey:(id)arg1 ;
-(void)_setContact:(id)arg1 property:(id)arg2 forKeychainKey:(id)arg3 ;
-(void)deleteDefaultShippingAddress;
-(void)_deleteKeychainDataForKey:(id)arg1 ;
-(id)_rawDefaultBillingAddresses;
-(id)defaultBillingAddressForPrimaryAccountIdentifier:(id)arg1 ;
-(NSDictionary *)defaultBillingAddresses;
-(void)setDefaultBillingAddress:(id)arg1 forPrimaryAccountIdentifier:(id)arg2 ;
-(void)updateLastUpdatedDate:(id)arg1 forPrimaryAccountIdentifier:(id)arg2 ;
-(id)_lastUpdatedDatesForBillingAddresses;
-(void)deleteDefaultContactEmail;
-(void)deleteDefaultContactPhone;
-(void)_setContact:(id)arg1 forKeychainKey:(id)arg2 ;
-(void)deleteDefaultContactName;
-(void)_hardDeleteDefaultBillingAddress;
-(CNContact *)defaultContactEmail;
-(void)setDefaultContactEmail:(CNContact *)arg1 ;
-(CNContact *)defaultContactPhone;
-(void)setDefaultContactPhone:(CNContact *)arg1 ;
-(CNContact *)defaultShippingAddress;
-(void)setDefaultShippingAddress:(CNContact *)arg1 ;
-(id)defaultBillingAddressForRemotePaymentInstrument:(id)arg1 ;
-(void)setDefaultBillingAddress:(id)arg1 forRemotePaymentInstrument:(id)arg2 ;
-(void)_setRawDefaultBillingAddresses:(id)arg1 ;
-(void)deleteDefaultBillingAddress:(id)arg1 ;
-(void)deleteDefaultBillingAddressForPrimaryAccountIdentifier:(id)arg1 ;
-(id)lastUpdatedDateForPrimaryAccountIdentifier:(id)arg1 ;
-(void)deleteAllDefaults;
-(void)deleteAllLocalDefaults;
-(void)deleteDefaultForContactKey:(id)arg1 ;
-(void)migrateToSyncable;
@end

