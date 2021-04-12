/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <NearField/NFSession.h>
#import <libobjc.A.dylib/NFSecureElementManagerSessionCallbacks.h>
#import <libobjc.A.dylib/NFAppletCollection.h>

@class NSMutableDictionary, NSString;

@interface NFSecureElementManagerSession : NFSession <NFSecureElementManagerSessionCallbacks, NFAppletCollection> {

	BOOL _hasApplets;
	NSMutableDictionary* _appletsById;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)stateInformation;
-(id)appletWithIdentifier:(id)arg1 ;
-(id)felicaAppletState:(id)arg1 error:(id*)arg2 ;
-(id)transitAppletState:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteAllApplets:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)getCryptogram:(id*)arg1 challengeResponse:(id*)arg2 error:(id*)arg3 ;
-(BOOL)getCryptogram:(id*)arg1 challengeResponse:(id*)arg2 ;
-(unsigned)validateSEPairings:(id*)arg1 ;
-(id)allApplets;
-(BOOL)deleteApplets:(id)arg1 queueServerConnection:(BOOL)arg2 error:(id*)arg3 ;
-(id)signChallenge:(id)arg1 forAID:(id)arg2 sigInfo:(id*)arg3 error:(id*)arg4 ;
-(id)signChallenge:(id)arg1 useOSVersion:(BOOL)arg2 signatureInfo:(id*)arg3 error:(id*)arg4 ;
-(id)signChallenge:(id)arg1 certs:(id*)arg2 error:(id*)arg3 ;
-(id)getSignedPlatformDataForSeid:(id)arg1 error:(id*)arg2 ;
-(id)performPeerPaymentEnrollment:(id)arg1 error:(id*)arg2 ;
-(void)_setApplets:(id)arg1 ;
-(id)stateInformationWithRedirectInfo:(id)arg1 error:(id*)arg2 ;
-(id)signChallenge:(id)arg1 forAID:(id)arg2 certs:(id*)arg3 error:(id*)arg4 ;
-(id)_appletsById;
-(BOOL)deleteAllApplets:(BOOL)arg1 ;
-(BOOL)addExpressApplet:(id)arg1 type:(unsigned char)arg2 authorization:(id)arg3 expressInfo:(id)arg4 error:(id*)arg5 ;
-(BOOL)removeExpressApplet:(id)arg1 type:(unsigned char)arg2 restoreAuthorization:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)setExpressModesEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)setExpressConfig:(id)arg1 restoreAuthorization:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)restoreAuthorizationForAllAppletsExcept:(id)arg1 error:(id*)arg2 ;
-(BOOL)disableAuthorizationForApplet:(id)arg1 authorization:(id)arg2 error:(id*)arg3 ;
-(BOOL)disableAuthorizationForApplet:(id)arg1 andKey:(id)arg2 authorization:(id)arg3 error:(id*)arg4 ;
-(long long)getAndResetLPEMCounter:(id*)arg1 ;
-(BOOL)expressModesEnabledWithError:(id*)arg1 ;
-(id)expressAppletIdentifiersWithError:(id*)arg1 ;
-(BOOL)didExitRestrictedMode:(id)arg1 error:(id*)arg2 ;
-(id)transceive:(id)arg1 forSEID:(id)arg2 error:(id*)arg3 ;
-(BOOL)refreshSecureElement:(id)arg1 error:(id*)arg2 ;
-(id)getAttackCounterLogForSEID:(id)arg1 error:(id*)arg2 ;
-(id)dumpDomain:(unsigned char)arg1 forSEID:(id)arg2 error:(id*)arg3 ;
-(id)stateInformationWithError:(id*)arg1 ;
-(id)signChallenge:(id)arg1 certs:(id*)arg2 ;
-(id)signChallenge:(id)arg1 useOSVersion:(BOOL)arg2 signatureInfo:(id*)arg3 ;
-(id)signChallenge:(id)arg1 forAID:(id)arg2 certs:(id*)arg3 ;
-(BOOL)deleteApplets:(id)arg1 queueServerConnection:(BOOL)arg2 ;
-(BOOL)addExpressApplet:(id)arg1 type:(unsigned char)arg2 authorization:(id)arg3 ;
-(BOOL)addExpressApplet:(id)arg1 type:(unsigned char)arg2 authorization:(id)arg3 error:(id*)arg4 ;
-(BOOL)addExpressKeyID:(id)arg1 forApplet:(id)arg2 type:(unsigned char)arg3 authorization:(id)arg4 expressInfo:(id)arg5 error:(id*)arg6 ;
-(BOOL)removeExpressApplet:(id)arg1 type:(unsigned char)arg2 ;
-(BOOL)removeExpressApplet:(id)arg1 type:(unsigned char)arg2 error:(id*)arg3 ;
-(BOOL)removeExpressApplet:(id)arg1 type:(unsigned char)arg2 restoreAuthorization:(BOOL)arg3 ;
-(BOOL)removeExpressKeyID:(id)arg1 forApplet:(id)arg2 restoreAuthorization:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)setExpressModesEnabled:(BOOL)arg1 ;
-(id)checkExpressAppletCompatibility:(id)arg1 error:(id*)arg2 ;
-(BOOL)setExpressConfig:(id)arg1 error:(id*)arg2 ;
-(id)getExpressConfigWithError:(id*)arg1 ;
-(BOOL)restoreAuthorizationForAllAppletsExcept:(id)arg1 ;
-(BOOL)restoreAuthorizarionForKeys:(id)arg1 onApplet:(id)arg2 error:(id*)arg3 ;
-(BOOL)disableAuthorizationForApplet:(id)arg1 authorization:(id)arg2 ;
-(BOOL)disableAuthorizationForApplet:(id)arg1 andKeys:(id)arg2 authorization:(id)arg3 error:(id*)arg4 ;
-(id)felicaAppletState:(id)arg1 ;
-(BOOL)expressModesEnabled;
-(id)expressAppletIdentifiers;
-(void)didExitRestrictedMode:(id)arg1 ;
-(id)transceive:(id)arg1 forSEID:(id)arg2 ;
-(id)transceiveMultiple:(id)arg1 forSEID:(id)arg2 error:(id*)arg3 ;
-(unsigned)runScript:(id)arg1 forSEID:(id)arg2 results:(id*)arg3 lastStatus:(unsigned long long*)arg4 ;
-(unsigned)runScript:(id)arg1 parameters:(id)arg2 outputResults:(id*)arg3 ;
-(BOOL)refreshSecureElement:(id)arg1 ;
-(id)getAttackCounterLogForSEID:(id)arg1 ;
-(id)dumpDomain:(unsigned char)arg1 forSEID:(id)arg2 ;
-(BOOL)powerCycleSEID:(id)arg1 error:(id*)arg2 ;
-(id)getOSUpdateLog;
@end

