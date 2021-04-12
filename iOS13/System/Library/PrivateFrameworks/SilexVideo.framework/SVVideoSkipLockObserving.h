/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/


@protocol SVVideoSkipLockObserving <NSObject>
@property (nonatomic,readonly) BOOL locked; 
@property (setter=onUnlock:,nonatomic,copy) id unlockBlock; 
@property (nonatomic,readonly) double countdown; 
@property (setter=onCountDown:,nonatomic,copy) id countdownBlock; 
@required
-(BOOL)locked;
-(double)countdown;
-(void)onUnlock:(/*^block*/id)arg1;
-(id)unlockBlock;
-(id)countdownBlock;
-(void)onCountDown:(/*^block*/id)arg1;

@end

