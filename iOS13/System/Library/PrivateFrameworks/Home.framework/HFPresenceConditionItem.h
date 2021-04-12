/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFConditionItem.h>

@class HFCondition, HFPresenceCondition, HMHome, NSString;

@interface HFPresenceConditionItem : HFItem <HFConditionItem> {

	HFPresenceCondition* _condition;
	HMHome* _home;

}

@property (nonatomic,retain) HFPresenceCondition * condition;              //@synthesize condition=_condition - In the implementation block
@property (nonatomic,readonly) HMHome * home;                              //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(HFPresenceCondition *)condition;
-(HMHome *)home;
-(void)setCondition:(HFPresenceCondition *)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithCondition:(id)arg1 home:(id)arg2 ;
@end

