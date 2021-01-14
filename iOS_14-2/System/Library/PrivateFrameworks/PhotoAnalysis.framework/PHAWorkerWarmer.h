/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class NSMutableSet, PHAWorker, PHAJobConstraints;

@interface PHAWorkerWarmer : NSObject {

	NSMutableSet* _workers;
	PHAWorker* _lastActiveWorker;
	PHAJobConstraints* _lastConstraints;

}

@property (nonatomic,readonly) NSMutableSet * workers;                         //@synthesize workers=_workers - In the implementation block
@property (nonatomic,retain) PHAWorker * lastActiveWorker;                     //@synthesize lastActiveWorker=_lastActiveWorker - In the implementation block
@property (nonatomic,retain) PHAJobConstraints * lastConstraints;              //@synthesize lastConstraints=_lastConstraints - In the implementation block
+(unsigned long long)stateCode;
-(id)init;
-(void)setLastConstraints:(PHAJobConstraints *)arg1 ;
-(id)statusAsDictionary;
-(void)recordConstraintChange:(id)arg1 ;
-(BOOL)_cooldownWorkerIfWarmed:(id)arg1 ;
-(NSMutableSet *)workers;
-(PHAJobConstraints *)lastConstraints;
-(void)setActiveWorker:(id)arg1 withJob:(id)arg2 ;
-(void)setLastActiveWorker:(PHAWorker *)arg1 ;
-(void)_warmupWorkerIfCooled:(id)arg1 withProgressBlock:(/*^block*/id)arg2 ;
-(void)reportNoMoreJobsExpected;
-(PHAWorker *)lastActiveWorker;
@end

