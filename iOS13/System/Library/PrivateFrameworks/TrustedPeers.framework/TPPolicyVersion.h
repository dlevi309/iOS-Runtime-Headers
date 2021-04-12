/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TPPolicyVersion : NSObject <NSSecureCoding> {

	unsigned long long _versionNumber;
	NSString* _policyHash;

}

@property (readonly) unsigned long long versionNumber;              //@synthesize versionNumber=_versionNumber - In the implementation block
@property (retain,readonly) NSString * policyHash;                  //@synthesize policyHash=_policyHash - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)versionNumber;
-(id)initWithVersion:(unsigned long long)arg1 hash:(id)arg2 ;
-(NSString *)policyHash;
@end

