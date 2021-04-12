/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol CEKSliderDelegate <NSObject>
@optional
-(void)sliderWillBeginScrolling:(id)arg1;
-(void)sliderDidScroll:(id)arg1;
-(void)slider:(id)arg1 willUpdateValue:(double*)arg2 withVelocity:(double)arg3;
-(void)sliderDidEndScrolling:(id)arg1;
-(void)sliderWillEndScrolling:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3;

@end

