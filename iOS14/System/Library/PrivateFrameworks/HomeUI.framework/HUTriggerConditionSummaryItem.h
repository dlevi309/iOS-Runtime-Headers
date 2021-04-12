/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>

@class NSArray, HMHome;

@interface HUTriggerConditionSummaryItem : HFItem {

	NSArray* _conditions;
	HMHome* _home;

}

@property (nonatomic,readonly) NSArray * conditions;              //@synthesize conditions=_conditions - In the implementation block
@property (nonatomic,readonly) HMHome * home;                     //@synthesize home=_home - In the implementation block
-(NSArray *)conditions;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithConditions:(id)arg1 home:(id)arg2 ;
-(HMHome *)home;
@end

