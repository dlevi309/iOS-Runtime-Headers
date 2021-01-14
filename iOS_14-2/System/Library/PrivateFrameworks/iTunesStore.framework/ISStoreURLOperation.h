/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISURLOperation.h>
#import <libobjc.A.dylib/ISBiometricSessionDelegate.h>

@protocol ISBiometricSessionDelegate;
@class NSNumber, SSVFairPlaySAPSession, SSBiometricAuthenticationContext, SSBag, SSURLBagContext, NSString;

@interface ISStoreURLOperation : ISURLOperation <ISBiometricSessionDelegate> {

	long long _activeMachineDataStyle;
	NSNumber* _authenticatedDSID;
	BOOL _canSendGUIDParameter;
	BOOL _ignorePreexistingSecureToken;
	BOOL _isURLBagRequest;
	long long _machineDataStyle;
	BOOL _needsAuthentication;
	BOOL _needsURLBag;
	SSVFairPlaySAPSession* _sapSession;
	BOOL _shouldAppendAuthKitHeaders;
	BOOL _shouldAppendStorefrontToURL;
	BOOL _shouldSendXTokenHeader;
	BOOL _urlKnownToBeTrusted;
	BOOL _useUserSpecificURLBag;
	BOOL _needsTermsAndConditionsAcceptance;
	BOOL _shouldCancelBiometricTokenUpdate;
	BOOL _shouldSuppressUserInfo;
	BOOL _shouldSendAKClientInfoHeaders;
	BOOL _shouldSendAKPRKRequestHeader;
	BOOL _shouldSendDSIDHeader;
	SSBiometricAuthenticationContext* _biometricAuthenticationContext;
	id<ISBiometricSessionDelegate> _biometricSessionDelegate;
	SSBag* _bag;

}

@property (retain) NSNumber * authenticatedDSID;                                                   //@synthesize authenticatedDSID=_authenticatedDSID - In the implementation block
@property (assign,nonatomic) BOOL ignorePreexistingSecureToken; 
@property (__weak) id<ISStoreURLOperationDelegate> delegate; 
@property (__weak) id<ISBiometricSessionDelegate> biometricSessionDelegate;                        //@synthesize biometricSessionDelegate=_biometricSessionDelegate - In the implementation block
@property (retain) SSBiometricAuthenticationContext * biometricAuthenticationContext;              //@synthesize biometricAuthenticationContext=_biometricAuthenticationContext - In the implementation block
@property (assign) BOOL canSendGUIDParameter; 
@property (assign) long long machineDataStyle;                                                     //@synthesize machineDataStyle=_machineDataStyle - In the implementation block
@property (assign) BOOL needsURLBag;                                                               //@synthesize needsURLBag=_needsURLBag - In the implementation block
@property (assign) BOOL needsAuthentication;                                                       //@synthesize needsAuthentication=_needsAuthentication - In the implementation block
@property (assign) BOOL needsTermsAndConditionsAcceptance;                                         //@synthesize needsTermsAndConditionsAcceptance=_needsTermsAndConditionsAcceptance - In the implementation block
@property (assign) BOOL performsMachineDataActions; 
@property (retain) SSVFairPlaySAPSession * SAPSession; 
@property (assign,nonatomic) BOOL shouldAppendAuthKitHeaders;                                      //@synthesize shouldAppendAuthKitHeaders=_shouldAppendAuthKitHeaders - In the implementation block
@property (assign,nonatomic) BOOL shouldAppendStorefrontToURL;                                     //@synthesize shouldAppendStorefrontToURL=_shouldAppendStorefrontToURL - In the implementation block
@property (assign) BOOL shouldCancelBiometricTokenUpdate;                                          //@synthesize shouldCancelBiometricTokenUpdate=_shouldCancelBiometricTokenUpdate - In the implementation block
@property (assign) BOOL shouldSuppressUserInfo;                                                    //@synthesize shouldSuppressUserInfo=_shouldSuppressUserInfo - In the implementation block
@property (assign) BOOL shouldSendAKClientInfoHeaders;                                             //@synthesize shouldSendAKClientInfoHeaders=_shouldSendAKClientInfoHeaders - In the implementation block
@property (assign) BOOL shouldSendAKPRKRequestHeader;                                              //@synthesize shouldSendAKPRKRequestHeader=_shouldSendAKPRKRequestHeader - In the implementation block
@property (assign) BOOL shouldSendDSIDHeader;                                                      //@synthesize shouldSendDSIDHeader=_shouldSendDSIDHeader - In the implementation block
@property (assign) BOOL shouldSendXTokenHeader; 
@property (assign) BOOL useUserSpecificURLBag;                                                     //@synthesize useUserSpecificURLBag=_useUserSpecificURLBag - In the implementation block
@property (assign) BOOL urlKnownToBeTrusted;                                                       //@synthesize urlKnownToBeTrusted=_urlKnownToBeTrusted - In the implementation block
@property (nonatomic,retain) SSBag * bag;                                                          //@synthesize bag=_bag - In the implementation block
@property (readonly) SSURLBagContext * URLBagContext; 
@property (assign,getter=isURLBagRequest,nonatomic) BOOL URLBagRequest;                            //@synthesize isURLBagRequest=_isURLBagRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_authKitSession;
+(id)pingOperationWithUrl:(id)arg1 ;
+(void)addITunesStoreHeadersToRequest:(id)arg1 withAccountIdentifier:(id)arg2 ;
+(void)handleITunesStoreResponseHeaders:(id)arg1 request:(id)arg2 withAccountIdentifier:(id)arg3 shouldRetry:(BOOL*)arg4 ;
+(id)itemPingOperationWithIdentifier:(unsigned long long)arg1 urlBagKey:(id)arg2 ;
+(void)_addiTunesStoreHeadersToRequest:(id)arg1 withURLBag:(id)arg2 accountIdentifier:(id)arg3 appendAuthKitHeaders:(BOOL)arg4 appendStorefrontToURL:(BOOL)arg5 clientBundleIdentifier:(id)arg6 ;
+(void)_handleResponseHeaders:(id)arg1 response:(id)arg2 request:(id)arg3 account:(id)arg4 performsMachineDataActions:(BOOL)arg5 shouldRetry:(BOOL*)arg6 ;
+(void)_addiTunesStoreHeadersToRequest:(id)arg1 withSSBag:(id)arg2 account:(id)arg3 appendAuthKitHeaders:(BOOL)arg4 appendStorefrontToURL:(BOOL)arg5 clientBundleIdentifier:(id)arg6 ;
+(void)_addiTunesStoreHeadersToRequest:(id)arg1 withSSBag:(id)arg2 accountIdentifier:(id)arg3 appendAuthKitHeaders:(BOOL)arg4 appendStorefrontToURL:(BOOL)arg5 clientBundleIdentifier:(id)arg6 ;
+(void)_addiTunesStoreHeadersToRequest:(id)arg1 withURLBag:(id)arg2 account:(id)arg3 appendAuthKitHeaders:(BOOL)arg4 appendStorefrontToURL:(BOOL)arg5 clientBundleIdentifier:(id)arg6 ;
+(id)_ssBag_copyHeaderPatternsFromBag:(id)arg1 ;
+(id)_ssBag_copyExtraHeadersForURL:(id)arg1 bag:(id)arg2 ;
+(void)_addiTunesStoreHeadersToRequest:(id)arg1 withAccount:(id)arg2 appendAuthKitHeaders:(BOOL)arg3 appendStorefrontToURL:(BOOL)arg4 clientBundleIdentifier:(id)arg5 extraHeaders:(id)arg6 storefrontSuffix:(id)arg7 ;
+(void)_addAccountDSID:(id)arg1 toRequest:(id)arg2 ;
+(void)_addPrimaryiCloudDSIDToRequest:(id)arg1 ;
+(id)_storeFrontIdentifierForAccount:(id)arg1 ;
+(void)_appendStorefront:(id)arg1 toRequestURL:(id)arg2 ;
+(id)_restrictionsHeaderValue;
+(BOOL)_operationWaitsForPurchases:(id)arg1 ;
+(void)_performMachineDataRequest:(id)arg1 requestProperties:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)propertyListOperationWithURLBagKey:(id)arg1 ;
-(BOOL)needsURLBag;
-(void)setSAPSession:(SSVFairPlaySAPSession *)arg1 ;
-(void)setShouldCancelBiometricTokenUpdate:(BOOL)arg1 ;
-(void)handleResponse:(id)arg1 ;
-(void)setAuthenticatedDSID:(NSNumber *)arg1 ;
-(void)run;
-(void)_setStoreFrontIdentifier:(id)arg1 isTransient:(BOOL)arg2 ;
-(void)setBiometricSessionDelegate:(id<ISBiometricSessionDelegate>)arg1 ;
-(SSURLBagContext *)URLBagContext;
-(void)setShouldSendAKClientInfoHeaders:(BOOL)arg1 ;
-(BOOL)_canSendTokenToURL:(id)arg1 ;
-(BOOL)shouldAppendAuthKitHeaders;
-(id)init;
-(void)_addStandardQueryParametersForURL:(id)arg1 ;
-(void)setNeedsURLBag:(BOOL)arg1 ;
-(BOOL)_performMachineDataRequest:(id)arg1 ;
-(id)_copyAuthenticationContextForAttemptNumber:(long long)arg1 ;
-(SSBiometricAuthenticationContext *)biometricAuthenticationContext;
-(id)newRequestWithURL:(id)arg1 ;
-(void)setShouldSendXTokenHeader:(BOOL)arg1 ;
-(BOOL)urlKnownToBeTrusted;
-(BOOL)shouldSendDSIDHeader;
-(void)setMachineDataStyle:(long long)arg1 ;
-(BOOL)performsMachineDataActions;
-(BOOL)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id*)arg2 ;
-(void)setShouldSendDSIDHeader:(BOOL)arg1 ;
-(BOOL)_processResponseData:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldAppendStorefrontToURL;
-(BOOL)canSendGUIDParameter;
-(void)setNeedsTermsAndConditionsAcceptance:(BOOL)arg1 ;
-(void)setCanSendGUIDParameter:(BOOL)arg1 ;
-(id)_copyAuthenticationContext;
-(SSBag *)bag;
-(BOOL)_shouldRetryForAbsintheWithResponse:(id)arg1 ;
-(void)setShouldSendAKPRKRequestHeader:(BOOL)arg1 ;
-(void)sender:(id)arg1 didFallbackToPassword:(BOOL)arg2 ;
-(id)_buyParams;
-(id)_ssBag_copyGUIDSchemesFromBag:(id)arg1 ;
-(void)_runURLOperation;
-(BOOL)shouldSendXTokenHeader;
-(BOOL)needsTermsAndConditionsAcceptance;
-(long long)machineDataStyle;
-(void)setUseUserSpecificURLBag:(BOOL)arg1 ;
-(BOOL)_authenticateWithContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)needsAuthentication;
-(id)_absintheHeaders;
-(id)authenticatedAccountDSID;
-(void)setURLBagRequest:(BOOL)arg1 ;
-(void)setBag:(SSBag *)arg1 ;
-(id<ISBiometricSessionDelegate>)biometricSessionDelegate;
-(BOOL)shouldCancelBiometricTokenUpdate;
-(BOOL)shouldSendAKClientInfoHeaders;
-(BOOL)_ssBag_shouldSendGUIDForURL:(id)arg1 withBag:(id)arg2 ;
-(BOOL)_isErrorTokenError:(id)arg1 ;
-(BOOL)useUserSpecificURLBag;
-(BOOL)shouldSendAKPRKRequestHeader;
-(id)_ssBag_copyGUIDPatternsFromBag:(id)arg1 ;
-(void)setBiometricAuthenticationContext:(SSBiometricAuthenticationContext *)arg1 ;
-(BOOL)_shouldRetryForTouchIDChallengeWithError:(id)arg1 ;
-(SSVFairPlaySAPSession *)SAPSession;
-(void)setUrlKnownToBeTrusted:(BOOL)arg1 ;
-(BOOL)isURLBagRequest;
-(void)setIgnorePreexistingSecureToken:(BOOL)arg1 ;
-(BOOL)shouldSuppressUserInfo;
-(id)_loadURLBagInterpreterWithRequest:(id)arg1 requestProperties:(id)arg2 ;
-(void)setNeedsAuthentication:(BOOL)arg1 ;
-(void)setShouldAppendAuthKitHeaders:(BOOL)arg1 ;
-(BOOL)handleRedirectFromDataProvider:(id)arg1 error:(id*)arg2 ;
-(id)_urlBagForContext:(id)arg1 ;
-(id)_resolvedURLInBagContext:(id)arg1 bagTrusted:(BOOL*)arg2 ;
-(BOOL)ignorePreexistingSecureToken;
-(id)_account;
-(void)setShouldSuppressUserInfo:(BOOL)arg1 ;
-(void)setPerformsMachineDataActions:(BOOL)arg1 ;
-(void)_continueTouchIDSession;
-(id)logKey;
-(NSNumber *)authenticatedDSID;
-(void)_willSendRequest:(id)arg1 ;
-(void)setShouldAppendStorefrontToURL:(BOOL)arg1 ;
@end

