/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TIDescriptorParser.h>

@interface TIMetricDescriptorParser : TIDescriptorParser
-(id)init;
-(void)parseMetricDescriptors:(id)arg1 andInvalidMetricNames:(id)arg2 fromConfig:(id)arg3 errors:(id)arg4 ;
-(id)parseMetricDescriptorWithName:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3 ;
-(id)parseNumericValueDescriptorWithName:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3 ;
-(id)parseFeatureUsageDescriptorWithName:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3 ;
-(id)parseContextValueDescriptorWithName:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3 ;
-(id)parseSettingValueDescriptorWithName:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3 ;
-(id)parseCalculationPreconditionFromConfig:(id)arg1 forExpression:(id)arg2 errors:(id)arg3 ;
-(id)parseCalculationDefaultValueFromConfig:(id)arg1 forExpression:(id)arg2 andPrecondition:(id)arg3 errors:(id)arg4 ;
-(id)parseCalculationDependenciesFromConfig:(id)arg1 forExpression:(id)arg2 errors:(id)arg3 ;
-(id)parseBucketThresholdsFromConfig:(id)arg1 isFeatureUsageDescriptor:(BOOL)arg2 errors:(id)arg3 ;
-(id)parseBucketValuesFromConfig:(id)arg1 forBucketThresholds:(id)arg2 isFeatureUsageDescriptor:(BOOL)arg3 errors:(id)arg4 ;
-(void)findInvalidDependencyChain:(id)arg1 forMetricDescriptor:(id)arg2 fromMetricDescriptors:(id)arg3 andInvalidMetricNames:(id)arg4 invalidMetricDescriptors:(id)arg5 errors:(id)arg6 ;
-(id)descriptionFromDependencyChain:(id)arg1 andDependencyName:(id)arg2 ;
@end

