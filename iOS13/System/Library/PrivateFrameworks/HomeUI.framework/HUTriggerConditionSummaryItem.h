/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(HMHome *)home;
-(NSArray *)conditions;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithConditions:(id)arg1 home:(id)arg2 ;
@end

