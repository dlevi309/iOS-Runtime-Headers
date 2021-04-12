/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKFeatureAvailabilityBaseRule.h>
#import <libobjc.A.dylib/HKFeatureAvailabilityRule.h>

@class NSString;

@interface HKFeatureAvailabilityWatchRegionEqualsRule : HKFeatureAvailabilityBaseRule <HKFeatureAvailabilityRule> {

	NSString* _regionCode;

}

@property (nonatomic,retain) NSString * regionCode;                 //@synthesize regionCode=_regionCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ruleIdentifier;
-(void)setRegionCode:(NSString *)arg1 ;
-(NSString *)regionCode;
-(BOOL)evaluate;
-(void)processUserInfo:(id)arg1 ;
@end

