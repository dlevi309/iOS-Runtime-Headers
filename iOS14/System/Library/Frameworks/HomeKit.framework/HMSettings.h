/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@protocol HMSettingsOwner;
@class HMSettingGroup;

@interface HMSettings : NSObject {

	id<HMSettingsOwner> _owner;

}

@property (__weak,readonly) id<HMSettingsOwner> owner;                     //@synthesize owner=_owner - In the implementation block
@property (readonly) HMSettingGroup * rootGroup; 
@property (getter=isControllable,readonly) BOOL controllable; 
@property (__weak) id<HMSettingsDelegate> delegate; 
-(id<HMSettingsOwner>)owner;
-(id<HMSettingsDelegate>)delegate;
-(void)setDelegate:(id<HMSettingsDelegate>)arg1 ;
-(HMSettingGroup *)rootGroup;
-(id)initWithSettingsOwner:(id)arg1 ;
-(BOOL)isControllable;
@end

