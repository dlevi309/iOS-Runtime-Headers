/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWFilterRendererParameters <NSObject,NSCopying>
@property (nonatomic,readonly) short type; 
@property (nonatomic,readonly) float interpolationFractionComplete; 
@required
-(float)interpolationFractionComplete;
-(int)prepareForRenderingWithInputVideoFormat:(id)arg1;
-(void)updateByInterpolatingFromParameters:(id)arg1 toParameters:(id)arg2 withFractionComplete:(float)arg3;
-(short)type;

@end

