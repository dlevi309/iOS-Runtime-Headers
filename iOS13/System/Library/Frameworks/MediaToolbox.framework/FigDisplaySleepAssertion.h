/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithReason:(id)arg1 queue:(id)arg2 expirationHandler:(/*^block*/id)arg3 ;
-(unsigned char)resetIdleTimer;
@end

