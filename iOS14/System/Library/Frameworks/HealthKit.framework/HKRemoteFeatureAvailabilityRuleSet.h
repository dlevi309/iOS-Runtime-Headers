/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSMutableDictionary;

@interface HKRemoteFeatureAvailabilityRuleSet : NSObject {

	NSMutableDictionary* _conditions;

}

@property (nonatomic,retain) NSMutableDictionary * conditions;              //@synthesize conditions=_conditions - In the implementation block
-(NSMutableDictionary *)conditions;
-(void)setConditions:(NSMutableDictionary *)arg1 ;
-(id)evaluateAll;
-(void)_parseRulesFromRawValue:(id)arg1 dataSource:(id)arg2 ;
-(id)initWithRawValue:(id)arg1 dataSource:(id)arg2 ;
@end

