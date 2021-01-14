/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/


@protocol NSURLSessionDataDelegate;
@class NSURLSessionDataTask, NSThread, NSArray;

@interface ADNSURLSessionTaskInfo : NSObject {

	NSURLSessionDataTask* _task;
	id<NSURLSessionDataDelegate> _delegate;
	NSThread* _thread;
	NSArray* _modes;

}

@property (retain) NSThread * thread;                                  //@synthesize thread=_thread - In the implementation block
@property (copy) NSArray * modes;                                      //@synthesize modes=_modes - In the implementation block
@property (readonly) NSURLSessionDataTask * task;                      //@synthesize task=_task - In the implementation block
@property (__weak) id<NSURLSessionDataDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSThread *)thread;
-(NSArray *)modes;
-(NSURLSessionDataTask *)task;
-(id<NSURLSessionDataDelegate>)delegate;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<NSURLSessionDataDelegate>)arg1 ;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(void)invalidate;
-(void)perform:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
-(void)performBlockOnClientThread:(/*^block*/id)arg1 ;
-(void)setThread:(NSThread *)arg1 ;
-(id)initWithTask:(id)arg1 delegate:(id)arg2 modes:(id)arg3 ;
-(void)setModes:(NSArray *)arg1 ;
@end

