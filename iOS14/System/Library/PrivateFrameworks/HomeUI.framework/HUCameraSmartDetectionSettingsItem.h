/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>

@class HFCameraSignificantEventConfiguration, NSSet;

@interface HUCameraSmartDetectionSettingsItem : HFItem {

	HFCameraSignificantEventConfiguration* _significantEventConfiguration;
	NSSet* _cameraProfiles;
	unsigned long long _settingsContext;

}

@property (nonatomic,copy,readonly) HFCameraSignificantEventConfiguration * significantEventConfiguration;              //@synthesize significantEventConfiguration=_significantEventConfiguration - In the implementation block
@property (nonatomic,copy,readonly) NSSet * cameraProfiles;                                                             //@synthesize cameraProfiles=_cameraProfiles - In the implementation block
@property (nonatomic,readonly) unsigned long long settingsContext;                                                      //@synthesize settingsContext=_settingsContext - In the implementation block
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(NSSet *)cameraProfiles;
-(unsigned long long)settingsContext;
-(HFCameraSignificantEventConfiguration *)significantEventConfiguration;
-(id)initWithSignificantEventConfiguration:(id)arg1 cameraProfiles:(id)arg2 settingsContext:(unsigned long long)arg3 ;
-(BOOL)_isHiddenForCurrentsignificantEventConfiguration:(id)arg1 ;
@end

