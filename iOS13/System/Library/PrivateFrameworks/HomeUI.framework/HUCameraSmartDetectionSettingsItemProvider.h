/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemProvider.h>

@class NSMutableSet, NSSet;

@interface HUCameraSmartDetectionSettingsItemProvider : HFItemProvider {

	NSMutableSet* _items;
	NSSet* _cameraProfiles;
	unsigned long long _settingsContext;

}

@property (nonatomic,readonly) NSMutableSet * items;                            //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSSet * cameraProfiles;                     //@synthesize cameraProfiles=_cameraProfiles - In the implementation block
@property (nonatomic,readonly) unsigned long long settingsContext;              //@synthesize settingsContext=_settingsContext - In the implementation block
-(id)init;
-(NSMutableSet *)items;
-(id)reloadItems;
-(unsigned long long)settingsContext;
-(NSSet *)cameraProfiles;
-(id)initWithCameraProfiles:(id)arg1 settingsContext:(unsigned long long)arg2 ;
@end

