/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol OS_dispatch_source;
@class NSObject, NSString;

@interface RTTimer : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	NSString* _identifier;

}

@property (readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)suspend;
-(id)init;
-(id)initWithIdentifier:(id)arg1 dispatchSource:(id)arg2 ;
-(void)fireAfterDelay:(double)arg1 ;
-(void)fireWithInterval:(double)arg1 leeway:(double)arg2 ;
-(void)fireWithInterval:(double)arg1 ;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)invalidate;
-(NSString *)identifier;
-(void)fireAfterDelay:(double)arg1 interval:(double)arg2 ;
-(void)fireAfterDelay:(double)arg1 interval:(double)arg2 leeway:(double)arg3 ;
-(void)cancel;
-(void)resume;
-(void)dealloc;
@end

