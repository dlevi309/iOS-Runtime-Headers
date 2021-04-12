/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol AFInvocationFeedbackExperiment <NSObject>
@property (nonatomic,readonly) unsigned long long featureGroups; 
@required
-(unsigned long long)featureGroups;
-(void)logExperimentExposureForInvocationFeedbacks;
-(BOOL)isFeatureGroupOneEnabled;
-(BOOL)isFeatureGroupTwoEnabled;
-(BOOL)isFeatureGroupThreeEnabled;
-(BOOL)isFeatureGroupFourEnabled;

@end

