/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMFaceCrop.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSUUID;

@interface HMPersonFaceCrop : HMFaceCrop <NSMutableCopying> {

	NSUUID* _personUUID;
	NSUUID* _unassociatedFaceCropUUID;

}

@property (copy) NSUUID * unassociatedFaceCropUUID;              //@synthesize unassociatedFaceCropUUID=_unassociatedFaceCropUUID - In the implementation block
@property (copy,readonly) NSUUID * personUUID;                   //@synthesize personUUID=_personUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)unassociatedFaceCropUUID;
-(id)initWithUUID:(id)arg1 dataRepresentation:(id)arg2 dateCreated:(id)arg3 faceBoundingBox:(CGRect)arg4 personUUID:(id)arg5 ;
-(void)setUnassociatedFaceCropUUID:(NSUUID *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSUUID *)personUUID;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

