/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSDate;

@interface JTFrameRateCalculator : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _name;
	unsigned long long _receivedRenderCount;
	unsigned long long _droppedRenderCount;
	unsigned long long _receivedDisplayFrameCount;
	unsigned long long _droppedDisplayFrameCount;
	double _windowSize;
	NSDate* _stateDate;

}

@property (assign,nonatomic) unsigned long long receivedRenderCount;                    //@synthesize receivedRenderCount=_receivedRenderCount - In the implementation block
@property (assign,nonatomic) unsigned long long droppedRenderCount;                     //@synthesize droppedRenderCount=_droppedRenderCount - In the implementation block
@property (assign,nonatomic) unsigned long long receivedDisplayFrameCount;              //@synthesize receivedDisplayFrameCount=_receivedDisplayFrameCount - In the implementation block
@property (assign,nonatomic) unsigned long long droppedDisplayFrameCount;               //@synthesize droppedDisplayFrameCount=_droppedDisplayFrameCount - In the implementation block
@property (assign,nonatomic) double windowSize;                                         //@synthesize windowSize=_windowSize - In the implementation block
@property (nonatomic,retain) NSDate * stateDate;                                        //@synthesize stateDate=_stateDate - In the implementation block
@property (nonatomic,copy) NSString * name;                                             //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)log:(/*^block*/id)arg1 ;
-(id)initWithWindowSize:(double)arg1 ;
-(double)windowSize;
-(void)setWindowSize:(double)arg1 ;
-(void)JT_restart;
-(NSDate *)stateDate;
-(unsigned long long)receivedRenderCount;
-(unsigned long long)droppedRenderCount;
-(unsigned long long)droppedDisplayFrameCount;
-(unsigned long long)receivedDisplayFrameCount;
-(void)setReceivedRenderCount:(unsigned long long)arg1 ;
-(void)setDroppedRenderCount:(unsigned long long)arg1 ;
-(void)setReceivedDisplayFrameCount:(unsigned long long)arg1 ;
-(void)setDroppedDisplayFrameCount:(unsigned long long)arg1 ;
-(void)setStateDate:(NSDate *)arg1 ;
-(void)tickReceived;
-(void)tickDropped;
-(void)tickFrameReceived;
-(void)tickDroppedDisplay;
@end

