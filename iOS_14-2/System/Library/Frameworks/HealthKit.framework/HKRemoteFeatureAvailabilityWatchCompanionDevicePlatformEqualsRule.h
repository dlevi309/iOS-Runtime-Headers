/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKRemoteFeatureAvailabilityBaseRule.h>
#import <libobjc.A.dylib/HKRemoteFeatureAvailabilityRule.h>

@class NSString;

@interface HKRemoteFeatureAvailabilityWatchCompanionDevicePlatformEqualsRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule> {

	NSString* _devicePlatform;

}

@property (nonatomic,retain) NSString * devicePlatform;              //@synthesize devicePlatform=_devicePlatform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ruleIdentifier;
-(void)setDevicePlatform:(NSString *)arg1 ;
-(NSString *)devicePlatform;
-(BOOL)evaluate;
-(void)processUserInfo:(id)arg1 ;
@end

