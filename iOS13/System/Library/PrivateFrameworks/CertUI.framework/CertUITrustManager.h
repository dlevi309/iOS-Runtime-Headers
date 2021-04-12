/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)userAllowsCertificateTrust:(SecTrustRef)arg1 host:(id)arg2 shouldPrompt:(BOOL)arg3 ;
-(id)init;
-(void)allowTrust:(SecTrustRef)arg1 forHost:(id)arg2 service:(id)arg3 ;
-(int)actionForSSLTrust:(SecTrustRef)arg1 hostname:(id)arg2 service:(id)arg3 ;
-(unsigned)rawTrustResultForSSLTrust:(SecTrustRef)arg1 hostname:(id)arg2 service:(id)arg3 ;
-(int)actionForSMIMETrust:(SecTrustRef)arg1 sender:(id)arg2 ;
-(BOOL)_hasExceptionsForSMIMETrust:(SecTrustRef)arg1 sender:(id)arg2 ;
-(void)addSMIMETrust:(SecTrustRef)arg1 sender:(id)arg2 ;
-(void)removeSMIMETrust:(SecTrustRef)arg1 sender:(id)arg2 ;
-(id)initWithAccessGroup:(id)arg1 ;
-(int)actionForTrust:(SecTrustRef)arg1 forHost:(id)arg2 andService:(id)arg3 ;
-(id)_getExceptionsForSSLTrust:(SecTrustRef)arg1 hostname:(id)arg2 service:(id)arg3 ;
-(int)_actionForTrust:(SecTrustRef)arg1 exceptions:(id)arg2 ;
-(unsigned)_rawTrustResultForTrust:(SecTrustRef)arg1 exceptions:(id)arg2 ;
-(void)addSSLTrust:(SecTrustRef)arg1 hostname:(id)arg2 service:(id)arg3 ;
-(void)removeSSLTrust:(SecTrustRef)arg1 hostname:(id)arg2 service:(id)arg3 ;
-(void)removeAllTrusts;
-(void)clearSavedTrustSettingsForTrust:(SecTrustRef)arg1 host:(id)arg2 service:(id)arg3 ;
@end

