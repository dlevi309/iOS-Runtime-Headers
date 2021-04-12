/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXMutablePinchTracker <NSObject>
@property (assign,nonatomic) CGPoint pinchLocation1; 
@property (assign,nonatomic) CGPoint pinchLocation2; 
@property (assign,nonatomic) double time; 
@required
-(double)time;
-(void)setTime:(double)arg1;
-(CGPoint)pinchLocation1;
-(CGPoint)pinchLocation2;
-(void)setPinchLocation2:(CGPoint)arg1;
-(void)setPinchLocation1:(CGPoint)arg1;

@end

