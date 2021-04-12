/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
*/

#import <CameraEditKit/CameraEditKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface CEKLightingCubeAppearance : NSObject <NSCopying, NSMutableCopying> {

	CGGradientRef _background;
	CGColorRef _topFill;
	CGGradientRef _topGlow;
	CGGradientRef _topMask;
	CGColorRef _bottomFill;
	CGGradientRef _bottomInnerGlow;
	CGGradientRef _bottomOuterGlow;
	CGGradientRef _bottomMask;
	CGColorRef _verticalFillColor;
	double _verticalFillFrontIntensity;
	double _verticalFillBackIntensity;
	CGGradientRef _topOver;
	CGColorRef _stroke;

}

@property (nonatomic,readonly) CGGradientRef background;                       //@synthesize background=_background - In the implementation block
@property (nonatomic,readonly) CGColorRef topFill;                             //@synthesize topFill=_topFill - In the implementation block
@property (nonatomic,readonly) CGGradientRef topGlow;                          //@synthesize topGlow=_topGlow - In the implementation block
@property (nonatomic,readonly) CGGradientRef topMask;                          //@synthesize topMask=_topMask - In the implementation block
@property (nonatomic,readonly) CGColorRef bottomFill;                          //@synthesize bottomFill=_bottomFill - In the implementation block
@property (nonatomic,readonly) CGGradientRef bottomInnerGlow;                  //@synthesize bottomInnerGlow=_bottomInnerGlow - In the implementation block
@property (nonatomic,readonly) CGGradientRef bottomOuterGlow;                  //@synthesize bottomOuterGlow=_bottomOuterGlow - In the implementation block
@property (nonatomic,readonly) CGGradientRef bottomMask;                       //@synthesize bottomMask=_bottomMask - In the implementation block
@property (nonatomic,readonly) CGColorRef verticalFillColor;                   //@synthesize verticalFillColor=_verticalFillColor - In the implementation block
@property (nonatomic,readonly) double verticalFillBackIntensity;               //@synthesize verticalFillBackIntensity=_verticalFillBackIntensity - In the implementation block
@property (nonatomic,readonly) double verticalFillFrontIntensity;              //@synthesize verticalFillFrontIntensity=_verticalFillFrontIntensity - In the implementation block
@property (nonatomic,readonly) CGGradientRef topOver;                          //@synthesize topOver=_topOver - In the implementation block
@property (nonatomic,readonly) CGColorRef stroke;                              //@synthesize stroke=_stroke - In the implementation block
+(id)appearanceFrom:(id)arg1 to:(id)arg2 progress:(double)arg3 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CGGradientRef)background;
-(CGColorRef)stroke;
-(id)initWithStroke:(CGColorRef)arg1 ;
-(CGColorRef)verticalFillColor;
-(CGGradientRef)topGlow;
-(CGColorRef)bottomFill;
-(CGGradientRef)bottomOuterGlow;
-(double)verticalFillFrontIntensity;
-(double)verticalFillBackIntensity;
-(CGGradientRef)topMask;
-(CGColorRef)topFill;
-(CGGradientRef)bottomMask;
-(CGGradientRef)bottomInnerGlow;
-(CGGradientRef)topOver;
@end

