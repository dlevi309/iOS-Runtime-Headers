/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemProvider.h>

@class NSSet, HMHome, NSMutableSet;

@interface HFConditionItemProvider : HFItemProvider {

	NSSet* _conditions;
	HMHome* _home;
	NSMutableSet* _conditionItems;

}

@property (nonatomic,readonly) NSMutableSet * conditionItems;              //@synthesize conditionItems=_conditionItems - In the implementation block
@property (nonatomic,retain) NSSet * conditions;                           //@synthesize conditions=_conditions - In the implementation block
@property (nonatomic,readonly) HMHome * home;                              //@synthesize home=_home - In the implementation block
-(id)init;
-(HMHome *)home;
-(id)items;
-(NSSet *)conditions;
-(void)setConditions:(NSSet *)arg1 ;
-(id)reloadItems;
-(id)initWithConditions:(id)arg1 home:(id)arg2 ;
-(NSMutableSet *)conditionItems;
@end

