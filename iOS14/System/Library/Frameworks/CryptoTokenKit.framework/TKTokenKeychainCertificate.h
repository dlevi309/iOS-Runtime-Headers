/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <CryptoTokenKit/CryptoTokenKit-Structs.h>
#import <CryptoTokenKit/TKTokenKeychainItem.h>

@class NSData, NSNumber;

@interface TKTokenKeychainCertificate : TKTokenKeychainItem {

	NSData* _data;
	NSData* _subject;
	NSData* _issuer;
	NSData* _serialNumber;
	NSData* _subjectKeyID;
	NSData* _publicKeyHash;
	NSNumber* _certificateType;
	NSNumber* _certificateEncoding;

}

@property (retain) NSData * subject;                            //@synthesize subject=_subject - In the implementation block
@property (retain) NSData * issuer;                             //@synthesize issuer=_issuer - In the implementation block
@property (retain) NSData * serialNumber;                       //@synthesize serialNumber=_serialNumber - In the implementation block
@property (retain) NSData * subjectKeyID;                       //@synthesize subjectKeyID=_subjectKeyID - In the implementation block
@property (retain) NSData * publicKeyHash;                      //@synthesize publicKeyHash=_publicKeyHash - In the implementation block
@property (retain) NSNumber * certificateType;                  //@synthesize certificateType=_certificateType - In the implementation block
@property (retain) NSNumber * certificateEncoding;              //@synthesize certificateEncoding=_certificateEncoding - In the implementation block
@property (copy,readonly) NSData * data;                        //@synthesize data=_data - In the implementation block
-(NSData *)subject;
-(NSData *)serialNumber;
-(NSData *)issuer;
-(NSData *)publicKeyHash;
-(void)setPublicKeyHash:(NSData *)arg1 ;
-(id)keychainAttributes;
-(id)encodedObjectID;
-(id)initWithItemInfo:(id)arg1 ;
-(void)setCertificateType:(NSNumber *)arg1 ;
-(void)setIssuer:(NSData *)arg1 ;
-(NSData *)data;
-(NSData *)subjectKeyID;
-(NSNumber *)certificateEncoding;
-(id)initWithCertificate:(SecCertificateRef)arg1 objectID:(id)arg2 ;
-(void)setSubjectKeyID:(NSData *)arg1 ;
-(void)setCertificateEncoding:(NSNumber *)arg1 ;
-(NSNumber *)certificateType;
-(void)setSerialNumber:(NSData *)arg1 ;
-(void)setSubject:(NSData *)arg1 ;
@end

