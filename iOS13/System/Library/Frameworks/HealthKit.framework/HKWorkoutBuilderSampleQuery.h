/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
-(void)queue_validate;
-(void)queue_deliverError:(id)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(void)client_deliverSamples:(id)arg1 hasFinishedHistoricalFetch:(BOOL)arg2 queryUUID:(id)arg3 ;
-(id)initWithSampleType:(id)arg1 workoutBuilder:(id)arg2 samplesAddedHandler:(/*^block*/id)arg3 ;
-(HKWorkoutBuilder *)workoutBuilder;
-(void)setWorkoutBuilder:(HKWorkoutBuilder *)arg1 ;
@end

