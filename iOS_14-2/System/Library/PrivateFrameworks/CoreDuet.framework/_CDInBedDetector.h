/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol OS_os_log, _DKKnowledgeQuerying;
@class NSObject;

@interface _CDInBedDetector : NSObject {

	NSObject*<OS_os_log> _log;
	id<_DKKnowledgeQuerying> _knowledge;
	unsigned long long _method;

}

@property (nonatomic,retain) NSObject*<OS_os_log> log;              //@synthesize log=_log - In the implementation block
@property (retain) id<_DKKnowledgeQuerying> knowledge;              //@synthesize knowledge=_knowledge - In the implementation block
@property (assign) unsigned long long method;                       //@synthesize method=_method - In the implementation block
+(id)inBedDetector;
+(id)inBedDetectorWithKnowledge:(id)arg1 ;
+(id)inBedDetectorWithKnowledge:(id)arg1 method:(unsigned long long)arg2 ;
+(id)simpleLockBasedInBedDetector;
-(NSObject*<OS_os_log>)log;
-(unsigned long long)method;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id<_DKKnowledgeQuerying>)knowledge;
-(void)setMethod:(unsigned long long)arg1 ;
-(id)initWithKnowledge:(id)arg1 method:(unsigned long long)arg2 ;
-(void)setKnowledge:(id<_DKKnowledgeQuerying>)arg1 ;
-(id)lockedTimesBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3 ;
-(id)detectInBedWithPolicyV1BetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3 ;
-(id)findDateIntervalOfEventInStream:(id)arg1 datePredicate:(id)arg2 valuePredicate:(id)arg3 sortDescriptor:(id)arg4 error:(id*)arg5 ;
-(id)findLatestEndOfMovementBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3 ;
-(id)findLastTimeDeviceWasLockedBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3 ;
-(id)findLastTimeDeviceWasPluggedInBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3 ;
-(id)detectInBedBetweenBedtimeDate:(id)arg1 wakupDate:(id)arg2 error:(id*)arg3 ;
-(id)stationaryIntervalsBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3 ;
@end

