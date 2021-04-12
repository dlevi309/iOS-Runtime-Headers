/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HKDataFlowLinkProcessor.h>
#import <libobjc.A.dylib/HDWorkoutDataDestination.h>

@protocol HDWorkoutDataAccumulator;
@class HKDataFlowLink, NSUUID, NSMutableArray, HDProfile, HKWorkoutConfiguration, NSString;

@interface HDMockWorkoutDataDestination : NSObject <HKDataFlowLinkProcessor, HDWorkoutDataDestination> {

	HKDataFlowLink* _workoutDataFlowLink;
	NSUUID* _dataProcessorUUID;
	unsigned long long _workoutDataDestinationState;
	id<HDWorkoutDataAccumulator> workoutDataAccumulator;
	/*^block*/id _sampleHandler;
	/*^block*/id _eventHandler;
	/*^block*/id _metadataHandler;
	NSMutableArray* _dataSources;
	HDProfile* _profile;
	HKWorkoutConfiguration* _workoutConfiguration;

}

@property (nonatomic,retain) NSMutableArray * dataSources;                                       //@synthesize dataSources=_dataSources - In the implementation block
@property (nonatomic,retain) HDProfile * profile;                                                //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HKWorkoutConfiguration * workoutConfiguration;                      //@synthesize workoutConfiguration=_workoutConfiguration - In the implementation block
@property (copy) id sampleHandler;                                                               //@synthesize sampleHandler=_sampleHandler - In the implementation block
@property (copy) id eventHandler;                                                                //@synthesize eventHandler=_eventHandler - In the implementation block
@property (copy) id metadataHandler;                                                             //@synthesize metadataHandler=_metadataHandler - In the implementation block
@property (assign) unsigned long long workoutDataDestinationState;                               //@synthesize workoutDataDestinationState=_workoutDataDestinationState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) HKDataFlowLink * workoutDataFlowLink; 
@property (copy,readonly) NSUUID * workoutDataProcessorUUID; 
@property (nonatomic,readonly) id<HDWorkoutDataAccumulator> workoutDataAccumulator; 
-(NSMutableArray *)dataSources;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(void)setDataSources:(NSMutableArray *)arg1 ;
-(void)setWorkoutConfiguration:(HKWorkoutConfiguration *)arg1 ;
-(HKWorkoutConfiguration *)workoutConfiguration;
-(HKDataFlowLink *)workoutDataFlowLink;
-(NSUUID *)workoutDataProcessorUUID;
-(void)addSamples:(id)arg1 dataSource:(id)arg2 ;
-(void)addWorkoutEvents:(id)arg1 dataSource:(id)arg2 ;
-(void)addMetadata:(id)arg1 dataSource:(id)arg2 ;
-(unsigned long long)workoutDataDestinationState;
-(id<HDWorkoutDataAccumulator>)workoutDataAccumulator;
-(id)initWithQueue:(id)arg1 profile:(id)arg2 workoutConfiguration:(id)arg3 ;
-(void)setWorkoutDataDestinationState:(unsigned long long)arg1 ;
-(id)sampleHandler;
-(void)setSampleHandler:(id)arg1 ;
-(id)metadataHandler;
-(void)setMetadataHandler:(id)arg1 ;
@end

