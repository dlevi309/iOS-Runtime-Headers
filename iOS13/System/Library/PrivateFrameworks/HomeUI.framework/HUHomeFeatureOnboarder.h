/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUFeatureOnboarder.h>

@class HMHome;

@interface HUHomeFeatureOnboarder : HUFeatureOnboarder {

	HMHome* _home;

}

@property (nonatomic,retain) HMHome * home;              //@synthesize home=_home - In the implementation block
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(id)_subclass_buildAllFlowGroupsFromFeatureGroups:(id)arg1 usageOptions:(id)arg2 ;
-(id)getPostProcessingFlowsForResults:(id)arg1 ;
-(id)initWithFeatures:(id)arg1 home:(id)arg2 usageOptions:(id)arg3 ;
-(id)initWithGroupedFeatures:(id)arg1 home:(id)arg2 usageOptions:(id)arg3 ;
@end

