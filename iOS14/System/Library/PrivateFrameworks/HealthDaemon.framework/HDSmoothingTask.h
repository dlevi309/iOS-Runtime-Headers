/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HKWorkoutRoute, NSArray, HDDaemonTransaction;

@interface HDSmoothingTask : NSObject {

	HKWorkoutRoute* _sample;
	NSArray* _unsmoothedLocations;
	/*^block*/id _completionHandler;
	HDDaemonTransaction* _transaction;
	unsigned long long _smoothingAttempts;

}

@property (nonatomic,retain) HKWorkoutRoute * sample;                        //@synthesize sample=_sample - In the implementation block
@property (nonatomic,retain) NSArray * unsmoothedLocations;                  //@synthesize unsmoothedLocations=_unsmoothedLocations - In the implementation block
@property (nonatomic,copy) id completionHandler;                             //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) HDDaemonTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (assign) unsigned long long smoothingAttempts;                     //@synthesize smoothingAttempts=_smoothingAttempts - In the implementation block
-(void)setTransaction:(HDDaemonTransaction *)arg1 ;
-(HKWorkoutRoute *)sample;
-(void)setCompletionHandler:(id)arg1 ;
-(HDDaemonTransaction *)transaction;
-(id)completionHandler;
-(id)description;
-(void)setSample:(HKWorkoutRoute *)arg1 ;
-(id)initWithRoute:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)unsmoothedLocations;
-(void)setUnsmoothedLocations:(NSArray *)arg1 ;
-(unsigned long long)smoothingAttempts;
-(void)setSmoothingAttempts:(unsigned long long)arg1 ;
@end

