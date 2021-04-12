/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFAccessorySettingAdapter.h>
#import <libobjc.A.dylib/HFAccessorySettingDeviceOptionsAdapterUtilityDelegate.h>
#import <libobjc.A.dylib/HFAccessorySettingAdapterButtonHandling.h>
#import <libobjc.A.dylib/HFAccessorySettingAdapterDisplayArbitrating.h>

@class NAFuture, HFAccessorySettingDeviceOptionsAdapterUtility, NSString;

@interface HFAccessorySettingDeviceOptionsAdapter : HFAccessorySettingAdapter <HFAccessorySettingDeviceOptionsAdapterUtilityDelegate, HFAccessorySettingAdapterButtonHandling, HFAccessorySettingAdapterDisplayArbitrating> {

	BOOL _isAccessoryReachableOverRapport;
	NAFuture* _inProgressSysdiagnoseCollectionFuture;
	HFAccessorySettingDeviceOptionsAdapterUtility* _adapterUtility;

}

@property (assign,nonatomic) BOOL isAccessoryReachableOverRapport;                                        //@synthesize isAccessoryReachableOverRapport=_isAccessoryReachableOverRapport - In the implementation block
@property (nonatomic,retain) NAFuture * inProgressSysdiagnoseCollectionFuture;                            //@synthesize inProgressSysdiagnoseCollectionFuture=_inProgressSysdiagnoseCollectionFuture - In the implementation block
@property (nonatomic,retain) HFAccessorySettingDeviceOptionsAdapterUtility * adapterUtility;              //@synthesize adapterUtility=_adapterUtility - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_home;
-(BOOL)shouldShowSettingsEntity:(id)arg1 ;
-(id)initWithHomeKitSettingsVendor:(id)arg1 mode:(unsigned long long)arg2 ;
-(id)handleButtonPressForEntity:(id)arg1 ;
-(BOOL)supportButtonPressForEntity:(id)arg1 ;
-(id)inProgressButtonPressFutureForEntity:(id)arg1 ;
-(id)identifyAccessory;
-(void)accessoryReachableOverRapport:(BOOL)arg1 ;
-(id)restartAccessory;
-(id)restartAccessories;
-(NAFuture *)inProgressSysdiagnoseCollectionFuture;
-(void)setInProgressSysdiagnoseCollectionFuture:(NAFuture *)arg1 ;
-(BOOL)isAccessoryReachableOverRapport;
-(void)setIsAccessoryReachableOverRapport:(BOOL)arg1 ;
-(HFAccessorySettingDeviceOptionsAdapterUtility *)adapterUtility;
-(void)setAdapterUtility:(HFAccessorySettingDeviceOptionsAdapterUtility *)arg1 ;
@end

