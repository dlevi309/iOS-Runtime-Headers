/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
*/

#import <RenderBox/RenderBox-Structs.h>
#import <RenderBox/RBShape.h>

@interface RBXMLRecorder_Shape : RBShape {

	vector<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> >, std::__1::allocator<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > > >* _attributes;
	unsigned _seed;

}
-(void)setRect:(CGRect)arg1 ;
-(void)setEmpty;
-(void)setEllipseInRect:(CGRect)arg1 ;
-(void)setStrokedRect:(CGRect)arg1 lineWidth:(double)arg2 ;
-(void)setRoundedRect:(CGRect)arg1 cornerSize:(CGSize)arg2 cornerStyle:(int)arg3 ;
-(void)setStrokedCircleAtPoint:(CGPoint)arg1 radius:(double)arg2 lineWidth:(double)arg3 ;
-(void)setStrokedPath:(CGPathRef)arg1 transform:(CGAffineTransform)arg2 lineWidth:(double)arg3 lineCap:(int)arg4 lineJoin:(int)arg5 miterLimit:(double)arg6 dashPhase:(double)arg7 dashPattern:(const double*)arg8 dashCount:(long long)arg9 ;
-(void)setStrokedRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 cornerStyle:(int)arg3 lineWidth:(double)arg4 ;
-(void)setInfinite;
-(void)setCircleAtPoint:(CGPoint)arg1 radius:(double)arg2 ;
-(void)setPath:(CGPathRef)arg1 transform:(CGAffineTransform)arg2 ;
-(void)setRoundedRect:(CGRect)arg1 cornerRadii:(SCD_Struct_RB3)arg2 cornerStyle:(int)arg3 ;
-(void)setStrokedRoundedRect:(CGRect)arg1 cornerRadii:(SCD_Struct_RB3)arg2 cornerStyle:(int)arg3 lineWidth:(double)arg4 ;
-(void)setGlyphs:(const unsigned short*)arg1 positions:(const CGPoint*)arg2 count:(unsigned long long)arg3 font:(CGFontRef)arg4 renderingStyle:(unsigned)arg5 ;
-(void)setStroke:(id)arg1 ;
-(void)encodeTo:(Tree*)arg1 ;
@end

