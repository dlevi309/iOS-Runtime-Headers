/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, SFAppleIDContactInfo, SFAppleIDIdentity, NSData, SFAppleIDValidationRecord;

@interface SFAppleIDAccount : NSObject <NSSecureCoding> {

	NSString* _altDSID;
	NSString* _appleID;
	NSString* _certificateToken;
	NSDate* _certificateTokenCreationDate;
	SFAppleIDContactInfo* _contactInfo;
	NSDate* _creationDate;
	SFAppleIDIdentity* _identity;
	NSData* _privateKeyPersistentReference;
	SFAppleIDValidationRecord* _validationRecord;

}

@property (nonatomic,retain) NSString * altDSID;                                        //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,readonly) NSString * appleID;                                      //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,retain) NSString * certificateToken;                               //@synthesize certificateToken=_certificateToken - In the implementation block
@property (nonatomic,retain) NSDate * certificateTokenCreationDate;                     //@synthesize certificateTokenCreationDate=_certificateTokenCreationDate - In the implementation block
@property (nonatomic,retain) SFAppleIDContactInfo * contactInfo;                        //@synthesize contactInfo=_contactInfo - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                   //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) SFAppleIDIdentity * identity;                              //@synthesize identity=_identity - In the implementation block
@property (nonatomic,retain) NSData * privateKeyPersistentReference;                    //@synthesize privateKeyPersistentReference=_privateKeyPersistentReference - In the implementation block
@property (nonatomic,retain) SFAppleIDValidationRecord * validationRecord;              //@synthesize validationRecord=_validationRecord - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDate *)creationDate;
-(SFAppleIDIdentity *)identity;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)appleID;
-(void)setIdentity:(SFAppleIDIdentity *)arg1 ;
-(BOOL)isEqualToAccount:(id)arg1 ;
-(NSString *)certificateToken;
-(NSDate *)certificateTokenCreationDate;
-(SFAppleIDContactInfo *)contactInfo;
-(NSData *)privateKeyPersistentReference;
-(SFAppleIDValidationRecord *)validationRecord;
-(id)initWithAppleID:(id)arg1 ;
-(void)setCertificateToken:(NSString *)arg1 ;
-(void)setCertificateTokenCreationDate:(NSDate *)arg1 ;
-(void)setContactInfo:(SFAppleIDContactInfo *)arg1 ;
-(void)setPrivateKeyPersistentReference:(NSData *)arg1 ;
-(void)setValidationRecord:(SFAppleIDValidationRecord *)arg1 ;
@end

