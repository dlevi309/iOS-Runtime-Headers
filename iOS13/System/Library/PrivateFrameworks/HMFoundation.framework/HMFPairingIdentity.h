/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HMFPairingKey;

@interface HMFPairingIdentity : HMFObject <NSSecureCoding, NSCopying> {

	NSString* _identifier;
	HMFPairingKey* _publicKey;
	HMFPairingKey* _privateKey;

}

@property (nonatomic,copy,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) HMFPairingKey * publicKey;                     //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,copy,readonly) HMFPairingKey * privateKey;                    //@synthesize privateKey=_privateKey - In the implementation block
@property (copy,readonly) HMFPairingIdentity * publicPairingIdentity; 
+(BOOL)supportsSecureCoding;
+(id)pairingIdentity;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(HMFPairingKey *)publicKey;
-(id)shortDescription;
-(HMFPairingKey *)privateKey;
-(id)attributeDescriptions;
-(id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3 ;
-(HMFPairingIdentity *)publicPairingIdentity;
@end

