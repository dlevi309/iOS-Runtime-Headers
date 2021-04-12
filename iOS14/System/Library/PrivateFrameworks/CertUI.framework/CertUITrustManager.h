/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
*/


#import <CertUI/CertUI-Structs.h>
@class NSString;

@interface CertUITrustManager : NSObject {

	NSString* _access;

}
+(id)defaultTrustManager;
+(void)_migrateVersionZeroFromAccessGroup:(id)arg1 toGroup:(id)arg2 ;
+(void)migrateFromVersionZero;
+(void)migrateFromVersionOne;
-(void)userAllowsCertificateTrust:(SecTrustRef)arg1 host:(id)arg2 shouldPrompt:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)init;
-(int)actionForTrust:(SecTrustRef)arg1 forHost:(id)arg2 andService:(id)arg3 ;
-(id)initWithAccessGroup:(id)arg1 ;
-(int)actionForSSLTrust:(SecTrustRef)arg1 hostname:(id)arg2 service:(id)arg3 ;
-(unsigned)rawTrustResultForSSLTrust:(SecTrustRef)arg1 hostname:(id)arg2 service:(id)arg3 ;
-(void)allowTrust:(SecTrustRef)arg1 forHost:(id)arg2 service:(id)arg3 ;
-(int)actionForSMIMETrust:(SecTrustRef)arg1 sender:(id)arg2 ;
-(BOOL)_hasExceptionsForSMIMETrust:(SecTrustRef)arg1 sender:(id)arg2 ;
-(void)addSMIMETrust:(SecTrustRef)arg1 sender:(id)arg2 ;
-(void)removeSMIMETrust:(SecTrustRef)arg1 sender:(id)arg2 ;
-(id)_getExceptionsForSSLTrust:(SecTrustRef)arg1 hostname:(id)arg2 service:(id)arg3 ;
-(int)_actionForTrust:(SecTrustRef)arg1 exceptions:(id)arg2 ;
-(unsigned)_rawTrustResultForTrust:(SecTrustRef)arg1 exceptions:(id)arg2 ;
-(void)addSSLTrust:(SecTrustRef)arg1 hostname:(id)arg2 service:(id)arg3 ;
-(void)removeSSLTrust:(SecTrustRef)arg1 hostname:(id)arg2 service:(id)arg3 ;
-(void)removeAllTrusts;
-(void)clearSavedTrustSettingsForTrust:(SecTrustRef)arg1 host:(id)arg2 service:(id)arg3 ;
@end

