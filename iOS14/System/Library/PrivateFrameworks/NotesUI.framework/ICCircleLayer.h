/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFillColor:(CGColorRef)arg1 ;
-(CGColorRef)strokeColor;
-(CGColorRef)fillColor;
-(double)strokeWidth;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setStrokeWidth:(double)arg1 ;
@end

