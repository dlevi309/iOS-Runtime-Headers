/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
*/

#import <RenderBox/RenderBox-Structs.h>
#import <RenderBox/RBFill.h>

@interface RBXMLRecorder_Fill : RBFill {

	vector<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> >, std::__1::allocator<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > > >* _attributes;
	unsigned _seed;

}
-(void)setColor:(SCD_Struct_RB31)arg1 ;
-(void)setRBImage:(SCD_Struct_RB34*)arg1 transform:(CGAffineTransform)arg2 interpolation:(int)arg3 tintColor:(SCD_Struct_RB31)arg4 flags:(unsigned)arg5 ;
-(void)set9PartRBImage:(SCD_Struct_RB34*)arg1 transform:(CGAffineTransform)arg2 destinationRect:(CGRect)arg3 capInsets:(SCD_Struct_RB3)arg4 repeat:(BOOL)arg5 interpolation:(int)arg6 tintColor:(SCD_Struct_RB31)arg7 flags:(unsigned)arg8 ;
-(void)setTiledRBImage:(SCD_Struct_RB34*)arg1 transform:(CGAffineTransform)arg2 sourceRect:(CGRect)arg3 interpolation:(int)arg4 tintColor:(SCD_Struct_RB31)arg5 flags:(unsigned)arg6 ;
-(void)setConicGradientCenter:(CGPoint)arg1 angle:(double)arg2 stopCount:(long long)arg3 colors:(const SCD_Struct_RB31*)arg4 locations:(const double*)arg5 flags:(unsigned)arg6 ;
-(void)setRadialGradientCenter:(CGPoint)arg1 startRadius:(double)arg2 endRadius:(double)arg3 stopCount:(long long)arg4 colors:(const SCD_Struct_RB31*)arg5 locations:(const double*)arg6 flags:(unsigned)arg7 ;
-(void)setAxialGradientStartPoint:(CGPoint)arg1 endPoint:(CGPoint)arg2 stopCount:(long long)arg3 colors:(const SCD_Struct_RB31*)arg4 locations:(const double*)arg5 flags:(unsigned)arg6 ;
-(void)encodeTo:(Tree*)arg1 ;
@end

