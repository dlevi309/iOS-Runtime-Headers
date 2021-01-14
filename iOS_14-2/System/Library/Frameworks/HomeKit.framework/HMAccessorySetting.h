/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMSetting.h>
#import <libobjc.A.dylib/_HMAccesorySettingDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class _HMAccessorySetting, HMAccessorySettingGroup, NSString, NSUUID;

@interface HMAccessorySetting : HMSetting <_HMAccesorySettingDelegate, HMFLogging> {

	_HMAccessorySetting* _internal;
	HMAccessorySettingGroup* _group;

}

@property (readonly) _HMAccessorySetting * internal;                 //@synthesize internal=_internal - In the implementation block
@property (__weak) HMAccessorySettingGroup * group;                  //@synthesize group=_group - In the implementation block
@property (copy,readonly) NSString * keyPath; 
@property (readonly) Class valueClass; 
@property (copy,readonly) NSUUID * identifier; 
@property (getter=isReflected,readonly) BOOL reflected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)settingForInternal:(id)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setGroup:(HMAccessorySettingGroup *)arg1 ;
-(HMAccessorySettingGroup *)group;
-(Class)valueClass;
-(id)initWithInternal:(id)arg1 ;
-(id)init;
-(_HMAccessorySetting *)internal;
-(id)logIdentifier;
-(NSString *)description;
-(BOOL)isWritable;
-(BOOL)isReflected;
-(void)updateReflected:(BOOL)arg1 ;
-(unsigned long long)hash;
-(NSString *)keyPath;
-(NSUUID *)identifier;
-(void)updateValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_settingWillUpdateValue:(id)arg1 ;
-(void)_settingDidUpdateValue:(id)arg1 ;
-(void)settingWillUpdateReflected;
-(void)settingDidUpdateReflected;
-(id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 ;
-(id)value;
-(BOOL)isEqual:(id)arg1 ;
@end

