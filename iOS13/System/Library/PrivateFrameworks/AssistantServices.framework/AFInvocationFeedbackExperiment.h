/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

