/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKWorkoutBuilderSampleQueryClientInterface.h>

@class HKWorkoutBuilder, NSString;

@interface HKWorkoutBuilderSampleQuery : HKQuery <HKWorkoutBuilderSampleQueryClientInterface> {

	/*^block*/id _samplesAddedHandler;
	BOOL _needsHistoricalFetch;
	HKWorkoutBuilder* _workoutBuilder;

}

@property (assign,nonatomic,__weak) HKWorkoutBuilder * workoutBuilder;              //@synthesize workoutBuilder=_workoutBuilder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureClientInterface:(id)arg1 ;
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_deliverError:(id)arg1 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(HKWorkoutBuilder *)workoutBuilder;
-(void)setWorkoutBuilder:(HKWorkoutBuilder *)arg1 ;
-(void)client_deliverSamples:(id)arg1 hasFinishedHistoricalFetch:(BOOL)arg2 queryUUID:(id)arg3 ;
-(id)initWithSampleType:(id)arg1 workoutBuilder:(id)arg2 samplesAddedHandler:(/*^block*/id)arg3 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(void)queue_validate;
@end

