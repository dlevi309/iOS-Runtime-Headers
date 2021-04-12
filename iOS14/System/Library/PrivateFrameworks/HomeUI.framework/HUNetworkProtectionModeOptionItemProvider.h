/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItemProvider.h>

@class HMAccessoryNetworkProtectionGroup, NSMutableSet;

@interface HUNetworkProtectionModeOptionItemProvider : HFItemProvider {

	HMAccessoryNetworkProtectionGroup* _group;
	NSMutableSet* _networkProtectionModeOptionItems;

}

@property (nonatomic,retain) NSMutableSet * networkProtectionModeOptionItems;               //@synthesize networkProtectionModeOptionItems=_networkProtectionModeOptionItems - In the implementation block
@property (nonatomic,copy,readonly) HMAccessoryNetworkProtectionGroup * group;              //@synthesize group=_group - In the implementation block
-(HMAccessoryNetworkProtectionGroup *)group;
-(id)init;
-(id)items;
-(id)reloadItems;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithGroup:(id)arg1 ;
-(NSMutableSet *)networkProtectionModeOptionItems;
-(void)setNetworkProtectionModeOptionItems:(NSMutableSet *)arg1 ;
@end

