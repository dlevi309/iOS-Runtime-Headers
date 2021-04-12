/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol HMSettingManager;
@class NSString, NSUUID, HMSettingValue;

@interface HMSetting : NSObject <NSSecureCoding> {

	id _value;
	NSString* _keyPath;
	NSUUID* _identifier;
	Class _valueClass;
	long long _type;
	id<HMSettingManager> _settingManager;
	NSString* _name;
	unsigned long long _properties;

}

@property (assign) long long type;                                   //@synthesize type=_type - In the implementation block
@property (__weak) id<HMSettingManager> settingManager;              //@synthesize settingManager=_settingManager - In the implementation block
@property (copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (copy) id value;                                           //@synthesize value=_value - In the implementation block
@property (copy) NSString * keyPath;                                 //@synthesize keyPath=_keyPath - In the implementation block
@property (retain) Class valueClass;                                 //@synthesize valueClass=_valueClass - In the implementation block
@property (assign) unsigned long long properties;                    //@synthesize properties=_properties - In the implementation block
@property (readonly) HMSettingValue * internalValue; 
@property (getter=isWritable,readonly) BOOL writable; 
@property (copy,readonly) NSString * localizedTitle; 
@property (copy,readonly) NSUUID * identifier;                       //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)localizedTitle;
-(void)merge:(id)arg1 ;
-(Class)valueClass;
-(unsigned long long)properties;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSString *)name;
-(void)setValue:(id)arg1 ;
-(id)description;
-(BOOL)isWritable;
-(void)setKeyPath:(NSString *)arg1 ;
-(long long)type;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3 value:(id)arg4 properties:(unsigned long long)arg5 ;
-(id<HMSettingManager>)settingManager;
-(id)_initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3 value:(id)arg4 properties:(unsigned long long)arg5 ;
-(id)initWithInternal;
-(HMSettingValue *)internalValue;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)keyPath;
-(void)setValueClass:(Class)arg1 ;
-(void)setProperties:(unsigned long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)identifier;
-(void)updateValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setSettingManager:(id<HMSettingManager>)arg1 ;
-(id)valueForUpdate:(id)arg1 ;
-(id)value;
-(BOOL)isEqual:(id)arg1 ;
@end

