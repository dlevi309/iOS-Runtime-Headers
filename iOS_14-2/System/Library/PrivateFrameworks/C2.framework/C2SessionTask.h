/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
*/

#import <C2/C2SessionTaskDelegate.h>

@protocol C2RequestDelegate, C2SessionTaskDelegate, OS_os_activity;
@class C2RequestOptions, NSURLSessionDataTask, NSURLSessionTaskMetrics, NSMutableSet, NSObject, NSString;

@interface C2SessionTask : NSObject <C2SessionTaskDelegate> {

	BOOL _isComplete;
	unsigned _attemptCount;
	C2RequestOptions* _options;
	id<C2RequestDelegate> _delegate;
	NSURLSessionDataTask* _task;
	NSURLSessionTaskMetrics* _taskMetrics;
	id<C2SessionTaskDelegate> _sessionTaskDelegate;
	double _initTime;
	double _resetTime;
	NSMutableSet* _outstandingCallbacks;
	NSObject*<OS_os_activity> _activity;

}

@property (nonatomic,retain) NSURLSessionDataTask * task;                                //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NSURLSessionTaskMetrics * taskMetrics;                      //@synthesize taskMetrics=_taskMetrics - In the implementation block
@property (assign,nonatomic) BOOL isComplete;                                            //@synthesize isComplete=_isComplete - In the implementation block
@property (nonatomic,retain) id<C2SessionTaskDelegate> sessionTaskDelegate;              //@synthesize sessionTaskDelegate=_sessionTaskDelegate - In the implementation block
@property (assign,nonatomic) double initTime;                                            //@synthesize initTime=_initTime - In the implementation block
@property (assign,nonatomic) double resetTime;                                           //@synthesize resetTime=_resetTime - In the implementation block
@property (assign,nonatomic) unsigned attemptCount;                                      //@synthesize attemptCount=_attemptCount - In the implementation block
@property (nonatomic,retain) NSMutableSet * outstandingCallbacks;                        //@synthesize outstandingCallbacks=_outstandingCallbacks - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_activity> activity;                       //@synthesize activity=_activity - In the implementation block
@property (nonatomic,copy,readonly) C2RequestOptions * options;                          //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) id<C2RequestDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL callbackHung; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(double)captureMetricsForTimingData:(id)arg1 withKey:(id)arg2 ;
+(double)captureMetricDurationBetweenStart:(double)arg1 andEnd:(double)arg2 ;
+(id)callbackHealthQueue;
-(void)setTaskMetrics:(NSURLSessionTaskMetrics *)arg1 ;
-(BOOL)isComplete;
-(NSURLSessionTaskMetrics *)taskMetrics;
-(unsigned)attemptCount;
-(NSURLSessionDataTask *)task;
-(void)setAttemptCount:(unsigned)arg1 ;
-(id)taskDescription;
-(id<C2RequestDelegate>)delegate;
-(NSObject*<OS_os_activity>)activity;
-(C2RequestOptions *)options;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(void)setIsComplete:(BOOL)arg1 ;
-(void)invalidate;
-(double)initTime;
-(void)dealloc;
-(void)C2Session:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(id)initWithOptions:(id)arg1 delegate:(id)arg2 sessionTaskDelegate:(id)arg3 ;
-(void)handleCallbackForTask:(id)arg1 callback:(/*^block*/id)arg2 ;
-(BOOL)callbackHung;
-(void)testBehavior_triggerCallbackHang;
-(void)captureMetricsWithError:(id)arg1 eventType:(long long)arg2 ;
-(void)didFinishCollectingMetrics:(id)arg1 ;
-(id<C2SessionTaskDelegate>)sessionTaskDelegate;
-(void)setSessionTaskDelegate:(id<C2SessionTaskDelegate>)arg1 ;
-(void)setInitTime:(double)arg1 ;
-(double)resetTime;
-(void)setResetTime:(double)arg1 ;
-(NSMutableSet *)outstandingCallbacks;
-(void)setOutstandingCallbacks:(NSMutableSet *)arg1 ;
@end

