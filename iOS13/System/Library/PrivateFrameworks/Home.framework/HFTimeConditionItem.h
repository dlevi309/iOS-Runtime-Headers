/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFConditionItem.h>

@class HFTimeCondition, NSString;

@interface HFTimeConditionItem : HFItem <HFConditionItem> {

	HFTimeCondition* _condition;
	unsigned long long _type;

}

@property (nonatomic,retain) HFTimeCondition * condition;              //@synthesize condition=_condition - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)conditionTypeForCondition:(id)arg1 ;
+(id)_formattedStringForTimeCondition:(id)arg1 style:(unsigned long long)arg2 ;
+(id)defaultConditionForType:(unsigned long long)arg1 ;
+(id)_nameForConditionType:(unsigned long long)arg1 formattingStyle:(long long)arg2 ;
+(id)_formattedStringForTimeRangeCondition:(id)arg1 style:(unsigned long long)arg2 ;
+(id)_formattedStringForDateComponentsCondition:(id)arg1 style:(unsigned long long)arg2 ;
+(id)_formattedStringForSunriseSunsetCondition:(id)arg1 style:(unsigned long long)arg2 ;
+(id)_formattedStringForOffset:(id)arg1 ;
-(id)init;
-(unsigned long long)type;
-(id)initWithCondition:(id)arg1 ;
-(HFTimeCondition *)condition;
-(void)setCondition:(HFTimeCondition *)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithConditionType:(unsigned long long)arg1 condition:(id)arg2 ;
-(id)initWithConditionType:(unsigned long long)arg1 ;
@end

