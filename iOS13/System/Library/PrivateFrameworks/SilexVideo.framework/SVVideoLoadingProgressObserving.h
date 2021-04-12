/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/


@protocol SVVideoLoadingProgressObserving <NSObject>
@property (nonatomic,readonly) double progress; 
@property (setter=onProgressChanged:,nonatomic,copy) id progressChangedBlock; 
@required
-(double)progress;
-(id)progressChangedBlock;
-(void)onProgressChanged:(/*^block*/id)arg1;

@end

