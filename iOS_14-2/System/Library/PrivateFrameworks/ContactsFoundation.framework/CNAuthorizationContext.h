/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/CNTCCSimulation.h>

@protocol CNTCCCNTCCSimulation;
@class CNAuditToken, NSNumber;

@interface CNAuthorizationContext : NSObject <CNTCCSimulation> {

	CNAuditToken* _auditToken;
	id<CNTCC><CNTCCSimulation> _tccServices;
	Class _entitlementVerifier;
	NSNumber* _authorizationStatusCachedValue;
	NSNumber* _isNotesAccessGrantedCachedValue;
	NSNumber* _isClientFirstOrSecondPartyCachedValue;

}

@property (nonatomic,retain) CNAuditToken * auditToken;                                     //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,retain) id<CNTCC><CNTCCSimulation> tccServices;                        //@synthesize tccServices=_tccServices - In the implementation block
@property (nonatomic,retain) Class entitlementVerifier;                                     //@synthesize entitlementVerifier=_entitlementVerifier - In the implementation block
@property (nonatomic,retain) NSNumber * authorizationStatusCachedValue;                     //@synthesize authorizationStatusCachedValue=_authorizationStatusCachedValue - In the implementation block
@property (nonatomic,retain) NSNumber * isNotesAccessGrantedCachedValue;                    //@synthesize isNotesAccessGrantedCachedValue=_isNotesAccessGrantedCachedValue - In the implementation block
@property (nonatomic,retain) NSNumber * isClientFirstOrSecondPartyCachedValue;              //@synthesize isClientFirstOrSecondPartyCachedValue=_isClientFirstOrSecondPartyCachedValue - In the implementation block
@property (nonatomic,readonly) long long authorizationStatus; 
@property (nonatomic,readonly) BOOL isAccessGranted; 
@property (nonatomic,readonly) BOOL isAccess1Granted; 
@property (nonatomic,readonly) BOOL isAccess2Granted; 
@property (nonatomic,readonly) BOOL isNotesAccessGranted; 
@property (nonatomic,readonly) BOOL isAccessRestricted; 
@property (nonatomic,readonly) BOOL isClientFirstOrSecondParty; 
@property (nonatomic,readonly) BOOL isClientTCCWhitelisted; 
+(id)sharedInstance;
+(id)os_log;
-(void)setAuthorizationStatusCachedValue:(NSNumber *)arg1 ;
-(id)checkIfNotesAccessGranted;
-(void)setTccServices:(id<CNTCC><CNTCCSimulation>)arg1 ;
-(id)init;
-(BOOL)isClientFirstOrSecondParty;
-(BOOL)isAccess2Granted;
-(BOOL)isAccessGrantedRequestingAccessIfNeeded;
-(void)setAuditToken:(CNAuditToken *)arg1 ;
-(BOOL)isAccess1Granted;
-(long long)authorizationStatus;
-(NSNumber *)isClientFirstOrSecondPartyCachedValue;
-(id)initWithAuditToken:(SCD_Struct_CN1)arg1 ;
-(BOOL)checkIsClientNotesEntitled;
-(CNAuditToken *)auditToken;
-(void)setIsClientFirstOrSecondPartyCachedValue:(NSNumber *)arg1 ;
-(BOOL)checkIsClientTCCWhitelisted;
-(long long)resolveRequestAuthorizationFuture:(id)arg1 ;
-(id)requestAuthorizationFuture:(long long)arg1 ;
-(void)setEntitlementVerifier:(Class)arg1 ;
-(Class)entitlementVerifier;
-(id)initWithCNAuditToken:(id)arg1 tccServices:(id)arg2 entitlementVerifier:(Class)arg3 ;
-(void)checkAndUpdateAuthorizationStatusIfUnknown;
-(BOOL)isClientTCCWhitelisted;
-(void)simulateStatus:(long long)arg1 ;
-(void)stopSimulation;
-(BOOL)requestAccessWithError:(id*)arg1 ;
-(void)requestAuthorization:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isNotesAccessGranted;
-(BOOL)isAccessGranted;
-(NSNumber *)isNotesAccessGrantedCachedValue;
-(BOOL)isAccessRestricted;
-(id<CNTCC><CNTCCSimulation>)tccServices;
-(void)setIsNotesAccessGrantedCachedValue:(NSNumber *)arg1 ;
-(id)checkIsFirstPartyOrSecondPartyOrContactsSPIEntitled;
-(id)errorForStatus:(long long)arg1 ;
-(NSNumber *)authorizationStatusCachedValue;
@end

