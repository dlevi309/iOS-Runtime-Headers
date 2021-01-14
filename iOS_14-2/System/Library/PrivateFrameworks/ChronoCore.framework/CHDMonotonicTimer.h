/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoCore.framework/ChronoCore
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface CHDMonotonicTimer : NSObject {

	NSObject*<OS_dispatch_source> _timer;

}
-(void)invalidate;
-(void)activateWithTime:(unsigned long long)arg1 repeat:(long long)arg2 block:(/*^block*/id)arg3 ;
@end

