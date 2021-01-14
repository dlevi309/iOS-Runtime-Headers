/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)invalidated;
-(double)timeout;
-(void)invalidate;
-(void)_timerDidFire;
-(NSString *)identifier;
-(void)dealloc;
-(void)_scheduleTimer;
-(id)_initWithIdentifier:(id)arg1 timeout:(double)arg2 timeoutHandler:(/*^block*/id)arg3 ;
@end

