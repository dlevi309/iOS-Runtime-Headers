/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface PKApplePayTrustKey : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSData* _signedEnrollmentData;
	NSData* _publicKeyHash;
	NSData* _certificate;

}

@property (nonatomic,copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * signedEnrollmentData;              //@synthesize signedEnrollmentData=_signedEnrollmentData - In the implementation block
@property (nonatomic,copy,readonly) NSData * publicKeyHash;                     //@synthesize publicKeyHash=_publicKeyHash - In the implementation block
@property (nonatomic,copy,readonly) NSData * certificate;                       //@synthesize certificate=_certificate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithKey:(id)arg1 ;
-(NSData *)publicKeyHash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)certificate;
-(id)description;
-(NSData *)signedEnrollmentData;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
@end

