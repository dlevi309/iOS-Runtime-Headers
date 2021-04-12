/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

