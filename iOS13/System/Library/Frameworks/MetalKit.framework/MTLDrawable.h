/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
*/


@protocol MTLDrawable <NSObject>
@property (nonatomic,readonly) double presentedTime; 
@property (nonatomic,readonly) unsigned long long drawableID; 
@required
-(void)present;
-(void)presentAtTime:(double)arg1;
-(void)presentAfterMinimumDuration:(double)arg1;
-(void)addPresentedHandler:(/*^block*/id)arg1;
-(double)presentedTime;
-(unsigned long long)drawableID;

@end

