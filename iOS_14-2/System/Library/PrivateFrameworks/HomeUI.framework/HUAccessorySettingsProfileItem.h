/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HMSetting *)setting;
-(NSUUID *)uniqueIdentifier;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(MCProfile *)profile;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithProfile:(id)arg1 setting:(id)arg2 ;
@end

