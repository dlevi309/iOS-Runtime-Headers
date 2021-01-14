/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
*/


@interface AVHapticSequenceEntry : NSObject {

	/*^block*/id _handler;
	BOOL _running;
	BOOL _detached;

}

@property (copy) id handler;                   //@synthesize handler=_handler - In the implementation block
@property (assign) BOOL running;               //@synthesize running=_running - In the implementation block
@property (assign) BOOL detached;              //@synthesize detached=_detached - In the implementation block
-(void)setRunning:(BOOL)arg1 ;
-(BOOL)running;
-(BOOL)detached;
-(void)setHandler:(id)arg1 ;
-(void)setDetached:(BOOL)arg1 ;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(id)handler;
@end

