/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
*/


@interface ETPointFIFO : NSObject {

	ETPointFIFO* _nextFIFO;

}

@property (nonatomic,retain) ETPointFIFO * nextFIFO;              //@synthesize nextFIFO=_nextFIFO - In the implementation block
-(void)clear;
-(void)flush;
-(void)setNextFIFO:(ETPointFIFO *)arg1 ;
-(ETPointFIFO *)nextFIFO;
-(id)initWithFIFO:(id)arg1 ;
-(void)addPoints:(1*)arg1 count:(unsigned long long)arg2 ;
-(void)emitPoints:(1*)arg1 count:(unsigned long long)arg2 ;
@end

