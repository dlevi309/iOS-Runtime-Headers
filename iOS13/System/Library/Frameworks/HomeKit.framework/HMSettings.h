/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<HMSettingsDelegate>)delegate;
-(void)setDelegate:(id<HMSettingsDelegate>)arg1 ;
-(id<HMSettingsOwner>)owner;
-(HMSettingGroup *)rootGroup;
-(id)initWithSettingsOwner:(id)arg1 ;
-(BOOL)isControllable;
@end

