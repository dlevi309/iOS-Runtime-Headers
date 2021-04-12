/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol OS_dispatch_source;
@class NSObject, NSString;

@interface RTTimer : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	NSString* _identifier;

}

@property (readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(NSString *)identifier;
-(void)cancel;
-(void)resume;
-(void)suspend;
-(void)fireAfterDelay:(double)arg1 ;
-(void)fireAfterDelay:(double)arg1 interval:(double)arg2 ;
-(void)fireAfterDelay:(double)arg1 interval:(double)arg2 leeway:(double)arg3 ;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithIdentifier:(id)arg1 dispatchSource:(id)arg2 ;
-(void)fireWithInterval:(double)arg1 ;
-(void)fireWithInterval:(double)arg1 leeway:(double)arg2 ;
@end

