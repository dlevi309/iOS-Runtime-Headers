/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFMediaAccessoryLikeItem.h>
#import <libobjc.A.dylib/HFActionBuilderFactory.h>

@protocol HFHomeKitObject, HFHomeKitSettingsVendor, HFCharacteristicValueSource, HFMediaProfileContainer;
@class NSString, HMHome, NSSet;

@interface HFMediaAccessoryItem : HFItem <HFMediaAccessoryLikeItem, HFActionBuilderFactory> {

	BOOL _isItemInActionBuilder;
	id<HFHomeKitObject> _homeKitObject;
	id<HFHomeKitSettingsVendor> _homeKitSettingsVendor;
	id<HFCharacteristicValueSource> _valueSource;
	id<HFMediaProfileContainer> _mediaProfileContainer;
	long long _mediaAccessoryItemType;

}

@property (nonatomic,readonly) id<HFMediaValueSource> mediaValueSource; 
@property (assign,nonatomic) BOOL isItemInActionBuilder;                                          //@synthesize isItemInActionBuilder=_isItemInActionBuilder - In the implementation block
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;                 //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (nonatomic,readonly) long long mediaAccessoryItemType;                                  //@synthesize mediaAccessoryItemType=_mediaAccessoryItemType - In the implementation block
@property (nonatomic,readonly) BOOL allowsAppleMusicAccount; 
@property (nonatomic,readonly) BOOL supportsMediaAction; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject;                                 //@synthesize homeKitObject=_homeKitObject - In the implementation block
@property (nonatomic,readonly) HMHome * home; 
@property (nonatomic,readonly) NSSet * services; 
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;                       //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,readonly) BOOL isItemGroup; 
@property (nonatomic,readonly) BOOL isContainedWithinItemGroup; 
@property (nonatomic,readonly) unsigned long long numberOfItemsContainedWithinGroup; 
@property (nonatomic,readonly) NSSet * accessoriesSupportingSoftwareUpdate; 
@property (nonatomic,readonly) NSSet * availableSoftwareUpdates; 
@property (nonatomic,readonly) id<HFHomeKitSettingsVendor> homeKitSettingsVendor;                 //@synthesize homeKitSettingsVendor=_homeKitSettingsVendor - In the implementation block
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(id)settings;
-(NSSet *)services;
-(id)accessories;
-(id)room;
-(BOOL)isHomePod;
-(BOOL)isAppleTV;
-(BOOL)isSpeaker;
-(BOOL)supportsMultiUser;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1 ;
-(id<HFHomeKitObject>)homeKitObject;
-(id)namingComponentForHomeKitObject;
-(id)serviceLikeBuilderInHome:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(BOOL)isItemGroup;
-(BOOL)isContainedWithinItemGroup;
-(unsigned long long)numberOfItemsContainedWithinGroup;
-(id<HFHomeKitSettingsVendor>)homeKitSettingsVendor;
-(id)createControlItems;
-(BOOL)containsActions;
-(id)currentStateActionBuildersForHome:(id)arg1 ;
-(BOOL)actionsMayRequireDeviceUnlock;
-(NSSet *)accessoriesSupportingSoftwareUpdate;
-(NSSet *)availableSoftwareUpdates;
-(unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1 ;
-(id<HFMediaValueSource>)mediaValueSource;
-(long long)mediaAccessoryItemType;
-(id)initWithValueSource:(id)arg1 homeKitObject:(id)arg2 ;
-(id)initWithValueSource:(id)arg1 mediaProfileContainer:(id)arg2 ;
-(BOOL)isStandaloneHomePod;
-(BOOL)isHomePodAndIsInMediaSystem;
-(BOOL)isHomePodMediaSystem;
-(BOOL)isHAPCapableSpeaker;
-(BOOL)isAirPort;
-(BOOL)isAudioReceiver;
-(BOOL)supportsMediaQuickControls;
-(id)performStandardUpdateWithOptions:(id)arg1 ;
-(void)setIsItemInActionBuilder:(BOOL)arg1 ;
-(void)_decorateServiceLikeItemKeys:(id)arg1 ;
-(void)_decorateWithMediaSessionKeys:(id)arg1 ;
-(void)_decorateOutcomeWithAccessorySpecificKeys:(id)arg1 ;
-(void)_decorateWithMediaSystemSpecificKeys:(id)arg1 ;
-(BOOL)isItemInActionBuilder;
-(void)_decorateWithSoftwareUpdateStateKeys:(id)arg1 ;
-(void)_decorateSettingsSyncKeys:(id)arg1 ;
-(BOOL)isContainedWithinMediaSystem;
-(BOOL)allowsAppleMusicAccount;
-(id)iconDescriptor:(id)arg1 ;
-(unsigned long long)preferredActionOnTap:(id)arg1 ;
-(BOOL)_isInstallingSoftwareUpdate;
-(id)serviceNameComponents;
-(BOOL)isSiriDisabled;
-(BOOL)supportsMediaAction;
-(BOOL)supportsAlarmQuickControls;
@end

