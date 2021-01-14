/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@class NSTimer;

@interface AXUpdateElementVisualsCoalescer : NSObject {

	double _threshold;
	double _progressInterval;
	/*^block*/id _updateVisualsSequenceDidBeginHandler;
	/*^block*/id _updateVisualsSequenceDidFinishHandler;
	/*^block*/id _updateVisualsSequenceInProgressHandler;
	NSTimer* _timer;
	double _lastProgressTime;

}

@property (nonatomic,retain) NSTimer * timer;                                      //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) double lastProgressTime;                              //@synthesize lastProgressTime=_lastProgressTime - In the implementation block
@property (assign,nonatomic) double threshold;                                     //@synthesize threshold=_threshold - In the implementation block
@property (assign,nonatomic) double progressInterval;                              //@synthesize progressInterval=_progressInterval - In the implementation block
@property (nonatomic,copy) id updateVisualsSequenceDidBeginHandler;                //@synthesize updateVisualsSequenceDidBeginHandler=_updateVisualsSequenceDidBeginHandler - In the implementation block
@property (nonatomic,copy) id updateVisualsSequenceDidFinishHandler;               //@synthesize updateVisualsSequenceDidFinishHandler=_updateVisualsSequenceDidFinishHandler - In the implementation block
@property (nonatomic,copy) id updateVisualsSequenceInProgressHandler;              //@synthesize updateVisualsSequenceInProgressHandler=_updateVisualsSequenceInProgressHandler - In the implementation block
-(double)threshold;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(id)init;
-(double)progressInterval;
-(id)updateVisualsSequenceDidBeginHandler;
-(id)updateVisualsSequenceInProgressHandler;
-(id)updateVisualsSequenceDidFinishHandler;
-(void)notifyUpdateElementVisualsEventDidOccur;
-(void)setProgressInterval:(double)arg1 ;
-(void)setUpdateVisualsSequenceDidBeginHandler:(id)arg1 ;
-(void)setUpdateVisualsSequenceDidFinishHandler:(id)arg1 ;
-(double)lastProgressTime;
-(void)setUpdateVisualsSequenceInProgressHandler:(id)arg1 ;
-(void)setLastProgressTime:(double)arg1 ;
-(void)_timerDidFire:(id)arg1 ;
-(void)dealloc;
-(void)setThreshold:(double)arg1 ;
@end

