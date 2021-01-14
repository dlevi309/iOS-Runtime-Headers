/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>

@class HMAccessoryNetworkProtectionGroup;

@interface HUNetworkProtectionModeOptionItem : HFItem {

	long long _targetProtectionModeOption;
	HMAccessoryNetworkProtectionGroup* _group;

}

@property (nonatomic,readonly) long long targetProtectionModeOption;                        //@synthesize targetProtectionModeOption=_targetProtectionModeOption - In the implementation block
@property (nonatomic,copy,readonly) HMAccessoryNetworkProtectionGroup * group;              //@synthesize group=_group - In the implementation block
+(long long)_priorityForTargetProtectionMode:(long long)arg1 ;
-(HMAccessoryNetworkProtectionGroup *)group;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(long long)targetProtectionModeOption;
-(id)initWithGroup:(id)arg1 targetProtectionModeOption:(long long)arg2 ;
@end

