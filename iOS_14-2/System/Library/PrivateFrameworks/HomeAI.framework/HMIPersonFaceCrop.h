/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIFaceCrop.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface HMIPersonFaceCrop : HMIFaceCrop <NSCopying, NSSecureCoding> {

	NSUUID* _personUUID;

}

@property (copy,readonly) NSUUID * personUUID;              //@synthesize personUUID=_personUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithUUID:(id)arg1 dataRepresentation:(id)arg2 dateCreated:(id)arg3 faceBoundingBox:(CGRect)arg4 personUUID:(id)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)attributeDescriptions;
-(NSUUID *)personUUID;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

