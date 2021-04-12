/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoPlaybackProgressObserving.h>

@protocol SVVideoPeriodicTimeObserving, SVVideoDurationObserving;
@class NSString;

@interface SVVideoPlaybackProgressObserver : NSObject <SVVideoPlaybackProgressObserving> {

	double _time;
	double _duration;
	double _progress;
	/*^block*/id _resetBlock;
	/*^block*/id _progressChangedBlock;
	id<SVVideoPeriodicTimeObserving> _periodicTimeObserver;
	id<SVVideoDurationObserving> _durationObserver;

}

@property (nonatomic,readonly) id<SVVideoPeriodicTimeObserving> periodicTimeObserver;              //@synthesize periodicTimeObserver=_periodicTimeObserver - In the implementation block
@property (nonatomic,readonly) id<SVVideoDurationObserving> durationObserver;                      //@synthesize durationObserver=_durationObserver - In the implementation block
@property (assign,nonatomic) double time;                                                          //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) double duration;                                                      //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double progress;                                                      //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onProgressChanged:,nonatomic,copy) id progressChangedBlock;                      //@synthesize progressChangedBlock=_progressChangedBlock - In the implementation block
@property (setter=onReset:,nonatomic,copy) id resetBlock;                                          //@synthesize resetBlock=_resetBlock - In the implementation block
-(double)progress;
-(double)duration;
-(double)time;
-(void)setTime:(double)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setProgress:(double)arg1 ;
-(id<SVVideoPeriodicTimeObserving>)periodicTimeObserver;
-(void)updateProgressWithTime:(double)arg1 duration:(double)arg2 ;
-(id<SVVideoDurationObserving>)durationObserver;
-(id)resetBlock;
-(id)progressChangedBlock;
-(void)onProgressChanged:(/*^block*/id)arg1 ;
-(void)onReset:(/*^block*/id)arg1 ;
-(id)initWithPeriodicTimeObserver:(id)arg1 durationObserver:(id)arg2 ;
@end

