/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface PKApplePayTrustSignatureRequest : NSObject <NSSecureCoding> {

	NSString* _keyIdentifier;
	NSData* _nonce;
	NSData* _manifestHash;

}

@property (nonatomic,copy,readonly) NSString * keyIdentifier;              //@synthesize keyIdentifier=_keyIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * nonce;                        //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,copy,readonly) NSData * manifestHash;                 //@synthesize manifestHash=_manifestHash - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)nonce;
-(NSString *)keyIdentifier;
-(NSData *)manifestHash;
-(id)initWithKeyIdentifier:(id)arg1 manifestHash:(id)arg2 nonce:(id)arg3 ;
@end

