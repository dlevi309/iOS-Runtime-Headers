/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSMutableDictionary;

@interface HKFeatureAvailabilityRuleSet : NSObject {

	NSMutableDictionary* _conditions;

}

@property (nonatomic,retain) NSMutableDictionary * conditions;              //@synthesize conditions=_conditions - In the implementation block
-(NSMutableDictionary *)conditions;
-(void)setConditions:(NSMutableDictionary *)arg1 ;
-(id)initWithRawValue:(id)arg1 dataSource:(id)arg2 ;
-(id)evaluateAll;
-(void)_parseRulesFromRawValue:(id)arg1 dataSource:(id)arg2 ;
@end

