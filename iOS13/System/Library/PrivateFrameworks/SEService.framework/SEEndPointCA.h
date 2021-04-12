/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SEService.framework/SEService
*/

#import <SEService/SEService-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSData;

@interface SEEndPointCA : NSObject <NSSecureCoding> {

	NSString* _identifier;
	SecCertificateRef _certificate;
	NSString* _subjectIdentifier;
	NSArray* _certificates;
	NSData* _secureElementAttestation;

}

@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * subjectIdentifier;                   //@synthesize subjectIdentifier=_subjectIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * certificates;                         //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,retain) NSData * secureElementAttestation;              //@synthesize secureElementAttestation=_secureElementAttestation - In the implementation block
@property (nonatomic,readonly) SecCertificateRef certificate;                //@synthesize certificate=_certificate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)decodeWithData:(id)arg1 error:(id*)arg2 ;
+(id)endPointCAWithIdentifier:(id)arg1 subjectIdentifer:(id)arg2 secureElementAttestation:(id)arg3 error:(id*)arg4 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSArray *)certificates;
-(SecCertificateRef)certificate;
-(id)encodeWithError:(id*)arg1 ;
-(void)setCertificates:(NSArray *)arg1 ;
-(NSString *)subjectIdentifier;
-(id)dumpState;
-(void)setSubjectIdentifier:(NSString *)arg1 ;
-(void)setSecureElementAttestation:(NSData *)arg1 ;
-(NSData *)secureElementAttestation;
@end

