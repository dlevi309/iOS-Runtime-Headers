/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface VCPTimer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _source;
	AB _active;
	BOOL _isOneShot;

}
+(id)timerWithInterval:(unsigned long long)arg1 unit:(unsigned long long)arg2 oneShot:(BOOL)arg3 andBlock:(/*^block*/id)arg4 ;
+(id)timerWithIntervalSeconds:(unsigned long long)arg1 isOneShot:(BOOL)arg2 andBlock:(/*^block*/id)arg3 ;
-(void)destroy;
-(id)initWithIntervalNanoseconds:(unsigned long long)arg1 isOneShot:(BOOL)arg2 andBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

