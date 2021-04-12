/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(double)desiredAccuracy;
-(void)setDesiredAccuracy:(double)arg1 ;
-(double)timeoutInterval;
-(unsigned long long)attemptCount;
-(void)setAttemptCount:(unsigned long long)arg1 ;
-(void)setMaxAttempts:(unsigned long long)arg1 ;
-(unsigned long long)maxAttempts;
-(NSDate *)requestDate;
-(void)setRequestDate:(NSDate *)arg1 ;
@end

