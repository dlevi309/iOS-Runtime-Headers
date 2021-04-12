/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/


@protocol SVVideoViewControllerSizeObserving <NSObject>
@property (nonatomic,readonly) CGSize size; 
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
@required
-(CGSize)size;
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1;

@end

