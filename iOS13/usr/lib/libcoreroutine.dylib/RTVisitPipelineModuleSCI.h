/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/RTVisitPipelineModule.h>

@class NSMutableArray, RTVisitSCIStayCluster, RTHintManager, RTVisitHyperParameter, RTLearnedLocationManager, NSString;

@interface RTVisitPipelineModuleSCI : NSObject <RTVisitPipelineModule> {

	BOOL _useLowConfidence;
	BOOL _checkedForHintNearEntryLocation;
	NSMutableArray* _clusters;
	RTVisitSCIStayCluster* _workingHypothesis;
	unsigned long long _fsmState;
	unsigned long long _lcFSMState;
	RTHintManager* _hintManager;
	RTVisitHyperParameter* _hyperParameter;
	RTLearnedLocationManager* _learnedLocationManager;

}

@property (nonatomic,readonly) unsigned long long fsmState;                                  //@synthesize fsmState=_fsmState - In the implementation block
@property (nonatomic,readonly) unsigned long long lcFSMState;                                //@synthesize lcFSMState=_lcFSMState - In the implementation block
@property (nonatomic,retain) RTHintManager * hintManager;                                    //@synthesize hintManager=_hintManager - In the implementation block
@property (nonatomic,retain) RTVisitHyperParameter * hyperParameter;                         //@synthesize hyperParameter=_hyperParameter - In the implementation block
@property (nonatomic,retain) RTLearnedLocationManager * learnedLocationManager;              //@synthesize learnedLocationManager=_learnedLocationManager - In the implementation block
@property (nonatomic,readonly) RTVisitSCIStayCluster * workingHypothesis;                    //@synthesize workingHypothesis=_workingHypothesis - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)MinStaticIntervalForSLVArrivalWithHint;
+(double)MinStaticIntervalForSLVArrival;
+(id)FSMStateToString:(unsigned long long)arg1 ;
+(id)LCFSMStateToString:(unsigned long long)arg1 ;
+(id)FSMEventToString:(unsigned long long)arg1 ;
-(id)init;
-(id)process:(id)arg1 ;
-(RTVisitHyperParameter *)hyperParameter;
-(RTLearnedLocationManager *)learnedLocationManager;
-(void)setLearnedLocationManager:(RTLearnedLocationManager *)arg1 ;
-(RTHintManager *)hintManager;
-(id)initWithHintManager:(id)arg1 hyperParameter:(id)arg2 learnedLocationManager:(id)arg3 useLowConfidence:(BOOL)arg4 ;
-(void)setHintManager:(RTHintManager *)arg1 ;
-(void)resetWorkingHypothesis;
-(id)handleFSM:(unsigned long long)arg1 point:(id)arg2 ;
-(void)processPoints:(id)arg1 ;
-(BOOL)isInWorkingHypothesis;
-(void)exitFromWorkingHypothesis;
-(BOOL)isVisitInFlight;
-(void)addToClusters:(id)arg1 ;
-(void)addVisitFromWorkingHypothesis:(long long)arg1 confidence:(double)arg2 ;
-(id)fetchKnownLOINearLocation:(id)arg1 ;
-(BOOL)isNearHint:(id)arg1 ;
-(void)exitUntilNotInWorkingHypotheisWithBlock:(/*^block*/id)arg1 ;
-(RTVisitSCIStayCluster *)workingHypothesis;
-(unsigned long long)fsmState;
-(unsigned long long)lcFSMState;
-(void)setHyperParameter:(RTVisitHyperParameter *)arg1 ;
@end

