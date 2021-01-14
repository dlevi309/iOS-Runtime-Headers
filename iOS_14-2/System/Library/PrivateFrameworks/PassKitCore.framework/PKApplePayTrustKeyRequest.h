/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface PKApplePayTrustKeyRequest : NSObject <NSSecureCoding> {

	NSString* _keyIdentifier;
	NSData* _subjectIdentifier;

}

@property (nonatomic,readonly) NSString * keyIdentifier;                //@synthesize keyIdentifier=_keyIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * subjectIdentifier;              //@synthesize subjectIdentifier=_subjectIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithKeyIdentifier:(id)arg1 subjectIdentifier:(id)arg2 ;
-(NSData *)subjectIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)keyIdentifier;
@end

