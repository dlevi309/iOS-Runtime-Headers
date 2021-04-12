/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface HKStrokeStyle : NSObject <NSCopying> {

	int _lineCap;
	int _lineJoin;
	int _blendMode;
	UIColor* _strokeColor;
	double _lineWidth;
	long long _dashStyle;

}

@property (nonatomic,copy) UIColor * strokeColor;              //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign,nonatomic) double lineWidth;                 //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) int lineCap;                      //@synthesize lineCap=_lineCap - In the implementation block
@property (assign,nonatomic) int lineJoin;                     //@synthesize lineJoin=_lineJoin - In the implementation block
@property (assign,nonatomic) long long dashStyle;              //@synthesize dashStyle=_dashStyle - In the implementation block
@property (assign,nonatomic) int blendMode;                    //@synthesize blendMode=_blendMode - In the implementation block
+(id)strokeStyleWithColor:(id)arg1 lineWidth:(double)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(void)setLineCap:(int)arg1 ;
-(UIColor *)strokeColor;
-(void)setLineJoin:(int)arg1 ;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(int)lineJoin;
-(int)lineCap;
-(void)applyToContext:(CGContextRef)arg1 ;
-(long long)dashStyle;
-(void)setDashStyle:(long long)arg1 ;
@end

