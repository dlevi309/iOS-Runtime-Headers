/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
*/

#import <C2/C2SessionTaskDelegate.h>

@protocol C2RequestDelegate, OS_os_activity, C2SessionTaskDelegate;
@class C2RequestOptions, NSObject, NSURLSessionDataTask, NSString;

@interface C2SessionTask : NSObject <C2SessionTaskDelegate> {

	BOOL _isComplete;
	unsigned _attemptCount;
	C2RequestOptions* _options;
	id<C2RequestDelegate> _delegate;
	NSObject*<OS_os_activity> _activity;
	NSURLSessionDataTask* _task;
	id<C2SessionTaskDelegate> _sessionTaskDelegate;
	double _initTime;
	double _resetTime;

}

@property (nonatomic,retain) NSURLSessionDataTask * task;                                //@synthesize task=_task - In the implementation block
@property (assign,nonatomic) BOOL isComplete;                                            //@synthesize isComplete=_isComplete - In the implementation block
@property (nonatomic,retain) id<C2SessionTaskDelegate> sessionTaskDelegate;              //@synthesize sessionTaskDelegate=_sessionTaskDelegate - In the implementation block
@property (assign,nonatomic) double initTime;                                            //@synthesize initTime=_initTime - In the implementation block
@property (assign,nonatomic) double resetTime;                                           //@synthesize resetTime=_resetTime - In the implementation block
@property (assign,nonatomic) unsigned attemptCount;                                      //@synthesize attemptCount=_attemptCount - In the implementation block
@property (nonatomic,copy,readonly) C2RequestOptions * options;                          //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) id<C2RequestDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_activity> activity;                       //@synthesize activity=_activity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)captureMetricsForTimingData:(id)arg1 withKey:(id)arg2 ;
+(double)captureMetricDurationBetweenStart:(double)arg1 andEnd:(double)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(C2RequestOptions *)options;
-(id<C2RequestDelegate>)delegate;
-(NSObject*<OS_os_activity>)activity;
-(NSURLSessionDataTask *)task;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(BOOL)isComplete;
-(id)taskDescription;
-(unsigned)attemptCount;
-(void)setAttemptCount:(unsigned)arg1 ;
-(void)setIsComplete:(BOOL)arg1 ;
-(double)resetTime;
-(void)C2Session:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(id)initWithOptions:(id)arg1 delegate:(id)arg2 sessionTaskDelegate:(id)arg3 ;
-(void)handleCallbackForTask:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)captureMetricsWithError:(id)arg1 eventType:(long long)arg2 ;
-(id<C2SessionTaskDelegate>)sessionTaskDelegate;
-(void)setSessionTaskDelegate:(id<C2SessionTaskDelegate>)arg1 ;
-(double)initTime;
-(void)setInitTime:(double)arg1 ;
-(void)setResetTime:(double)arg1 ;
@end

