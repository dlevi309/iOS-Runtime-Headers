/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@class NSDate;

@interface WFLogHealthSampleAction : WFAction {

	NSDate* _currentDate;

}

@property (nonatomic,retain) NSDate * currentDate;              //@synthesize currentDate=_currentDate - In the implementation block
-(id)appIdentifier;
-(NSDate *)currentDate;
-(void)setCurrentDate:(NSDate *)arg1 ;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)outputContentClasses;
-(id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)arg1 forParameter:(id)arg2 ;
-(id)parametersRequiringUserInputAlongsideParameter:(id)arg1 ;
-(void)wasAddedToWorkflow:(id)arg1 ;
-(void)wasRemovedFromWorkflow:(id)arg1 ;
-(void)resourceAvailabilityChanged;
-(void)handleWithCategoryType:(id)arg1 ;
-(void)handleWithQuantityType:(id)arg1 ;
-(id)dateForParameterValueWithKey:(id)arg1 error:(id*)arg2 ;
-(void)updateParameterStates;
-(void)forceUpdateSelectedUnit;
-(void)saveObject:(id)arg1 withObjectType:(id)arg2 item:(id)arg3 ;
@end

