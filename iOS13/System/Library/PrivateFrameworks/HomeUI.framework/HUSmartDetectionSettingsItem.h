/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>

@class NSSet;

@interface HUSmartDetectionSettingsItem : HFItem {

	unsigned long long _motionDetectionType;
	NSSet* _cameraProfiles;
	unsigned long long _settingsContext;

}

@property (nonatomic,readonly) unsigned long long motionDetectionType;              //@synthesize motionDetectionType=_motionDetectionType - In the implementation block
@property (nonatomic,copy,readonly) NSSet * cameraProfiles;                         //@synthesize cameraProfiles=_cameraProfiles - In the implementation block
@property (nonatomic,readonly) unsigned long long settingsContext;                  //@synthesize settingsContext=_settingsContext - In the implementation block
-(unsigned long long)settingsContext;
-(NSSet *)cameraProfiles;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(unsigned long long)motionDetectionType;
-(id)initWithDetectionType:(unsigned long long)arg1 cameraProfiles:(id)arg2 settingsContext:(unsigned long long)arg3 ;
@end

