/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFContentItemFilterAction.h>

@class NSString;

@interface WFFindHealthSamplesAction : WFContentItemFilterAction

@property (nonatomic,readonly) NSString * readableSampleType; 
-(id)query;
-(id)configurationData;
-(void)initializeParameters;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(void)finishRunningWithError:(id)arg1 ;
-(id)createStateForParameter:(id)arg1 fromSerializedRepresentation:(id)arg2 ;
-(id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)arg1 forParameter:(id)arg2 ;
-(void)wasAddedToWorkflow:(id)arg1 ;
-(void)wasRemovedFromWorkflow:(id)arg1 ;
-(id)parameterDefinitions;
-(void)resourceAvailabilityChanged;
-(void)updateParameterVisibility;
-(NSString *)readableSampleType;
-(id)sampleTypeName;
-(void)updateSourcesForSampleType:(id)arg1 ;
-(void)finishRunningWithNoSamples;
@end

