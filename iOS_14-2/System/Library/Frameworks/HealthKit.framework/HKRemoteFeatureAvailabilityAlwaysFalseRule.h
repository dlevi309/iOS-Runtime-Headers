/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/HKRemoteFeatureAvailabilityRule.h>

@class NSString;

@interface HKRemoteFeatureAvailabilityAlwaysFalseRule : NSObject <HKRemoteFeatureAvailabilityRule>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ruleIdentifier;
-(BOOL)evaluate;
-(id)initWithRawValue:(id)arg1 dataSource:(id)arg2 ;
@end

