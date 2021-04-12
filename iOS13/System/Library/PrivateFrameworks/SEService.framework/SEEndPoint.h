/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SEService.framework/SEService
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <SEService/SEEndPoint.h>

@protocol SEEndPoint
@required
+(id)endPointWithIdentifier:(id)arg1 certificateData:(id)arg2 error:(id*)arg3;
+(id)revokedEndpointWithPublicKeyIdentifier:(id)arg1 revocationAttestation:(id)arg2 error:(id*)arg3;
-(id)validateAuthorizedEndpointConfig:(id)arg1;
-(void)prependCertificateChain:(id)arg1;
-(id)configurePrivateData:(id)arg1 confidentialData:(id)arg2 contaclessPersistentVisibility:(id)arg3 wiredPersistentVisibility:(id)arg4;
-(void)configurePrivateDataOffset:(unsigned short)arg1 privateDataLength:(unsigned short)arg2 confidentialDataOffset:(unsigned short)arg3 confidentialDataLength:(unsigned short)arg4 contaclessVisibility:(BOOL)arg5 wiredVisibility:(BOOL)arg6;
-(id)decryptPrivacyData:(id)arg1 serverPrivacyPublicKeyData:(id)arg2 plainText:(id*)arg3;
-(id)encryptPrivacyData:(id)arg1 serverPrivacyPublicKeyData:(id)arg2 ephemeralPublicKeyData:(id*)arg3 cipherText:(id*)arg4;

@end


@class NSString, NSData, SEEndPointConfiguration, NSArray, NSNumber, NSDictionary;

@interface SEEndPoint : NSObject <NSSecureCoding, SEEndPoint> {

	NSString* _identifier;
	NSString* _subjectIdentifier;
	NSData* _publicKey;
	NSData* _publicKeyIdentifier;
	NSData* _privacyPublicKey;
	NSData* _privacyPublicKeyIdentifier;
	SEEndPointConfiguration* _configuration;
	NSData* _readerIdentifier;
	NSData* _readerPublicKey;
	NSArray* _authorizedKeys;
	NSNumber* _confidentialMailBoxSize;
	NSNumber* _privateMailBoxSize;
	NSNumber* _counter;
	NSArray* _certificates;
	NSString* _friendlyName;
	NSString* _readerInfo;
	NSData* _mailboxMapping;
	NSData* _trackingRequest;
	NSData* _trackingReceipt;
	NSData* _deviceConfiguration;
	NSString* _environment;
	NSNumber* _sharingTokenAvailabilityBitmap;
	NSArray* _sharingRecords;
	NSData* _revocationAttestation;
	NSData* _sharingAttestationData;
	NSData* _ownerEphemeralKey;
	NSData* _sharingEncryptedData;
	NSDictionary* _metaData;
	NSData* _keyIdentifier;
	NSString* _issuerIdentifier;
	NSString* _privacyKeyIdentifier;

}

@property (nonatomic,retain) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * subjectIdentifier;                         //@synthesize subjectIdentifier=_subjectIdentifier - In the implementation block
@property (nonatomic,retain) NSData * publicKey;                                   //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,retain) NSData * publicKeyIdentifier;                         //@synthesize publicKeyIdentifier=_publicKeyIdentifier - In the implementation block
@property (nonatomic,retain) NSData * privacyPublicKey;                            //@synthesize privacyPublicKey=_privacyPublicKey - In the implementation block
@property (nonatomic,retain) NSData * privacyPublicKeyIdentifier;                  //@synthesize privacyPublicKeyIdentifier=_privacyPublicKeyIdentifier - In the implementation block
@property (nonatomic,retain) SEEndPointConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSData * readerIdentifier;                            //@synthesize readerIdentifier=_readerIdentifier - In the implementation block
@property (nonatomic,retain) NSData * readerPublicKey;                             //@synthesize readerPublicKey=_readerPublicKey - In the implementation block
@property (nonatomic,retain) NSData * keyIdentifier;                               //@synthesize keyIdentifier=_keyIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * authorizedKeys;                             //@synthesize authorizedKeys=_authorizedKeys - In the implementation block
@property (nonatomic,retain) NSNumber * confidentialMailBoxSize;                   //@synthesize confidentialMailBoxSize=_confidentialMailBoxSize - In the implementation block
@property (nonatomic,retain) NSNumber * privateMailBoxSize;                        //@synthesize privateMailBoxSize=_privateMailBoxSize - In the implementation block
@property (nonatomic,retain) NSNumber * counter;                                   //@synthesize counter=_counter - In the implementation block
@property (nonatomic,retain) NSArray * certificates;                               //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,retain) NSString * issuerIdentifier;                          //@synthesize issuerIdentifier=_issuerIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * sharingRecords;                             //@synthesize sharingRecords=_sharingRecords - In the implementation block
@property (nonatomic,retain) NSData * revocationAttestation;                       //@synthesize revocationAttestation=_revocationAttestation - In the implementation block
@property (nonatomic,retain) NSString * privacyKeyIdentifier;                      //@synthesize privacyKeyIdentifier=_privacyKeyIdentifier - In the implementation block
@property (copy) NSString * friendlyName;                                          //@synthesize friendlyName=_friendlyName - In the implementation block
@property (copy) NSString * readerInfo;                                            //@synthesize readerInfo=_readerInfo - In the implementation block
@property (copy) NSData * mailboxMapping;                                          //@synthesize mailboxMapping=_mailboxMapping - In the implementation block
@property (copy) NSData * trackingRequest;                                         //@synthesize trackingRequest=_trackingRequest - In the implementation block
@property (copy) NSData * trackingReceipt;                                         //@synthesize trackingReceipt=_trackingReceipt - In the implementation block
@property (copy) NSData * deviceConfiguration;                                     //@synthesize deviceConfiguration=_deviceConfiguration - In the implementation block
@property (copy) NSString * environment;                                           //@synthesize environment=_environment - In the implementation block
@property (copy) NSNumber * sharingTokenAvailabilityBitmap;                        //@synthesize sharingTokenAvailabilityBitmap=_sharingTokenAvailabilityBitmap - In the implementation block
@property (copy) NSData * sharingAttestationData;                                  //@synthesize sharingAttestationData=_sharingAttestationData - In the implementation block
@property (copy) NSData * ownerEphemeralKey;                                       //@synthesize ownerEphemeralKey=_ownerEphemeralKey - In the implementation block
@property (copy) NSData * sharingEncryptedData;                                    //@synthesize sharingEncryptedData=_sharingEncryptedData - In the implementation block
@property (readonly) NSDictionary * metaData;                                      //@synthesize metaData=_metaData - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)decodeWithData:(id)arg1 error:(id*)arg2 ;
+(id)endPointWithIdentifier:(id)arg1 certificateData:(id)arg2 error:(id*)arg3 ;
+(id)revokedEndpointWithPublicKeyIdentifier:(id)arg1 revocationAttestation:(id)arg2 error:(id*)arg3 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSNumber *)counter;
-(NSString *)environment;
-(void)setEnvironment:(NSString *)arg1 ;
-(NSData *)publicKey;
-(NSArray *)certificates;
-(void)setConfiguration:(SEEndPointConfiguration *)arg1 ;
-(SEEndPointConfiguration *)configuration;
-(NSString *)friendlyName;
-(void)setFriendlyName:(NSString *)arg1 ;
-(NSDictionary *)metaData;
-(void)setPublicKey:(NSData *)arg1 ;
-(id)encodeWithError:(id*)arg1 ;
-(NSData *)keyIdentifier;
-(void)setCertificates:(NSArray *)arg1 ;
-(NSString *)issuerIdentifier;
-(void)setIssuerIdentifier:(NSString *)arg1 ;
-(NSString *)subjectIdentifier;
-(NSData *)trackingRequest;
-(NSData *)revocationAttestation;
-(NSData *)trackingReceipt;
-(void)setTrackingRequest:(NSData *)arg1 ;
-(void)setCounter:(NSNumber *)arg1 ;
-(id)dumpState;
-(NSData *)deviceConfiguration;
-(void)setKeyIdentifier:(NSData *)arg1 ;
-(NSData *)readerIdentifier;
-(void)setSubjectIdentifier:(NSString *)arg1 ;
-(void)setReaderIdentifier:(NSData *)arg1 ;
-(NSData *)publicKeyIdentifier;
-(NSString *)readerInfo;
-(void)setPublicKeyIdentifier:(NSData *)arg1 ;
-(void)setReaderPublicKey:(NSData *)arg1 ;
-(NSData *)readerPublicKey;
-(void)setPrivateMailBoxSize:(NSNumber *)arg1 ;
-(void)setConfidentialMailBoxSize:(NSNumber *)arg1 ;
-(void)setAuthorizedKeys:(NSArray *)arg1 ;
-(id)generateEndPointPrivacyLongTermPrivacyKey;
-(void)setRevocationAttestation:(NSData *)arg1 ;
-(NSNumber *)privateMailBoxSize;
-(NSNumber *)confidentialMailBoxSize;
-(NSString *)privacyKeyIdentifier;
-(void)setPrivacyKeyIdentifier:(NSString *)arg1 ;
-(void)setPrivacyPublicKey:(NSData *)arg1 ;
-(void)setPrivacyPublicKeyIdentifier:(NSData *)arg1 ;
-(NSData *)privacyPublicKey;
-(NSData *)privacyPublicKeyIdentifier;
-(NSArray *)authorizedKeys;
-(NSData *)mailboxMapping;
-(NSData *)sharingAttestationData;
-(NSData *)ownerEphemeralKey;
-(NSData *)sharingEncryptedData;
-(NSNumber *)sharingTokenAvailabilityBitmap;
-(NSArray *)sharingRecords;
-(void)setSharingRecords:(NSArray *)arg1 ;
-(id)validateAuthorizedEndpointConfig:(id)arg1 ;
-(void)prependCertificateChain:(id)arg1 ;
-(id)configurePrivateData:(id)arg1 confidentialData:(id)arg2 contaclessPersistentVisibility:(id)arg3 wiredPersistentVisibility:(id)arg4 ;
-(void)configurePrivateDataOffset:(unsigned short)arg1 privateDataLength:(unsigned short)arg2 confidentialDataOffset:(unsigned short)arg3 confidentialDataLength:(unsigned short)arg4 contaclessVisibility:(BOOL)arg5 wiredVisibility:(BOOL)arg6 ;
-(id)decryptPrivacyData:(id)arg1 serverPrivacyPublicKeyData:(id)arg2 plainText:(id*)arg3 ;
-(id)encryptPrivacyData:(id)arg1 serverPrivacyPublicKeyData:(id)arg2 ephemeralPublicKeyData:(id*)arg3 cipherText:(id*)arg4 ;
-(void)setReaderInfo:(NSString *)arg1 ;
-(void)setMailboxMapping:(NSData *)arg1 ;
-(void)setTrackingReceipt:(NSData *)arg1 ;
-(void)setDeviceConfiguration:(NSData *)arg1 ;
-(void)setSharingTokenAvailabilityBitmap:(NSNumber *)arg1 ;
-(void)setSharingAttestationData:(NSData *)arg1 ;
-(void)setOwnerEphemeralKey:(NSData *)arg1 ;
-(void)setSharingEncryptedData:(NSData *)arg1 ;
@end

