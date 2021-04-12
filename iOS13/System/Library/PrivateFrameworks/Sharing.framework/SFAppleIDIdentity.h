/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSData;

@interface SFAppleIDIdentity : NSObject <NSSecureCoding> {

	NSString* _encDSID;
	NSString* _intermediateCertificateSerialNumber;
	BOOL _linkedToCurrentUser;
	NSString* _accountIdentifier;
	NSString* _altDSID;
	NSString* _appleID;
	NSDate* _certificateExpirationDate;
	NSData* _certificatePersistentReference;
	NSDate* _intermediateCertificateExpirationDate;
	NSData* _intermediateCertificatePersistentReference;
	NSDate* _lastValidationAttemptDate;
	NSDate* _lastValidationDate;
	NSDate* _modificationDate;
	NSData* _privateKeyPersistentReference;
	NSString* _serialNumber;

}

@property (nonatomic,retain) NSString * accountIdentifier;                                     //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * altDSID;                                             //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,readonly) NSString * appleID;                                             //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,retain) NSDate * certificateExpirationDate;                               //@synthesize certificateExpirationDate=_certificateExpirationDate - In the implementation block
@property (nonatomic,readonly) BOOL certificateExpired; 
@property (nonatomic,retain) NSData * certificatePersistentReference;                          //@synthesize certificatePersistentReference=_certificatePersistentReference - In the implementation block
@property (nonatomic,readonly) BOOL needsRenewal; 
@property (nonatomic,retain) NSDate * intermediateCertificateExpirationDate;                   //@synthesize intermediateCertificateExpirationDate=_intermediateCertificateExpirationDate - In the implementation block
@property (nonatomic,readonly) BOOL intermediateCertificateExpired; 
@property (nonatomic,readonly) NSString * intermediateCertificateSerialNumber; 
@property (nonatomic,retain) NSData * intermediateCertificatePersistentReference;              //@synthesize intermediateCertificatePersistentReference=_intermediateCertificatePersistentReference - In the implementation block
@property (nonatomic,readonly) BOOL isInvalid; 
@property (nonatomic,retain) NSDate * lastValidationAttemptDate;                               //@synthesize lastValidationAttemptDate=_lastValidationAttemptDate - In the implementation block
@property (nonatomic,retain) NSDate * lastValidationDate;                                      //@synthesize lastValidationDate=_lastValidationDate - In the implementation block
@property (assign,nonatomic) BOOL linkedToCurrentUser;                                         //@synthesize linkedToCurrentUser=_linkedToCurrentUser - In the implementation block
@property (nonatomic,retain) NSDate * modificationDate;                                        //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,retain) NSData * privateKeyPersistentReference;                           //@synthesize privateKeyPersistentReference=_privateKeyPersistentReference - In the implementation block
@property (nonatomic,retain) NSString * serialNumber;                                          //@synthesize serialNumber=_serialNumber - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDate *)modificationDate;
-(NSString *)altDSID;
-(NSString *)accountIdentifier;
-(NSString *)appleID;
-(NSString *)serialNumber;
-(SecCertificateRef)copyCertificate;
-(SecIdentityRef)copyIdentity;
-(BOOL)isEqualToIdentity:(id)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(id)initWithAppleID:(id)arg1 altDSID:(id)arg2 ;
-(BOOL)isInvalid;
-(NSData *)privateKeyPersistentReference;
-(void)setPrivateKeyPersistentReference:(NSData *)arg1 ;
-(NSDate *)certificateExpirationDate;
-(NSData *)certificatePersistentReference;
-(NSDate *)intermediateCertificateExpirationDate;
-(NSData *)intermediateCertificatePersistentReference;
-(NSDate *)lastValidationAttemptDate;
-(NSDate *)lastValidationDate;
-(BOOL)linkedToCurrentUser;
-(NSString *)intermediateCertificateSerialNumber;
-(BOOL)needsRenewal;
-(SecCertificateRef)copyCertificateWithType:(long long)arg1 ;
-(BOOL)isDateInThePast:(id)arg1 ;
-(SecCertificateRef)copyIntermediateCertificate;
-(BOOL)certificateExpired;
-(BOOL)intermediateCertificateExpired;
-(_SecKey*)copyPrivateKey;
-(void)removeFromKeychain;
-(int)verifyKeys;
-(void)setCertificateExpirationDate:(NSDate *)arg1 ;
-(void)setCertificatePersistentReference:(NSData *)arg1 ;
-(void)setIntermediateCertificateExpirationDate:(NSDate *)arg1 ;
-(void)setIntermediateCertificatePersistentReference:(NSData *)arg1 ;
-(void)setLastValidationAttemptDate:(NSDate *)arg1 ;
-(void)setLastValidationDate:(NSDate *)arg1 ;
-(void)setLinkedToCurrentUser:(BOOL)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
@end

