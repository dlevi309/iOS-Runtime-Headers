/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/


@protocol OS_dispatch_queue, OS_os_log;
#import <Proximity/Proximity-Structs.h>
@class NSObject, NSMutableDictionary, NSData, NSArray, NSSortDescriptor;

@interface PRSharingChoice : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _scores;
	double _lastScoreReportMachContinuousTime;
	double _lastBigHeadFirstReportTime;
	NSData* _lastBigHeadMacAddress;
	NSArray* _lastReportedScores;
	SharingImportanceMeasurements* _measurements;
	NSSortDescriptor* _scoreSortDescriptor;
	unique_ptr<SharingImportanceManager, std::__1::default_delete<SharingImportanceManager> >* _estimatorRangeOnly;
	unique_ptr<SharingImportanceManager, std::__1::default_delete<SharingImportanceManager> >* _estimatorRangeAndAngle;
	BOOL _useRegionBasedEstimator;
	BOOL _outputScoreCalculatedWithAngle;
	BOOL _currentlyInitiating;
	/*^block*/id _newScoresHandler;
	double _halfPointingAngleDegrees;
	NSObject*<OS_os_log> _logger;

}

@property (copy) id newScoresHandler;                                  //@synthesize newScoresHandler=_newScoresHandler - In the implementation block
@property (assign) BOOL useRegionBasedEstimator;                       //@synthesize useRegionBasedEstimator=_useRegionBasedEstimator - In the implementation block
@property (assign) BOOL outputScoreCalculatedWithAngle;                //@synthesize outputScoreCalculatedWithAngle=_outputScoreCalculatedWithAngle - In the implementation block
@property (assign) double halfPointingAngleDegrees;                    //@synthesize halfPointingAngleDegrees=_halfPointingAngleDegrees - In the implementation block
@property (assign) BOOL currentlyInitiating;                           //@synthesize currentlyInitiating=_currentlyInitiating - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> logger;              //@synthesize logger=_logger - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(void)setUseRegionBasedEstimator:(BOOL)arg1 ;
-(void)heartbeatTimeout:(double)arg1 currentMachContTime:(double)arg2 useUpdatedScores:(BOOL)arg3 ;
-(id)init;
-(void)setOutputScoreCalculatedWithAngle:(BOOL)arg1 ;
-(void)updateScoresWithNewMeasurement:(const NeighborMeasurements*)arg1 ;
-(void)setNewScoresHandler:(id)arg1 ;
-(void)setCurrentlyInitiating:(BOOL)arg1 ;
-(void)createEstimators;
-(BOOL)currentlyInitiating;
-(void)updateScoresForTime:(double)arg1 ;
-(void)setHalfPointingAngleDegrees:(double)arg1 ;
-(void)reportScoresToClientAlways:(BOOL)arg1 useUpdatedScoreList:(BOOL)arg2 currentMachContTime:(double)arg3 ;
-(void)addBluetoothProximityEstimate:(NeighborMeasurements)arg1 currentMachContTime:(double)arg2 ;
-(void)setLogger:(NSObject*<OS_os_log>)arg1 ;
-(NSObject*<OS_os_log>)logger;
-(BOOL)outputScoreCalculatedWithAngle;
-(BOOL)useRegionBasedEstimator;
-(id)newScoresHandler;
-(void)addRoseSolutions:(id)arg1 currentMachContTime:(double)arg2 ;
-(double)halfPointingAngleDegrees;
@end

