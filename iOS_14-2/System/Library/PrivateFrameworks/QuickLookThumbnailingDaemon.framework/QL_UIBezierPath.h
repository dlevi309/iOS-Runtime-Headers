/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
*/


#import <QuickLookThumbnailingDaemon/QuickLookThumbnailingDaemon-Structs.h>
@interface QL_UIBezierPath : NSObject {

	CGPathRef _CGPath;
	double _lineWidth;

}

@property (assign,nonatomic) CGPathRef CGPath;              //@synthesize CGPath=_CGPath - In the implementation block
@property (assign,nonatomic) double lineWidth;              //@synthesize lineWidth=_lineWidth - In the implementation block
+(id)_roundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(unsigned long long)arg2 cornerRadius:(double)arg3 segments:(int)arg4 legacyCorners:(BOOL)arg5 ;
+(id)_continuousRoundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(unsigned long long)arg2 cornerRadii:(id)arg3 segments:(int)arg4 smoothPillShapes:(BOOL)arg5 ;
+(id)_continuousRoundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(unsigned long long)arg2 cornerRadius:(CGSize)arg3 segments:(int)arg4 ;
+(id)bezierPathWithRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
+(id)_bezierPathWithRoundedRect:(CGRect)arg1 byRoundingCorners:(unsigned long long)arg2 cornerRadius:(double)arg3 ;
+(id)valueWithCGSize:(CGSize)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(CGPathRef)CGPath;
-(id)_initWithCGMutablePath:(CGPathRef)arg1 ;
-(void)setCGPath:(CGPathRef)arg1 ;
@end

