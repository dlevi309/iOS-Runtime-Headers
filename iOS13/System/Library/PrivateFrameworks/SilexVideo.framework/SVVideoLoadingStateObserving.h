/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

@class NSError;


@protocol SVVideoLoadingStateObserving <NSObject>
@property (nonatomic,readonly) unsigned long long state; 
@property (setter=onStart:,nonatomic,copy) id startBlock; 
@property (setter=onFinished:,nonatomic,copy) id finishedBlock; 
@property (setter=onFailed:,nonatomic,copy) id failedBlock; 
@property (nonatomic,copy,readonly) NSError * error; 
@required
-(NSError *)error;
-(unsigned long long)state;
-(id)finishedBlock;
-(id)failedBlock;
-(id)startBlock;
-(void)onStart:(/*^block*/id)arg1;
-(void)onFinished:(/*^block*/id)arg1;
-(void)onFailed:(/*^block*/id)arg1;

@end

