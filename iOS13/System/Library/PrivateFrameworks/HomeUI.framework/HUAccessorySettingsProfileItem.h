/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItem.h>

@class MCProfile, HMSetting, NSUUID;

@interface HUAccessorySettingsProfileItem : HFItem {

	MCProfile* _profile;
	HMSetting* _setting;

}

@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
@property (nonatomic,readonly) MCProfile * profile;                    //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HMSetting * setting;                    //@synthesize setting=_setting - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(MCProfile *)profile;
-(HMSetting *)setting;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithProfile:(id)arg1 setting:(id)arg2 ;
@end

