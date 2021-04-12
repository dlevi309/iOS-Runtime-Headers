/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)keyIdentifier;
-(id)initWithKeyIdentifier:(id)arg1 subjectIdentifier:(id)arg2 ;
-(NSData *)subjectIdentifier;
@end

