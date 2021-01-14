/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObjectNSCopyingNSSecureCoding;
@class HMFUnfairLock, NSData, NSUUID, HMAccessoryCollectionSetting;

@interface HMAccessoryCollectionSettingItem : NSObject <NSCopying, NSSecureCoding> {

	HMFUnfairLock* _lock;
	id<NSObject><NSCopying><NSSecureCoding> _value;
	NSData* _serializedValue;
	NSUUID* _identifier;
	HMAccessoryCollectionSetting* _setting;

}

@property (__weak) HMAccessoryCollectionSetting * setting;                            //@synthesize setting=_setting - In the implementation block
@property (readonly) NSData * serializedValue;                                        //@synthesize serializedValue=_serializedValue - In the implementation block
@property (copy,readonly) NSUUID * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) id<NSObject><NSCopying><NSSecureCoding> value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(HMAccessoryCollectionSetting *)setting;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(id)initWithValue:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setSetting:(HMAccessoryCollectionSetting *)arg1 ;
-(id)initWithIdentifier:(id)arg1 value:(id)arg2 ;
-(NSData *)serializedValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)value;
-(BOOL)isEqual:(id)arg1 ;
@end

