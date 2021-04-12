/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol _DKKnowledgeQuerying;
@interface _CDInBedDetector : NSObject {

	id<_DKKnowledgeQuerying> _knowledge;
	unsigned long long _method;

}

@property (retain) id<_DKKnowledgeQuerying> knowledge;              //@synthesize knowledge=_knowledge - In the implementation block
@property (assign) unsigned long long method;                       //@synthesize method=_method - In the implementation block
+(id)inBedDetector;
+(id)inBedDetectorWithKnowledge:(id)arg1 ;
+(id)inBedDetectorWithKnowledge:(id)arg1 method:(unsigned long long)arg2 ;
+(id)simpleLockBasedInBedDetector;
-(unsigned long long)method;
-(id)initWithKnowledge:(id)arg1 method:(unsigned long long)arg2 ;
-(id)lockedTimesBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3 ;
-(id)detectInBedWithPolicyV1BetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3 ;
-(id<_DKKnowledgeQuerying>)knowledge;
-(id)findDateIntervalOfEventInStream:(id)arg1 datePredicate:(id)arg2 valuePredicate:(id)arg3 sortDescriptor:(id)arg4 error:(id*)arg5 ;
-(id)findLatestEndOfWalkingActivityBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3 ;
-(id)findLastTimeDeviceWasLockedBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3 ;
-(id)findLastTimeDeviceWasPluggedInBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3 ;
-(id)detectInBedBetweenBedtimeDate:(id)arg1 wakupDate:(id)arg2 error:(id*)arg3 ;
-(void)setKnowledge:(id<_DKKnowledgeQuerying>)arg1 ;
-(void)setMethod:(unsigned long long)arg1 ;
@end

