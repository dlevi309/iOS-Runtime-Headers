/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)invalidate;
-(id<NSURLSessionDataDelegate>)delegate;
-(void)setDelegate:(id<NSURLSessionDataDelegate>)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(NSArray *)modes;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(NSURLSessionDataTask *)task;
-(NSThread *)thread;
-(void)perform:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
-(void)performBlockOnClientThread:(/*^block*/id)arg1 ;
-(void)setThread:(NSThread *)arg1 ;
-(id)initWithTask:(id)arg1 delegate:(id)arg2 modes:(id)arg3 ;
-(void)setModes:(NSArray *)arg1 ;
@end

