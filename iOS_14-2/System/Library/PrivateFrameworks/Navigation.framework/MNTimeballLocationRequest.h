/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class NSDate;

@interface MNTimeballLocationRequest : NSObject {

	double _desiredAccuracy;
	unsigned long long _attemptCount;
	unsigned long long _maxAttempts;
	NSDate* _requestDate;
	double _timeoutInterval;
	/*^block*/id _completionBlock;

}

@property (assign,nonatomic) double desiredAccuracy;                       //@synthesize desiredAccuracy=_desiredAccuracy - In the implementation block
@property (assign,nonatomic) unsigned long long attemptCount;              //@synthesize attemptCount=_attemptCount - In the implementation block
@property (assign,nonatomic) unsigned long long maxAttempts;               //@synthesize maxAttempts=_maxAttempts - In the implementation block
@property (nonatomic,retain) NSDate * requestDate;                         //@synthesize requestDate=_requestDate - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                       //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,copy) id completionBlock;                             //@synthesize completionBlock=_completionBlock - In the implementation block
+(id)requestWithAccuracy:(double)arg1 maxAttempts:(unsigned long long)arg2 timeoutInterval:(double)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(unsigned long long)attemptCount;
-(void)setAttemptCount:(unsigned long long)arg1 ;
-(id)init;
-(void)setDesiredAccuracy:(double)arg1 ;
-(double)desiredAccuracy;
-(void)setRequestDate:(NSDate *)arg1 ;
-(void)setMaxAttempts:(unsigned long long)arg1 ;
-(unsigned long long)maxAttempts;
-(double)timeoutInterval;
-(void)setTimeoutInterval:(double)arg1 ;
-(NSDate *)requestDate;
@end

