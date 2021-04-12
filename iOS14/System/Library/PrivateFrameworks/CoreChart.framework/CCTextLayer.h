/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/

#import <CoreChart/CoreChart-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSArray;

@interface CCTextLayer : CALayer {

	NSArray* _lineContents;
	int _align;
	int _baseline;
	id _font;
	NSArray* _lines;
	double _lineHeight;
	id _strokeColor;
	id _fillColor;
	double _strokeWidth;
	double _textAngle;
	CGPoint _textPosition;
	CGAffineTransform _combinedCTMHint;

}

@property (nonatomic,retain) id font;                                        //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) id fillColor;                                   //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,retain) id strokeColor;                                 //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign,nonatomic) double strokeWidth;                             //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,retain) NSArray * lines;                                //@synthesize lines=_lines - In the implementation block
@property (assign,nonatomic) double lineHeight;                              //@synthesize lineHeight=_lineHeight - In the implementation block
@property (assign,nonatomic) CGAffineTransform combinedCTMHint;              //@synthesize combinedCTMHint=_combinedCTMHint - In the implementation block
@property (assign,nonatomic) int align;                                      //@synthesize align=_align - In the implementation block
@property (assign,nonatomic) int baseline;                                   //@synthesize baseline=_baseline - In the implementation block
@property (assign,nonatomic) CGPoint textPosition;                           //@synthesize textPosition=_textPosition - In the implementation block
@property (assign,nonatomic) double textAngle;                               //@synthesize textAngle=_textAngle - In the implementation block
+(id)layer;
-(void)setFillColor:(id)arg1 ;
-(id)strokeColor;
-(NSArray *)lines;
-(void)setLines:(NSArray *)arg1 ;
-(id)init;
-(int)baseline;
-(void)setFont:(id)arg1 ;
-(id)fillColor;
-(int)align;
-(void)setTextPosition:(CGPoint)arg1 ;
-(CGPoint)textPosition;
-(double)lineHeight;
-(void)renderInContext:(CGContextRef)arg1 ;
-(void)setLineHeight:(double)arg1 ;
-(double)strokeWidth;
-(void)setStrokeColor:(id)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setBaseline:(int)arg1 ;
-(void)setStrokeWidth:(double)arg1 ;
-(id)font;
-(void)setAlign:(int)arg1 ;
-(void)setCombinedCTMHint:(CGAffineTransform)arg1 ;
-(void)setTextAngle:(double)arg1 ;
-(void)updateTextContents;
-(double)textAngle;
-(CGAffineTransform)combinedCTMHint;
@end

