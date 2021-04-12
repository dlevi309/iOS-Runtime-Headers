/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
*/


@interface ETPointFIFO : NSObject {

	ETPointFIFO* _nextFIFO;

}

@property (nonatomic,retain) ETPointFIFO * nextFIFO;              //@synthesize nextFIFO=_nextFIFO - In the implementation block
-(void)clear;
-(void)flush;
-(ETPointFIFO *)nextFIFO;
-(id)initWithFIFO:(id)arg1 ;
-(void)setNextFIFO:(ETPointFIFO *)arg1 ;
-(void)addPoints:(1*)arg1 count:(unsigned long long)arg2 ;
-(void)emitPoints:(1*)arg1 count:(unsigned long long)arg2 ;
@end

