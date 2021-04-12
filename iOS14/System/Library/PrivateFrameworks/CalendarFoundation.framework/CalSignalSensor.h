/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface CalSignalSensor : NSObject {

	NSObject*<OS_dispatch_source> _signalSource;
	int _signal;
	/*^block*/id _fireBlock;

}

@property (assign,nonatomic) int signal;              //@synthesize signal=_signal - In the implementation block
@property (nonatomic,copy) id fireBlock;              //@synthesize fireBlock=_fireBlock - In the implementation block
-(id)fireBlock;
-(void)setFireBlock:(id)arg1 ;
-(void)stopSensor;
-(id)description;
-(void)_shutDownSource;
-(void)startSensor;
-(int)signal;
-(void)setSignal:(int)arg1 ;
-(id)initWithSignal:(int)arg1 ;
-(void)dealloc;
@end

