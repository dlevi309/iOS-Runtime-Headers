/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)statusAsDictionary;
-(void)_warmupWorkerIfCooled:(id)arg1 withProgressBlock:(/*^block*/id)arg2 ;
-(BOOL)_cooldownWorkerIfWarmed:(id)arg1 ;
-(void)recordConstraintChange:(id)arg1 ;
-(void)setActiveWorker:(id)arg1 withJob:(id)arg2 ;
-(void)reportNoMoreJobsExpected;
-(NSMutableSet *)workers;
-(PHAWorker *)lastActiveWorker;
-(void)setLastActiveWorker:(PHAWorker *)arg1 ;
-(PHAJobConstraints *)lastConstraints;
-(void)setLastConstraints:(PHAJobConstraints *)arg1 ;
@end

