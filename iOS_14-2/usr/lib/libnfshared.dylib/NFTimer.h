/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface NFTimer : NSObject {

	NSObject*<OS_dispatch_source> _src;
	unsigned long long _popTimeInSeconds;
	BOOL _monotonic;

}
-(void)startTimer:(double)arg1 leeway:(double)arg2 ;
-(void)stopTimer;
-(id)description;
-(id)initSleepTimerWithCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)startTimer:(double)arg1 ;
-(id)initWithCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)dealloc;
@end

