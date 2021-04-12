/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMAccessoryNetworkProtectionGroup *)group;
-(id)items;
-(id)initWithGroup:(id)arg1 ;
-(id)reloadItems;
-(NSMutableSet *)networkProtectionModeOptionItems;
-(void)setNetworkProtectionModeOptionItems:(NSMutableSet *)arg1 ;
@end

