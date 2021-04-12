/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFConditionItem.h>

@class HFCondition, NSString;

@interface HFUnknownConditionItem : HFItem <HFConditionItem> {

	HFCondition* _condition;

}

@property (nonatomic,readonly) HFCondition * condition;              //@synthesize condition=_condition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithCondition:(id)arg1 ;
-(HFCondition *)condition;
-(id)_subclass_updateWithOptions:(id)arg1 ;
@end

