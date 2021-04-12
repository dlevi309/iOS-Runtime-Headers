/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>
#import <libobjc.A.dylib/HFHomeKitSettingsVendor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMHome, NSSet, HFHomeKitSettingsAdapterManager, HFHomeKitSettingsValueManager, HMSettings, HMUser, NSUUID, HFUserNameFormatter, NSString;

@interface HFUserItem : HFItem <HFHomeKitItemProtocol, HFHomeKitSettingsVendor, NSCopying> {

	BOOL _isItemGroup;
	BOOL _isContainedWithinItemGroup;
	HMHome* _home;
	HMUser* _user;
	unsigned long long _numberOfItemsContainedWithinGroup;
	NSUUID* _uniqueIdentifier;
	HFUserNameFormatter* _userNameFormatter;
	HMHome* _hf_home;

}

@property (nonatomic,readonly) HFUserNameFormatter * userNameFormatter;                                  //@synthesize userNameFormatter=_userNameFormatter - In the implementation block
@property (nonatomic,retain) HMHome * hf_home;                                                           //@synthesize hf_home=_hf_home - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                            //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HMUser * user;                                                            //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) unsigned long long nameStyle; 
@property (nonatomic,readonly) BOOL isItemGroup;                                                         //@synthesize isItemGroup=_isItemGroup - In the implementation block
@property (nonatomic,readonly) BOOL isContainedWithinItemGroup;                                          //@synthesize isContainedWithinItemGroup=_isContainedWithinItemGroup - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfItemsContainedWithinGroup;                     //@synthesize numberOfItemsContainedWithinGroup=_numberOfItemsContainedWithinGroup - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                           //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (nonatomic,readonly) NSSet * hf_dependentHomeKitObjectsForDownstreamItems; 
@property (nonatomic,readonly) HFHomeKitSettingsAdapterManager * hf_settingsAdapterManager; 
@property (nonatomic,readonly) HFHomeKitSettingsValueManager * hf_settingsValueManager; 
@property (nonatomic,readonly) BOOL hasValidSettings; 
@property (readonly) HMSettings * settings; 
+(void)set_fakeHMSettings:(id)arg1 ;
+(id)_fakeHMSettings;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMUser *)user;
-(NSUUID *)uniqueIdentifier;
-(HMHome *)home;
-(HMSettings *)settings;
-(id)_privateSettings;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(BOOL)isItemGroup;
-(BOOL)isContainedWithinItemGroup;
-(unsigned long long)numberOfItemsContainedWithinGroup;
-(HMHome *)hf_home;
-(NSSet *)hf_dependentHomeKitObjectsForDownstreamItems;
-(HFHomeKitSettingsAdapterManager *)hf_settingsAdapterManager;
-(HFHomeKitSettingsValueManager *)hf_settingsValueManager;
-(BOOL)hasValidSettings;
-(unsigned long long)nameStyle;
-(id)initWithHome:(id)arg1 user:(id)arg2 nameStyle:(unsigned long long)arg3 ;
-(HFUserNameFormatter *)userNameFormatter;
-(BOOL)_getFakeBoolSettingsValueForKeyPath:(id)arg1 defaultValue:(BOOL)arg2 ;
-(id)_privateSettingsValueManager;
-(BOOL)_hasValidPrivateSettings;
-(void)_setFakeBoolSettingsValueForKeyPath:(id)arg1 newValue:(BOOL)arg2 ;
-(BOOL)_getBoolSettingsValueForKeyPath:(id)arg1 defaultValue:(BOOL)arg2 settingsType:(unsigned long long)arg3 ;
-(id)_setBoolSettingsValueForKeyPath:(id)arg1 newValue:(BOOL)arg2 settingsType:(unsigned long long)arg3 ;
-(BOOL)hasDismissedVoiceProfileOnboarding;
-(id)setDismissIdentifyVoiceOnboarding:(BOOL)arg1 ;
-(BOOL)hasDismissedIdentifyVoiceReminderBanner;
-(id)setDismissIdentifyVoiceReminderBanner:(BOOL)arg1 ;
-(BOOL)hasDismissedTVViewingProfilesOnboarding;
-(id)setDismissTVViewingProfilesOnboarding:(BOOL)arg1 ;
-(BOOL)hasDismissedTVViewingProfilesReminderBanner;
-(id)setDismissTVViewingProfilesReminderBanner:(BOOL)arg1 ;
-(BOOL)hasDismissedCameraRecordingOnboarding;
-(id)setDismissCameraRecordingOnboarding:(BOOL)arg1 ;
-(BOOL)hasDismissedCameraRecordingReminderBanner;
-(id)setDismissCameraRecordingReminderBanner:(BOOL)arg1 ;
-(id)setEnableIdentifyVoice:(BOOL)arg1 ;
-(BOOL)isIdentifyVoiceEnabled;
-(id)setPlaybackInfluencesForYou:(BOOL)arg1 ;
-(BOOL)isPlaybackInfluencesForYouEnabled;
-(id)setDismissUserSplitMediaAccountWarning:(BOOL)arg1 ;
-(BOOL)hasDismissedUserSplitMediaAccountWarning;
-(void)setHf_home:(HMHome *)arg1 ;
@end

