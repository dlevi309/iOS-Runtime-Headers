/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
*/


@interface SequenceEntry : NSObject {

	/*^block*/id _handler;
	BOOL _running;
	BOOL _detached;

}

@property (copy) id handler;                   //@synthesize handler=_handler - In the implementation block
@property (assign) BOOL running;               //@synthesize running=_running - In the implementation block
@property (assign) BOOL detached;              //@synthesize detached=_detached - In the implementation block
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(BOOL)running;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(BOOL)detached;
-(void)setDetached:(BOOL)arg1 ;
@end

