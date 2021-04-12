/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_source;
@class NSObject, NSString;

@interface HDPowerAssertion : NSObject {

	unsigned _assertionID;
	NSObject*<OS_dispatch_source> _timer;
	/*^block*/id _timeoutHandler;
	AB _invalidated;
	NSString* _identifier;
	double _timeout;

}

@property (readonly) BOOL invalidated; 
@property (copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) double timeout;                          //@synthesize timeout=_timeout - In the implementation block
+(id)powerAssertionWithIdentifier:(id)arg1 timeout:(double)arg2 timeoutHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(NSString *)identifier;
-(double)timeout;
-(BOOL)invalidated;
-(void)_scheduleTimer;
-(void)_timerDidFire;
-(id)_initWithIdentifier:(id)arg1 timeout:(double)arg2 timeoutHandler:(/*^block*/id)arg3 ;
@end

