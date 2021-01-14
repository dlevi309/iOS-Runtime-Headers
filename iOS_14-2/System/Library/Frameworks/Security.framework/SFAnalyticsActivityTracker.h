/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSNumber;

@interface SFAnalyticsActivityTracker : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _name;
	Class _clientClass;
	unsigned long long _start;
	BOOL _canceled;
	NSNumber* _measurement;

}

@property (retain) NSNumber * measurement;              //@synthesize measurement=_measurement - In the implementation block
-(void)start;
-(NSNumber *)measurement;
-(id)initWithName:(id)arg1 clientClass:(Class)arg2 ;
-(void)stopWithEvent:(id)arg1 result:(id)arg2 ;
-(void)setMeasurement:(NSNumber *)arg1 ;
-(void)stop;
-(void)cancel;
-(void)performAction:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

