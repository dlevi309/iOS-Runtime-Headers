/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface HMAccessorySettingConstraint : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _identifier;
	long long _type;
	id _value;

}

@property (readonly) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) long long type;                   //@synthesize type=_type - In the implementation block
@property (copy,readonly) id value;                    //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(id)supportedValueClasses;
-(id)init;
-(id)initWithType:(long long)arg1 value:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(id)debugDescription;
-(id)description;
-(long long)type;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)initWithIdentifier:(id)arg1 type:(long long)arg2 value:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)value;
-(BOOL)isEqual:(id)arg1 ;
@end

