/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)cancel;
-(void)stop;
-(void)start;
-(NSNumber *)measurement;
-(void)setMeasurement:(NSNumber *)arg1 ;
-(id)initWithName:(id)arg1 clientClass:(Class)arg2 ;
-(void)performAction:(/*^block*/id)arg1 ;
-(void)stopWithEvent:(id)arg1 result:(id)arg2 ;
@end

