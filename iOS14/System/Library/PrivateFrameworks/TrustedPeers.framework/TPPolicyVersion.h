/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TPPolicyVersion : NSObject <NSSecureCoding> {

	unsigned long long _versionNumber;
	NSString* _policyHash;

}

@property (readonly) unsigned long long versionNumber;              //@synthesize versionNumber=_versionNumber - In the implementation block
@property (retain,readonly) NSString * policyHash;                  //@synthesize policyHash=_policyHash - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)policyHash;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)versionNumber;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithVersion:(unsigned long long)arg1 hash:(id)arg2 ;
@end

