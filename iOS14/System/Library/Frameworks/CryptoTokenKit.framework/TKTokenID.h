/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <CryptoTokenKit/CryptoTokenKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TKTokenID : NSObject <NSCopying, NSSecureCoding> {

	NSString* _stringRepresentation;

}

@property (readonly) NSString * stringRepresentation;              //@synthesize stringRepresentation=_stringRepresentation - In the implementation block
@property (readonly) NSString * classID; 
@property (readonly) NSString * instanceID; 
+(BOOL)supportsSecureCoding;
+(id)encodedCertificateID:(id)arg1 ;
+(id)encodedKeyID:(id)arg1 ;
-(NSString *)instanceID;
-(NSString *)stringRepresentation;
-(id)decodedKeyID:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithClassID:(id)arg1 instanceID:(id)arg2 ;
-(NSString *)classID;
-(id)initWithTokenID:(id)arg1 ;
-(id)decodedCertificateID:(id)arg1 error:(id*)arg2 ;
-(id)decodedObjectID:(id)arg1 isCertificate:(BOOL*)arg2 error:(id*)arg3 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

