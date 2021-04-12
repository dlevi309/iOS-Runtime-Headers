/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFConditionItem.h>

@class HFCharacteristicCondition, NSString;

@interface HFCharacteristicConditionItem : HFItem <HFConditionItem> {

	HFCharacteristicCondition* _condition;

}

@property (nonatomic,readonly) HFCharacteristicCondition * condition;              //@synthesize condition=_condition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_nameForCharacteristicCondition:(id)arg1 ;
-(id)init;
-(id)initWithCondition:(id)arg1 ;
-(HFCharacteristicCondition *)condition;
-(id)_subclass_updateWithOptions:(id)arg1 ;
@end

