/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEVPNIKEv1ProposalParameters : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	int _diffieHellmanGroup;
	int _lifetimeSeconds;
	long long _encryptionAlgorithm;
	long long _integrityAlgorithm;

}

@property (assign) long long encryptionAlgorithm;              //@synthesize encryptionAlgorithm=_encryptionAlgorithm - In the implementation block
@property (assign) long long integrityAlgorithm;               //@synthesize integrityAlgorithm=_integrityAlgorithm - In the implementation block
@property (assign) int diffieHellmanGroup;                     //@synthesize diffieHellmanGroup=_diffieHellmanGroup - In the implementation block
@property (assign) int lifetimeSeconds;                        //@synthesize lifetimeSeconds=_lifetimeSeconds - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(void)setEncryptionAlgorithm:(long long)arg1 ;
-(void)setIntegrityAlgorithm:(long long)arg1 ;
-(void)setDiffieHellmanGroup:(int)arg1 ;
-(void)setLifetimeSeconds:(int)arg1 ;
-(int)lifetimeSeconds;
-(long long)encryptionAlgorithm;
-(long long)integrityAlgorithm;
-(int)diffieHellmanGroup;
@end

