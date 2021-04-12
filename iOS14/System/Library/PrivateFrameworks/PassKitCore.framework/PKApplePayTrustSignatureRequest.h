/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithKeyIdentifier:(id)arg1 manifestHash:(id)arg2 nonce:(id)arg3 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)keyIdentifier;
-(NSData *)nonce;
-(NSData *)manifestHash;
@end

