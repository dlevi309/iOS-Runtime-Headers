/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIMotionDetection.h>

@interface HMIDenseOpticalFlowMotionDetection : HMIMotionDetection {

	CVBufferRef _pixelBufferUV;
	CGSize _size;

}

@property (assign) CVBufferRef pixelBufferUV;              //@synthesize pixelBufferUV=_pixelBufferUV - In the implementation block
@property (readonly) CGSize size;                          //@synthesize size=_size - In the implementation block
-(CGSize)size;
-(void)setPixelBufferUV:(CVBufferRef)arg1 ;
-(id)classMotionScoreMap;
-(id)classPaddingMap;
-(float)scoreForSubBoundingBox:(CGRect)arg1 forMetric:(long long)arg2 ;
-(CVBufferRef)pixelBufferUV;
-(id)initWithBoundingBox:(CGRect)arg1 size:(CGSize)arg2 pixelBufferUV:(CVBufferRef)arg3 ;
-(BOOL)applyEventTypeAndCheckIfSubBoundingIsStatic:(CGRect)arg1 forMetric:(long long)arg2 eventType:(long long)arg3 confidence:(float)arg4 ;
@end

