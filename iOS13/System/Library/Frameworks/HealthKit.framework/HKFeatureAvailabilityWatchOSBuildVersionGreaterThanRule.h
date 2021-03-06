/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKFeatureAvailabilityBaseRule.h>
#import <libobjc.A.dylib/HKFeatureAvailabilityRule.h>

@class NSString;

@interface HKFeatureAvailabilityWatchOSBuildVersionGreaterThanRule : HKFeatureAvailabilityBaseRule <HKFeatureAvailabilityRule> {

	NSString* _buildVersion;

}

@property (nonatomic,retain) NSString * buildVersion;               //@synthesize buildVersion=_buildVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ruleIdentifier;
-(NSString *)buildVersion;
-(void)setBuildVersion:(NSString *)arg1 ;
-(BOOL)evaluate;
-(void)processUserInfo:(id)arg1 ;
@end

