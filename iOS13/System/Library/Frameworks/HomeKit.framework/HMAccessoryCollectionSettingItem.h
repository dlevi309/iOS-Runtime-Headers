/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id<NSObject><NSCopying><NSSecureCoding>)value;
-(id)shortDescription;
-(id)initWithValue:(id)arg1 ;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(HMAccessoryCollectionSetting *)setting;
-(void)setSetting:(HMAccessoryCollectionSetting *)arg1 ;
-(NSData *)serializedValue;
@end

