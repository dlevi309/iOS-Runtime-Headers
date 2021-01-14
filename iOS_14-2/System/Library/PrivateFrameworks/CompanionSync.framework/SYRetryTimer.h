/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface SYRetryTimer : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	double _interval;
	double _backoffFactor;
	int _maxRetries;
	int _numRetries;

}
-(void)cancel;
-(id)initWithInterval:(double)arg1 backoffFactor:(double)arg2 maxRetries:(int)arg3 queue:(id)arg4 callout:(/*^block*/id)arg5 ;
-(BOOL)incrementBackoff;
@end

