/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/


@protocol SVVideoDurationObserving <NSObject>
@property (nonatomic,readonly) double duration; 
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
@required
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1;
-(double)duration;

@end

