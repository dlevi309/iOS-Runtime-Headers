/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/


@class NSCache, NSLock, NSNumber;

@interface ISBiometricStore : NSObject {

	NSCache* _contextCache;
	NSLock* _lock;

}

@property (assign) long long biometricState; 
@property (getter=isBiometricStateEnabled,readonly) BOOL biometricStateEnabled; 
@property (readonly) NSNumber * lastRegisteredAccountIdentifier; 
+(id)sharedInstance;
+(id)countryCode;
+(BOOL)shouldUseExtendedEnrollment;
+(BOOL)shouldUseUpsellEnrollment;
+(void)tokenUpdateDidFinishWithLogKey:(id)arg1 ;
+(BOOL)tokenUpdateShouldStartWithLogKey:(id)arg1 ;
+(long long)tokenUpdateState;
+(id)keychainLabelForKeyWithAccountID:(id)arg1 purpose:(long long)arg2 ;
+(id)applePayClassicNetworks;
+(id)diskBasedPaymentSheet;
+(BOOL)isActionSupported:(long long)arg1 withBiometricAuthenticationContext:(id)arg2 ;
+(id)keychainLabelForAccountID:(id)arg1 purpose:(long long)arg2 ;
+(id)keychainLabelForCertWithAccountID:(id)arg1 purpose:(long long)arg2 ;
+(BOOL)shouldUseApplePayClassic;
+(BOOL)shouldUseAutoEnrollment;
+(BOOL)shouldUseX509;
-(id)init;
-(BOOL)canPerformExtendedBiometricActionsForAccountIdentifier:(id)arg1 ;
-(unsigned long long)keyCountForAccountIdentifier:(id)arg1 ;
-(id)publicKeyDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id*)arg3 ;
-(BOOL)canPerformBiometricOptIn;
-(long long)biometricState;
-(unsigned long long)identityMapCount;
-(BOOL)isIdentityMapValidForAccountIdentifier:(id)arg1 ;
-(NSNumber *)lastRegisteredAccountIdentifier;
-(long long)biometricAvailabilityForAccountIdentifier:(id)arg1 ;
-(BOOL)deleteKeychainTokensForAccountIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)addContextToCache:(id)arg1 withToken:(id)arg2 ;
-(void)clearLastRegisteredAccountIdentifier;
-(id)fetchContextFromCacheWithToken:(id)arg1 evict:(BOOL)arg2 ;
-(BOOL)isBiometricStateEnabled;
-(void)registerAccountIdentifier:(id)arg1 ;
-(void)saveIdentityMapForAccountIdentifier:(id)arg1 ;
-(void)setBiometricState:(long long)arg1 ;
-(id)createAttestationDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id*)arg3 ;
-(id)createX509CertChainDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id*)arg3 ;
-(id)signData:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(id)x509CertChainDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 regenerateCerts:(BOOL)arg3 error:(id*)arg4 ;
@end

