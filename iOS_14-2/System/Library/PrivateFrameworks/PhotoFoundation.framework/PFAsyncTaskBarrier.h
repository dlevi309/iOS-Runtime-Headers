/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@class NSString, NSArray, NSCondition;

@interface PFAsyncTaskBarrier : NSObject {

	NSString* _label;
	long long _remainingTaskCount;
	/*^block*/id _completionBlock;
	NSArray* _errors;
	NSCondition* _conditionLock;

}

@property (readonly) NSCondition * conditionLock;               //@synthesize conditionLock=_conditionLock - In the implementation block
@property (retain) NSArray * errors;                            //@synthesize errors=_errors - In the implementation block
@property (readonly) NSString * label;                          //@synthesize label=_label - In the implementation block
@property (readonly) long long remainingTaskCount;              //@synthesize remainingTaskCount=_remainingTaskCount - In the implementation block
@property (copy,readonly) id completionBlock;                   //@synthesize completionBlock=_completionBlock - In the implementation block
-(void)waitUntilCompleted;
-(id)completionBlock;
-(id)description;
-(NSArray *)errors;
-(id)initWithLabel:(id)arg1 taskCount:(long long)arg2 ;
-(id)initWithLabel:(id)arg1 taskCount:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)waitUntilCompletedOrError;
-(void)taskCompleted;
-(void)taskCompletedWithCriticalBlock:(/*^block*/id)arg1 ;
-(void)taskCompletedWithError:(id)arg1 ;
-(void)taskCompletedWithError:(id)arg1 criticalBlock:(/*^block*/id)arg2 ;
-(void)taskCompletedWithErrors:(id)arg1 ;
-(void)taskCompletedWithErrors:(id)arg1 criticalBlock:(/*^block*/id)arg2 ;
-(void)changeRemainingTaskCount:(long long)arg1 ;
-(void)setRemainingTaskCount:(long long)arg1 ;
-(void)executeCriticalBlock:(/*^block*/id)arg1 ;
-(long long)remainingTaskCount;
-(NSCondition *)conditionLock;
-(void)setErrors:(NSArray *)arg1 ;
-(NSString *)label;
@end

