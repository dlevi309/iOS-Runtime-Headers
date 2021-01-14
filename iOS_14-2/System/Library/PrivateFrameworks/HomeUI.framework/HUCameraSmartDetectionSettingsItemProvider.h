/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemProvider.h>

@class NSSet, NSMutableSet;

@interface HUCameraSmartDetectionSettingsItemProvider : HFItemProvider {

	NSSet* _cameraProfiles;
	unsigned long long _settingsContext;
	NSMutableSet* _smartDetectionSettingsItems;

}

@property (nonatomic,readonly) NSMutableSet * smartDetectionSettingsItems;              //@synthesize smartDetectionSettingsItems=_smartDetectionSettingsItems - In the implementation block
@property (nonatomic,copy,readonly) NSSet * cameraProfiles;                             //@synthesize cameraProfiles=_cameraProfiles - In the implementation block
@property (nonatomic,readonly) unsigned long long settingsContext;                      //@synthesize settingsContext=_settingsContext - In the implementation block
-(id)init;
-(id)items;
-(id)reloadItems;
-(NSSet *)cameraProfiles;
-(id)initWithCameraProfiles:(id)arg1 settingsContext:(unsigned long long)arg2 ;
-(unsigned long long)settingsContext;
-(NSMutableSet *)smartDetectionSettingsItems;
@end

