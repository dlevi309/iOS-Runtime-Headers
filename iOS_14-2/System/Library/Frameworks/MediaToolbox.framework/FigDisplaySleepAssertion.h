/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/


@protocol OS_dispatch_source, BSInvalidatable;
@class NSObject, NSString;

@interface FigDisplaySleepAssertion : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	NSString* _reason;
	id<BSInvalidatable> _idleTimerAssertion;
	long long _lastIdleTimerResetTime;

}
-(unsigned char)resetIdleTimer;
-(id)initWithReason:(id)arg1 queue:(id)arg2 expirationHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

