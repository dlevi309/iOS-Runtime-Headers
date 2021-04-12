/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@interface PKImageResizingConstraints : NSObject {

	int _constraintType;
	double _fixedDimension;
	CGSize _size;
	double _minAspectRatio;
	double _maxAspectRatio;
	BOOL _respectAspectRatioRange;
	BOOL _outputMirrored;
	double _outputScale;
	double _outputBorderTrim;
	double _outputCornerRadius;

}

@property (assign,nonatomic) double outputScale;                     //@synthesize outputScale=_outputScale - In the implementation block
@property (assign,nonatomic) double outputBorderTrim;                //@synthesize outputBorderTrim=_outputBorderTrim - In the implementation block
@property (assign,nonatomic) double outputCornerRadius;              //@synthesize outputCornerRadius=_outputCornerRadius - In the implementation block
@property (assign,nonatomic) BOOL outputMirrored;                    //@synthesize outputMirrored=_outputMirrored - In the implementation block
+(id)constraintsWithAspectFillToSize:(CGSize)arg1 ;
+(id)constraintsWithFixedWidth:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3 ;
+(id)constraintsWithFixedHeight:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3 ;
+(id)constraintsWithFixedLargeDimenstion:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3 ;
+(id)constraintsWithFixedSmallDimenstion:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3 ;
+(id)constraintsWithMaxSize:(CGSize)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3 ;
+(id)constraintsWithMinSize:(CGSize)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3 ;
+(id)constraintsWithMaxSize:(CGSize)arg1 ;
+(id)constraintsWithMinSize:(CGSize)arg1 ;
+(id)constraintsWithFixedSize:(CGSize)arg1 ;
+(id)constraintsWithAspectFitToSize:(CGSize)arg1 ;
-(id)init;
-(BOOL)getPixelCropRect:(CGRect*)arg1 pixelOutputSize:(CGSize*)arg2 forImage:(id)arg3 ;
-(double)outputScale;
-(BOOL)outputMirrored;
-(id)resizedImage:(id)arg1 ;
-(CGRect)_getDrawRectForImage:(CGImageRef)arg1 withOutputSize:(CGSize)arg2 ;
-(BOOL)_getPixelCropRect:(CGRect*)arg1 pixelOutputSize:(CGSize*)arg2 forImageSize:(CGSize)arg3 scale:(double)arg4 ;
-(id)_flippedConstraints;
-(void)setOutputScale:(double)arg1 ;
-(BOOL)_reasonable;
-(double)outputBorderTrim;
-(void)setOutputBorderTrim:(double)arg1 ;
-(double)outputCornerRadius;
-(void)setOutputCornerRadius:(double)arg1 ;
-(void)setOutputMirrored:(BOOL)arg1 ;
@end

