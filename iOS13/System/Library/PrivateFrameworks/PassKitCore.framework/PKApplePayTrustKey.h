/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithKey:(id)arg1 ;
-(NSData *)certificate;
-(NSData *)publicKeyHash;
-(NSData *)signedEnrollmentData;
@end

