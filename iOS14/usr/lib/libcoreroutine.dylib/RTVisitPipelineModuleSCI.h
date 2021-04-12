/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/RTVisitPipelineModule.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, RTLocation, RTDistanceCalculator, RTVisitSCIStayCluster, RTDefaultsManager, RTDelayedLocationRequester, RTHintManager, NSObject, RTVisitHyperParameter, RTHint, NSString;

@interface RTVisitPipelineModuleSCI : NSObject <RTVisitPipelineModule> {

	BOOL _useLowConfidence;
	BOOL _checkedForHintNearEntryLocation;
	BOOL _hintNearEntryLocation;
	NSMutableArray* _clusters;
	RTLocation* _lastPointProcessed;
	RTDistanceCalculator* _distanceCalculator;
	BOOL _latestGeofenceHintChecked;
	RTVisitSCIStayCluster* _workingHypothesis;
	unsigned long long _fsmState;
	unsigned long long _lcFSMState;
	RTDefaultsManager* _defaultsManager;
	RTDelayedLocationRequester* _delayedLocationRequester;
	RTHintManager* _hintManager;
	NSObject*<OS_dispatch_queue> _queue;
	RTVisitHyperParameter* _hyperParameter;
	RTHint* _latestGeofenceHint;

}

@property (nonatomic,readonly) unsigned long long fsmState;                                      //@synthesize fsmState=_fsmState - In the implementation block
@property (nonatomic,readonly) unsigned long long lcFSMState;                                    //@synthesize lcFSMState=_lcFSMState - In the implementation block
@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                                //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) RTDelayedLocationRequester * delayedLocationRequester;              //@synthesize delayedLocationRequester=_delayedLocationRequester - In the implementation block
@property (nonatomic,retain) RTHintManager * hintManager;                                        //@synthesize hintManager=_hintManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) RTVisitHyperParameter * hyperParameter;                             //@synthesize hyperParameter=_hyperParameter - In the implementation block
@property (assign,nonatomic) BOOL latestGeofenceHintChecked;                                     //@synthesize latestGeofenceHintChecked=_latestGeofenceHintChecked - In the implementation block
@property (nonatomic,retain) RTHint * latestGeofenceHint;                                        //@synthesize latestGeofenceHint=_latestGeofenceHint - In the implementation block
@property (nonatomic,readonly) RTVisitSCIStayCluster * workingHypothesis;                        //@synthesize workingHypothesis=_workingHypothesis - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)FSMStateToString:(unsigned long long)arg1 ;
+(id)LCFSMStateToString:(unsigned long long)arg1 ;
+(id)FSMEventToString:(unsigned long long)arg1 ;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(void)setHintManager:(RTHintManager *)arg1 ;
-(RTHintManager *)hintManager;
-(void)shutdown;
-(RTDelayedLocationRequester *)delayedLocationRequester;
-(id)init;
-(double)requiredDwellTimeForLocation:(id)arg1 ;
-(RTVisitSCIStayCluster *)workingHypothesis;
-(void)processPoints:(id)arg1 ;
-(void)logIfLastPointProcessedCouldHaveCalledFastEntryForLocation:(id)arg1 hint:(id)arg2 ;
-(BOOL)isHintNearEntryLocation:(id)arg1 ;
-(BOOL)isLastGeofenceHintNearLocation:(id)arg1 OfSource:(long long)arg2 ;
-(BOOL)isInWorkingHypothesis;
-(void)exitFromWorkingHypothesis;
-(void)setLatestGeofenceHint:(RTHint *)arg1 ;
-(void)onHintNotification:(id)arg1 ;
-(RTDefaultsManager *)defaultsManager;
-(double)minStaticIntervalForSLVArrival;
-(BOOL)isVisitInFlight;
-(id)initWithDefaultsManager:(id)arg1 delayedLocationRequester:(id)arg2 hintManager:(id)arg3 queue:(id)arg4 hyperParameter:(id)arg5 useLowConfidence:(BOOL)arg6 ;
-(id)process:(id)arg1 ;
-(void)setHyperParameter:(RTVisitHyperParameter *)arg1 ;
-(BOOL)latestGeofenceHintChecked;
-(void)_onHintNotification:(id)arg1 ;
-(unsigned long long)fsmState;
-(void)setLatestGeofenceHintChecked:(BOOL)arg1 ;
-(double)minStaticIntervalForSLVArrivalWithHint;
-(void)resetWorkingHypothesis;
-(id)handleFSM:(unsigned long long)arg1 point:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isDwellTimeSatisfiedForLocation:(id)arg1 ;
-(RTHint *)latestGeofenceHint;
-(void)addVisitFromWorkingHypothesis:(long long)arg1 confidence:(double)arg2 ;
-(unsigned long long)lcFSMState;
-(BOOL)isTimeOutsideClusterSatisfiedForOutlierCount:(unsigned long long)arg1 location:(id)arg2 ;
-(double)requiredTimeOutsideClusterForOutlierCount:(unsigned long long)arg1 location:(id)arg2 ;
-(void)setHintNearEntryLocation:(id)arg1 ;
-(void)addToClusters:(id)arg1 ;
-(BOOL)isNearLocationOfInterestHint:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)exitUntilNotInWorkingHypotheisWithBlock:(/*^block*/id)arg1 ;
-(void)setDelayedLocationRequester:(RTDelayedLocationRequester *)arg1 ;
-(RTVisitHyperParameter *)hyperParameter;
@end

