/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMSetting.h>
#import <libobjc.A.dylib/_HMAccesorySettingDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class _HMAccessorySetting, HMAccessorySettingGroup, NSString;

@interface HMAccessorySetting : HMSetting <_HMAccesorySettingDelegate, HMFLogging> {

	_HMAccessorySetting* _internal;
	HMAccessorySettingGroup* _group;

}

@property (readonly) _HMAccessorySetting * internal;                 //@synthesize internal=_internal - In the implementation block
@property (__weak) HMAccessorySettingGroup * group;                  //@synthesize group=_group - In the implementation block
@property (copy,readonly) NSString * keyPath; 
@property (readonly) Class valueClass; 
@property (getter=isReflected,readonly) BOOL reflected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)logCategory;
+(id)settingForInternal:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setGroup:(HMAccessorySettingGroup *)arg1 ;
-(id)value;
-(NSString *)keyPath;
-(HMAccessorySettingGroup *)group;
-(_HMAccessorySetting *)internal;
-(Class)valueClass;
-(id)logIdentifier;
-(BOOL)isWritable;
-(void)updateValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithInternal:(id)arg1 ;
-(BOOL)isReflected;
-(void)_settingWillUpdateReflected:(id)arg1 ;
-(void)_settingDidUpdateReflected:(id)arg1 ;
-(void)_settingWillUpdateValue:(id)arg1 ;
-(void)_settingDidUpdateValue:(id)arg1 ;
-(id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 ;
@end

