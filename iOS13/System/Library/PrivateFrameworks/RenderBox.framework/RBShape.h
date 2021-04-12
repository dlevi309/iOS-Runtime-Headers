/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
*/


#import <RenderBox/RenderBox-Structs.h>
@interface RBShape : NSObject {

	RBShapeData _data;
	InlineHeap<256>* _heap;
	BOOL _antialiased;
	BOOL _eoFill;

}

@property (nonatomic,readonly) RBShapeData* shapeData; 
@property (assign,getter=isAntialiased,nonatomic) BOOL antialiased;              //@synthesize antialiased=_antialiased - In the implementation block
@property (assign,nonatomic) BOOL EOFill;                                        //@synthesize eoFill=_eoFill - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setPath:(CGPathRef)arg1 ;
-(void)setRect:(CGRect)arg1 ;
-(void)setStroke:(id)arg1 ;
-(BOOL)isAntialiased;
-(void)setAntialiased:(BOOL)arg1 ;
-(void)setInfinite;
-(void)setEmpty;
-(void)setRoundedRect:(CGRect)arg1 cornerSize:(CGSize)arg2 cornerStyle:(int)arg3 ;
-(void)setCircleAtPoint:(CGPoint)arg1 radius:(double)arg2 ;
-(void)setPath:(CGPathRef)arg1 transform:(CGAffineTransform)arg2 ;
-(void)setEllipseInRect:(CGRect)arg1 ;
-(void)setStrokedRect:(CGRect)arg1 lineWidth:(double)arg2 ;
-(void)setStrokedCircleAtPoint:(CGPoint)arg1 radius:(double)arg2 lineWidth:(double)arg3 ;
-(void)setStrokedRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 cornerStyle:(int)arg3 lineWidth:(double)arg4 ;
-(void)setStrokedPath:(CGPathRef)arg1 transform:(CGAffineTransform)arg2 lineWidth:(double)arg3 lineCap:(int)arg4 lineJoin:(int)arg5 miterLimit:(double)arg6 dashPhase:(double)arg7 dashPattern:(const double*)arg8 dashCount:(long long)arg9 ;
-(RBShapeData*)shapeData;
-(void)setEOFill:(BOOL)arg1 ;
-(void)setRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 cornerStyle:(int)arg3 ;
-(void)setRoundedRect:(CGRect)arg1 cornerRadii:(SCD_Struct_RB3)arg2 cornerStyle:(int)arg3 ;
-(void)setStrokedRoundedRect:(CGRect)arg1 cornerRadii:(SCD_Struct_RB3)arg2 cornerStyle:(int)arg3 lineWidth:(double)arg4 ;
-(void)setStrokedPath:(CGPathRef)arg1 transform:(CGAffineTransform)arg2 lineWidth:(double)arg3 lineCap:(int)arg4 lineJoin:(int)arg5 miterLimit:(double)arg6 ;
-(void)setGlyphs:(const unsigned short*)arg1 positions:(const CGPoint*)arg2 count:(unsigned long long)arg3 font:(CGFontRef)arg4 renderingStyle:(unsigned)arg5 ;
-(void)setStrokedGlyph:(unsigned short)arg1 font:(CGFontRef)arg2 transform:(CGAffineTransform)arg3 lineWidth:(double)arg4 lineCap:(int)arg5 lineJoin:(int)arg6 miterLimit:(double)arg7 dashPhase:(double)arg8 dashPattern:(const double*)arg9 dashCount:(long long)arg10 ;
-(BOOL)EOFill;
@end

