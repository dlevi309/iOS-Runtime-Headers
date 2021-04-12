/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMSettings.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol HMAccessorySettingsContainer, HMControllable, HMAccessorySettingsDelegate;
@class HMFUnfairLock, HMAccessorySettingGroup, _HMContext, HMAccessory, NSString, NSUUID;

@interface HMAccessorySettings : HMSettings <HMFLogging, HMObjectMerge> {

	HMFUnfairLock* _lock;
	id<HMAccessorySettingsContainer> _settingsContainer;
	id<HMControllable> _settingsControl;
	id<HMAccessorySettingsDelegate> _delegate;
	HMAccessorySettingGroup* _rootGroup;
	_HMContext* _context;

}

@property (nonatomic,readonly) _HMContext * context;                                //@synthesize context=_context - In the implementation block
@property (__weak) id<HMControllable> settingsControl;                              //@synthesize settingsControl=_settingsControl - In the implementation block
@property (__weak) id<HMAccessorySettingsContainer> settingsContainer;              //@synthesize settingsContainer=_settingsContainer - In the implementation block
@property (getter=isControllable,readonly) BOOL controllable; 
@property (__weak) id<HMAccessorySettingsDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (__weak,readonly) HMAccessory * accessory; 
@property (readonly) HMAccessorySettingGroup * rootGroup;                           //@synthesize rootGroup=_rootGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
+(id)logCategory;
+(id)localizationKeyForKeyPath:(id)arg1 ;
-(id<HMAccessorySettingsDelegate>)delegate;
-(void)setDelegate:(id<HMAccessorySettingsDelegate>)arg1 ;
-(_HMContext *)context;
-(NSUUID *)uniqueIdentifier;
-(HMAccessory *)accessory;
-(HMAccessorySettingGroup *)rootGroup;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_updateSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)__notifyDelegateSettingsDidUpdate;
-(BOOL)isControllable;
-(id<HMControllable>)settingsControl;
-(void)setSettingsControl:(id<HMControllable>)arg1 ;
-(id)initWithSettingsContainer:(id)arg1 settingsControl:(id)arg2 rootGroup:(id)arg3 ;
-(void)setSettingsContainer:(id<HMAccessorySettingsContainer>)arg1 ;
-(id<HMAccessorySettingsContainer>)settingsContainer;
-(void)__notifyDelegateSettingsWillUpdateWithCompletionHanlder:(/*^block*/id)arg1 ;
-(void)_configureWithContext:(id)arg1 ;
@end

