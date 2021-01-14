/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKRemoteFeatureAvailabilityBaseRule.h>
#import <libobjc.A.dylib/HKRemoteFeatureAvailabilityRule.h>

@class NSString, NSMutableArray;

@interface HKRemoteFeatureAvailabilityCompoundRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule> {

	NSString* _grouping;
	NSMutableArray* _rules;

}

@property (nonatomic,retain) NSString * grouping;                   //@synthesize grouping=_grouping - In the implementation block
@property (nonatomic,retain) NSMutableArray * rules;                //@synthesize rules=_rules - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ruleIdentifier;
-(NSString *)grouping;
-(BOOL)evaluate;
-(void)setRules:(NSMutableArray *)arg1 ;
-(void)setGrouping:(NSString *)arg1 ;
-(void)processUserInfo:(id)arg1 ;
-(NSMutableArray *)rules;
@end

