/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/

#import <ProactiveEventTracker/PETEventTracker.h>

@class NSString;

@interface PETGoalConversionEventTracker : PETEventTracker {

	NSString* _opportunityEvent;
	NSString* _conversionEvent;

}

@property (nonatomic,readonly) NSString * opportunityEvent;              //@synthesize opportunityEvent=_opportunityEvent - In the implementation block
@property (nonatomic,readonly) NSString * conversionEvent;               //@synthesize conversionEvent=_conversionEvent - In the implementation block
-(void)trackGoalOpportunityEventWithPropertyValues:(id)arg1 ;
-(void)trackGoalConversionEventWithPropertyValues:(id)arg1 ;
-(id)initWithFeatureId:(id)arg1 opportunityEvent:(id)arg2 conversionEvent:(id)arg3 registerProperties:(id)arg4 ;
-(void)trackGoalOpportunityEventWithConversion:(BOOL)arg1 propertyValues:(id)arg2 ;
-(id)initWithFeatureId:(id)arg1 opportunityEvent:(id)arg2 conversionEvent:(id)arg3 registerProperties:(id)arg4 propertySubsets:(id)arg5 ;
-(void)_logValue:(id)arg1 forEvent:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4 ;
-(id)_keyMetadataForEvent:(id)arg1 ;
-(NSString *)opportunityEvent;
-(NSString *)conversionEvent;
@end

