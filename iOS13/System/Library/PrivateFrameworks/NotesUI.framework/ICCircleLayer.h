/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <QuartzCore/CALayer.h>

@interface ICCircleLayer : CALayer {

	double _strokeWidth;
	CGColorRef _strokeColor;
	CGColorRef _fillColor;

}

@property (assign) double strokeWidth;                            //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,retain) CGColorRef strokeColor;              //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,retain) CGColorRef fillColor;                //@synthesize fillColor=_fillColor - In the implementation block
-(CGColorRef)fillColor;
-(void)setFillColor:(CGColorRef)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(CGColorRef)strokeColor;
-(double)strokeWidth;
-(void)setStrokeWidth:(double)arg1 ;
@end

