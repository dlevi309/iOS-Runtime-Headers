/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@protocol CNTCC;
#import <ContactsFoundation/ContactsFoundation-Structs.h>
@class CNFAuditToken, NSNumber;

@interface CNFAccessAuthorization : NSObject {

	id<CNTCC> _tcc;
	CNFAuditToken* _auditToken;
	long long _addressBookPreflightStatus;
	long long _contactsFullPreflightStatus;
	long long _contactsLimitedPreflightStatus;
	NSNumber* _isClientLegacyImpl;
	NSNumber* _isNotesAccessGrantedCachedValue;

}

@property (nonatomic,retain) id<CNTCC> tcc;                                           //@synthesize tcc=_tcc - In the implementation block
@property (nonatomic,retain) CNFAuditToken * auditToken;                              //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic) long long addressBookPreflightStatus;                    //@synthesize addressBookPreflightStatus=_addressBookPreflightStatus - In the implementation block
@property (assign,nonatomic) long long contactsFullPreflightStatus;                   //@synthesize contactsFullPreflightStatus=_contactsFullPreflightStatus - In the implementation block
@property (assign,nonatomic) long long contactsLimitedPreflightStatus;                //@synthesize contactsLimitedPreflightStatus=_contactsLimitedPreflightStatus - In the implementation block
@property (nonatomic,retain) NSNumber * isClientLegacyImpl;                           //@synthesize isClientLegacyImpl=_isClientLegacyImpl - In the implementation block
@property (nonatomic,retain) NSNumber * isNotesAccessGrantedCachedValue;              //@synthesize isNotesAccessGrantedCachedValue=_isNotesAccessGrantedCachedValue - In the implementation block
@property (nonatomic,readonly) long long authorizationStatus; 
@property (nonatomic,readonly) BOOL isAccessRestricted; 
@property (nonatomic,readonly) BOOL isAccessGranted; 
@property (nonatomic,readonly) BOOL isLimitedAccessGranted; 
@property (nonatomic,readonly) BOOL isFullAccessGranted; 
@property (nonatomic,readonly) BOOL isNotesAccessGranted; 
@property (nonatomic,readonly) BOOL isClientWhitelisted; 
@property (nonatomic,readonly) BOOL isClientLegacy; 
+(id)sharedInstance;
+(id)os_log;
-(id)init;
-(CNFAuditToken *)auditToken;
-(id)initWithAuditToken:(id)arg1 ;
-(long long)authorizationStatus;
-(void)setAuditToken:(CNFAuditToken *)arg1 ;
-(void)requestAuthorization:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isAccessRestricted;
-(BOOL)isNotesAccessGranted;
-(id)initWithAuditToken:(id)arg1 tcc:(id)arg2 ;
-(id<CNTCC>)tcc;
-(BOOL)isFullAccessGranted;
-(BOOL)isLimitedAccessGranted;
-(long long)addressBookPreflightStatus;
-(long long)contactsFullPreflightStatus;
-(long long)contactsLimitedPreflightStatus;
-(id)sharedAccessGrantedFutureForRequest:(long long)arg1 ;
-(BOOL)isAddressBookAccessGranted;
-(id)_checkIfNotesAccessGranted;
-(BOOL)isClientWhitelisted;
-(BOOL)doesClientHaveNotesEntitlement;
-(BOOL)isClientLegacy;
-(BOOL)isAccessGrantedRequestingAccessIfNeeded;
-(id)accessGrantedFutureForService:(long long)arg1 ;
-(void)updatePreflightStatus:(long long)arg1 forService:(long long)arg2 ;
-(void)setAddressBookPreflightStatus:(long long)arg1 ;
-(void)setContactsFullPreflightStatus:(long long)arg1 ;
-(void)setContactsLimitedPreflightStatus:(long long)arg1 ;
-(id)resolveFuture:(id)arg1 ;
-(NSNumber *)isClientLegacyImpl;
-(BOOL)_isPid:(int)arg1 linkedOnOrAfter:(SCD_Struct_CN5)arg2 ;
-(void)setIsClientLegacyImpl:(NSNumber *)arg1 ;
-(id)_readFileData:(int)arg1 offset:(int)arg2 size:(unsigned long long)arg3 ;
-(BOOL)isAccessGranted;
-(void)requestAuthorizationWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isAccessGrantedWithError:(id*)arg1 ;
-(void)setTcc:(id<CNTCC>)arg1 ;
-(NSNumber *)isNotesAccessGrantedCachedValue;
-(void)setIsNotesAccessGrantedCachedValue:(NSNumber *)arg1 ;
@end

