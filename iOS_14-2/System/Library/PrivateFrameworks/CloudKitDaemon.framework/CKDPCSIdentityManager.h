/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@class NSString, CKDAccount, NSMutableDictionary;

@interface CKDPCSIdentityManager : NSObject {

	BOOL _isSiloed;
	BOOL _forceEnableReadOnlyManatee;
	BOOL _forceSecurityErrorOnIdentityValidation;
	BOOL _forceManateeUnavailableForUnitTests;
	BOOL _serviceIsManateeForUnitTests;
	NSString* _serviceName;
	CKDAccount* _account;
	NSString* _cachedAccountDSID;
	NSMutableDictionary* _PCSIdentityWrappersByServiceName;
	PCSIdentityDataRef _debugIdentity;

}

@property (retain) CKDAccount * account;                                                //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) BOOL isSiloed;                                           //@synthesize isSiloed=_isSiloed - In the implementation block
@property (nonatomic,readonly) BOOL forceEnableReadOnlyManatee;                         //@synthesize forceEnableReadOnlyManatee=_forceEnableReadOnlyManatee - In the implementation block
@property (retain) NSString * cachedAccountDSID;                                        //@synthesize cachedAccountDSID=_cachedAccountDSID - In the implementation block
@property (retain) NSMutableDictionary * PCSIdentityWrappersByServiceName;              //@synthesize PCSIdentityWrappersByServiceName=_PCSIdentityWrappersByServiceName - In the implementation block
@property (assign,nonatomic) PCSIdentityDataRef debugIdentity;                          //@synthesize debugIdentity=_debugIdentity - In the implementation block
@property (assign,nonatomic) BOOL forceSecurityErrorOnIdentityValidation;               //@synthesize forceSecurityErrorOnIdentityValidation=_forceSecurityErrorOnIdentityValidation - In the implementation block
@property (assign,nonatomic) BOOL forceManateeUnavailableForUnitTests;                  //@synthesize forceManateeUnavailableForUnitTests=_forceManateeUnavailableForUnitTests - In the implementation block
@property (assign,nonatomic) BOOL serviceIsManateeForUnitTests;                         //@synthesize serviceIsManateeForUnitTests=_serviceIsManateeForUnitTests - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                                  //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) BOOL currentServiceIsManatee; 
+(id)overrideKeys;
+(id)sharedFakeIdentitySetsByServiceByUsername;
+(PCSIdentitySetDataRef)_copyStingrayIdentitiesForService:(id)arg1 forBackingFakeAccount:(id)arg2 withError:(id*)arg3 ;
+(PCSIdentitySetDataRef)_getTestAccountIdentitySetForService:(id)arg1 forBackingFakeAccount:(id)arg2 withError:(id*)arg3 ;
-(CKDAccount *)account;
-(BOOL)forceEnableReadOnlyManatee;
-(void)setAccount:(CKDAccount *)arg1 ;
-(void)updateAccount:(id)arg1 ;
-(NSString *)serviceName;
-(void)clearOverrides;
-(void)dealloc;
-(PCSIdentityDataRef)debugIdentity;
-(BOOL)currentServiceIsManatee;
-(PCSIdentityDataRef)createRandomSharingIdentityWithError:(id*)arg1 ;
-(id)dataFromSharingIdentity:(PCSIdentityDataRef)arg1 error:(id*)arg2 ;
-(id)initWithAccount:(id)arg1 serviceName:(id)arg2 isSiloed:(BOOL)arg3 forceEnableReadOnlyManatee:(BOOL)arg4 ;
-(void)identitiesChanged;
-(PCSIdentitySetDataRef)createFullKeychainIdentitySetWithError:(id*)arg1 ;
-(PCSIdentityDataRef)debugSharingIdentity;
-(id)PCSServiceStringFromCKServiceType:(unsigned long long)arg1 ;
-(id)copyPublicKeyForService:(unsigned long long)arg1 withError:(id*)arg2 ;
-(id)copyAllPublicKeysForService:(unsigned long long)arg1 withError:(id*)arg2 ;
-(PCSPublicIdentityDataRef)copyDiversifiedIdentityForService:(unsigned long long)arg1 userIDEntropy:(id)arg2 withError:(id*)arg3 ;
-(id)copyDiversifiedPublicKeyForService:(unsigned long long)arg1 userIDEntropy:(id)arg2 withError:(id*)arg3 ;
-(PCSIdentityDataRef)createCombinedIdentityWithOutOfNetworkPrivateKey:(id)arg1 publicSharingIdentity:(id)arg2 ;
-(PCSPublicIdentityDataRef)createPublicSharingIdentityFromPublicKey:(id)arg1 error:(id*)arg2 ;
-(PCSIdentityDataRef)createSharingIdentityFromData:(id)arg1 error:(id*)arg2 ;
-(PCSIdentitySetDataRef)copyIdentitySetWithType:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)identitySet:(PCSIdentitySetDataRef)arg1 containsPublicKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)_checkAndClearPCSTestOverrideForKey:(id)arg1 ;
-(id)internalServicesToCombineWithLiverpoolKey;
-(id)liverpoolPublicKey;
-(void)setOverride:(id)arg1 value:(id)arg2 ;
-(BOOL)isSiloed;
-(void)setCachedAccountDSID:(NSString *)arg1 ;
-(void)setPCSIdentityWrappersByServiceName:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)PCSIdentityWrappersByServiceName;
-(BOOL)serviceIsManatee:(id)arg1 ;
-(BOOL)manateeIsAvailableWithError:(id*)arg1 ;
-(NSString *)cachedAccountDSID;
-(PCSIdentitySetDataRef)_copyTestAccountIdentitySetForService:(id)arg1 forBackingFakeAccount:(id)arg2 withError:(id*)arg3 ;
-(PCSIdentitySetDataRef)_createIdentitySetForService:(id)arg1 dsid:(id)arg2 error:(id*)arg3 ;
-(id)_cacheIdentitySet:(PCSIdentitySetDataRef)arg1 forService:(id)arg2 ;
-(BOOL)_hasCurrentKeyForService:(id)arg1 inIdentitySet:(PCSIdentitySetDataRef)arg2 withError:(id*)arg3 ;
-(PCSIdentitySetDataRef)_createSpecialInMemorySetCombiningLiverpoolWithServiceNamed:(id)arg1 dsid:(id)arg2 error:(id*)arg3 ;
-(PCSIdentitySetDataRef)_copyIdentityForService:(id)arg1 useCache:(BOOL)arg2 validateCurrentKey:(BOOL)arg3 error:(id*)arg4 ;
-(id)_copyPublicKeyDataForIdentitySet:(PCSIdentitySetDataRef)arg1 withService:(unsigned long long)arg2 withError:(id*)arg3 ;
-(id)_copyPublicKeyDataForAllIdentitiesInSet:(PCSIdentitySetDataRef)arg1 withService:(unsigned long long)arg2 ;
-(id)_addIdentitiesFromServiceNamed:(id)arg1 dsid:(id)arg2 toMutableSet:(PCSIdentitySetDataRef)arg3 ;
-(BOOL)forceManateeUnavailableForUnitTests;
-(void)setForceSecurityErrorOnIdentityValidation:(BOOL)arg1 ;
-(void)setServiceIsManateeForUnitTests:(BOOL)arg1 ;
-(void)setForceManateeUnavailableForUnitTests:(BOOL)arg1 ;
-(BOOL)forceSecurityErrorOnIdentityValidation;
-(void)setDebugIdentity:(PCSIdentityDataRef)arg1 ;
-(BOOL)serviceIsManateeForUnitTests;
@end
