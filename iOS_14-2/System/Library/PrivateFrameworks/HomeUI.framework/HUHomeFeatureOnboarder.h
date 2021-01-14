/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUFeatureOnboarder.h>

@class HMHome;

@interface HUHomeFeatureOnboarder : HUFeatureOnboarder {

	HMHome* _home;

}

@property (nonatomic,retain) HMHome * home;              //@synthesize home=_home - In the implementation block
-(void)setHome:(HMHome *)arg1 ;
-(HMHome *)home;
-(id)_subclass_buildAllFlowGroupsFromFeatureGroups:(id)arg1 usageOptions:(id)arg2 ;
-(id)getPostProcessingFlowsForResults:(id)arg1 ;
-(id)initWithFeatures:(id)arg1 home:(id)arg2 usageOptions:(id)arg3 ;
-(id)initWithGroupedFeatures:(id)arg1 home:(id)arg2 usageOptions:(id)arg3 ;
@end

