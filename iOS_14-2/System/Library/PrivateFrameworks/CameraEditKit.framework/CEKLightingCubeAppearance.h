/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGGradientRef)background;
-(CGColorRef)stroke;
-(CGGradientRef)topMask;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CGGradientRef)topGlow;
-(CGColorRef)topFill;
-(CGGradientRef)topOver;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(CGGradientRef)bottomMask;
-(id)initWithStroke:(CGColorRef)arg1 ;
-(CGColorRef)verticalFillColor;
-(CGColorRef)bottomFill;
-(CGGradientRef)bottomOuterGlow;
-(double)verticalFillFrontIntensity;
-(double)verticalFillBackIntensity;
-(CGGradientRef)bottomInnerGlow;
@end

