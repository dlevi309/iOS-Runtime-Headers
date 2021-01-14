/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface HMIPersonSourceUUIDPair : HMFObject <NSCopying, NSSecureCoding> {

	NSUUID* _sourceUUID;
	NSUUID* _personUUID;

}

@property (copy,readonly) NSUUID * sourceUUID;              //@synthesize sourceUUID=_sourceUUID - In the implementation block
@property (copy,readonly) NSUUID * personUUID;              //@synthesize personUUID=_personUUID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)personSourceUUIDPairFromPersonLink:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)attributeDescriptions;
-(NSUUID *)personUUID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)sourceUUID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPersonUUID:(id)arg1 sourceUUID:(id)arg2 ;
@end

