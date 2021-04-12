/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface TSUProgressObserver : NSObject {

	double mValueInterval;
	NSObject*<OS_dispatch_queue> mQueue;
	/*^block*/id mHandler;
	double mLastHandledValue;
	BOOL mLastHandledIndeterminate;

}

@property (nonatomic,readonly) double valueInterval; 
-(id)init;
-(void)dealloc;
-(id)initWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)handleValue:(double)arg1 maxValue:(double)arg2 isIndeterminate:(BOOL)arg3 ;
-(double)valueInterval;
@end

