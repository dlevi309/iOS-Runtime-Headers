/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/


@protocol PFLTaskStateProvider <NSObject>
@optional
-(int)modelVersion;
-(id)metricsProvider;
-(id)resourceManager;
-(id)metricsIdentifier;
-(id)validationProvider;
-(id)uploadResultsIdentifier;

@required
-(id)layerNames;
-(id)modelConfiguration;
-(id)dataProvider;
-(id)taskIdentifier;
-(id)modelIdentifier;
-(double)privatizationNormMax;
-(unsigned long long)privatizationNormBinCount;
-(double)validationSplit;
-(id)compiledModelURL;

@end

