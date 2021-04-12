/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMSettingGroup.h>
#import <libobjc.A.dylib/_HMAccesorySettingGroupDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMFUnfairLock, NSMutableSet, _HMAccessorySettingGroup, NSString, NSArray;

@interface HMAccessorySettingGroup : HMSettingGroup <_HMAccesorySettingGroupDelegate, HMFLogging> {

	HMFUnfairLock* _lock;
	NSMutableSet* _settings;
	NSMutableSet* _groups;
	_HMAccessorySettingGroup* _internal;
	HMAccessorySettingGroup* _group;

}

@property (readonly) _HMAccessorySettingGroup * internal;              //@synthesize internal=_internal - In the implementation block
@property (__weak) HMAccessorySettingGroup * group;                    //@synthesize group=_group - In the implementation block
@property (copy,readonly) NSString * keyPath; 
@property (copy,readonly) NSString * localizedTitle; 
@property (copy,readonly) NSArray * settings; 
@property (copy,readonly) NSArray * groups; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setGroup:(HMAccessorySettingGroup *)arg1 ;
-(NSString *)keyPath;
-(id)initWithKeyPath:(id)arg1 ;
-(HMAccessorySettingGroup *)group;
-(_HMAccessorySettingGroup *)internal;
-(NSArray *)settings;
-(NSString *)localizedTitle;
-(NSArray *)groups;
-(id)logIdentifier;
-(id)initWithInternal:(id)arg1 ;
-(void)addGroup:(id)arg1 ;
-(void)addSetting:(id)arg1 ;
-(void)_settingGroup:(id)arg1 didAddSetting:(id)arg2 ;
-(void)_settingGroup:(id)arg1 didRemoveSetting:(id)arg2 ;
-(void)removeSetting:(id)arg1 ;
-(void)_settingGroup:(id)arg1 didAddSettingGroup:(id)arg2 ;
-(void)_settingGroup:(id)arg1 didRemoveSettingGroup:(id)arg2 ;
-(void)removeGroup:(id)arg1 ;
-(void)_notifyClientOfAddedSetting:(id)arg1 ;
-(void)_notifyClientOfRemovedSetting:(id)arg1 ;
-(void)_notifyClientOfAddedGroup:(id)arg1 ;
-(void)_notifyClientOfRemovedGroup:(id)arg1 ;
-(void)addSetting:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeSetting:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addGroup:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeGroup:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

