/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class NSString, EMCertificateTrustInformation, CertUITrustManager;

@interface MFCertificateTrustInformationKeychainManager : NSObject <EFLoggable> {

	NSString* _addressForSaving;
	EMCertificateTrustInformation* _trustInformation;
	CertUITrustManager* _keychainManager;

}

@property (nonatomic,readonly) EMCertificateTrustInformation * trustInformation;              //@synthesize trustInformation=_trustInformation - In the implementation block
@property (nonatomic,readonly) CertUITrustManager * keychainManager;                          //@synthesize keychainManager=_keychainManager - In the implementation block
@property (nonatomic,readonly) int action; 
@property (nonatomic,readonly) BOOL hasTrustException; 
@property (nonatomic,readonly) unsigned long long keychainStatus; 
@property (nonatomic,readonly) BOOL canSaveCertificateToKeychain; 
@property (nonatomic,copy,readonly) NSString * addressForSaving;                              //@synthesize addressForSaving=_addressForSaving - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(int)action;
-(CertUITrustManager *)keychainManager;
-(EMCertificateTrustInformation *)trustInformation;
-(NSString *)addressForSaving;
-(BOOL)canSaveCertificateToKeychain;
-(id)initWithTrustInformation:(id)arg1 ;
-(BOOL)hasTrustException;
-(void)addTrustException;
-(void)removeTrustException;
-(void)saveCertificateToKeychain;
-(void)removeCertificateFromKeychain;
-(unsigned long long)keychainStatus;
@end

