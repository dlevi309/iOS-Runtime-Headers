/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(int)signal;
-(id)fireBlock;
-(void)setFireBlock:(id)arg1 ;
-(void)_shutDownSource;
-(id)initWithSignal:(int)arg1 ;
-(void)startSensor;
-(void)stopSensor;
-(void)setSignal:(int)arg1 ;
@end

