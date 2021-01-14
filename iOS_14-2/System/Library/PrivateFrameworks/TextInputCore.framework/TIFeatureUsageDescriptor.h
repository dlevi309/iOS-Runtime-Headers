/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TINumericValueDescriptor.h>

@class NSString;

@interface TIFeatureUsageDescriptor : TINumericValueDescriptor {

	NSString* _discoveryCounter;
	long long _discoveryThreshold;
	NSString* _configString;

}

@property (nonatomic,readonly) NSString * discoveryCounter;               //@synthesize discoveryCounter=_discoveryCounter - In the implementation block
@property (nonatomic,readonly) long long discoveryThreshold;              //@synthesize discoveryThreshold=_discoveryThreshold - In the implementation block
@property (nonatomic,readonly) NSString * configString;                   //@synthesize configString=_configString - In the implementation block
+(id)featureUsageDescriptorWithMetricName:(id)arg1 discoveryCounter:(id)arg2 discoveryThreshold:(long long)arg3 configString:(id)arg4 calculationExpression:(id)arg5 calculationPrecondition:(id)arg6 calculationDefaultValue:(id)arg7 calculationDependencies:(id)arg8 bucketThresholds:(id)arg9 ;
-(id)initWithMetricName:(id)arg1 discoveryCounter:(id)arg2 discoveryThreshold:(long long)arg3 configString:(id)arg4 calculationExpression:(id)arg5 calculationPrecondition:(id)arg6 calculationDefaultValue:(id)arg7 calculationDependencies:(id)arg8 bucketThresholds:(id)arg9 ;
-(NSString *)discoveryCounter;
-(long long)discoveryThreshold;
-(NSString *)configString;
@end

