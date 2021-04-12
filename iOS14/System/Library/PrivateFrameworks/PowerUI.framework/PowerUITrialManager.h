/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/


@protocol OS_os_log;
#import <PowerUI/PowerUI-Structs.h>
@class TRIClient, NSString, TRITrackingId, NSObject;

@interface PowerUITrialManager : NSObject {

	os_unfair_lock_s _lock;
	TRIClient* _trialClient;
	NSString* _treatmentID;
	NSString* _experimentID;
	NSString* _trialNamespaceName;
	TRITrackingId* _trialTrackingID;
	NSObject*<OS_os_log> _log;

}

@property (assign,nonatomic) os_unfair_lock_s lock;                      //@synthesize lock=_lock - In the implementation block
@property (retain) TRITrackingId * trialTrackingID;                      //@synthesize trialTrackingID=_trialTrackingID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                   //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) TRIClient * trialClient;                    //@synthesize trialClient=_trialClient - In the implementation block
@property (retain) NSString * treatmentID;                               //@synthesize treatmentID=_treatmentID - In the implementation block
@property (retain) NSString * experimentID;                              //@synthesize experimentID=_experimentID - In the implementation block
@property (nonatomic,retain) NSString * trialNamespaceName;              //@synthesize trialNamespaceName=_trialNamespaceName - In the implementation block
-(NSObject*<OS_os_log>)log;
-(void)setTrialClient:(TRIClient *)arg1 ;
-(void)setExperimentID:(NSString *)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(os_unfair_lock_s)lock;
-(id)initWithDefaultsDomain:(id)arg1 ;
-(NSString *)treatmentID;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(void)setTrialTrackingID:(TRITrackingId *)arg1 ;
-(TRITrackingId *)trialTrackingID;
-(TRIClient *)trialClient;
-(NSString *)experimentID;
-(id)trialFactor:(id)arg1 ;
-(id)loadModelFromPath:(id)arg1 deleteExistingFiles:(BOOL)arg2 ;
-(void)loadTrialUpdates;
-(id)loadTrialEngageModelByDeletingExistingModel:(BOOL)arg1 ;
-(id)loadTrialDurationModelByDeletingExistingModel:(BOOL)arg1 ;
-(double)loadTrialThreshold;
-(double)loadTrialAdjustedHours;
-(double)loadTrialMinInputChargeDuration;
-(void)setTreatmentID:(NSString *)arg1 ;
-(NSString *)trialNamespaceName;
-(void)setTrialNamespaceName:(NSString *)arg1 ;
@end

