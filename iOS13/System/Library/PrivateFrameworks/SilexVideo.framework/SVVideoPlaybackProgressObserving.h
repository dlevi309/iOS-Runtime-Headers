/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/


@protocol SVVideoPlaybackProgressObserving <NSObject>
@property (nonatomic,readonly) double time; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double progress; 
@property (setter=onProgressChanged:,nonatomic,copy) id progressChangedBlock; 
@property (setter=onReset:,nonatomic,copy) id resetBlock; 
@required
-(double)progress;
-(double)duration;
-(double)time;
-(id)resetBlock;
-(id)progressChangedBlock;
-(void)onProgressChanged:(/*^block*/id)arg1;
-(void)onReset:(/*^block*/id)arg1;

@end

