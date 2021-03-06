/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


#import <Silex/Silex-Structs.h>
@class SXComponentView;

@interface SXStrokeRenderer : NSObject {

	SXComponentView* _componentView;

}

@property (nonatomic,__weak,readonly) SXComponentView * componentView;              //@synthesize componentView=_componentView - In the implementation block
-(SXComponentView *)componentView;
-(id)initWithComponentView:(id)arg1 ;
-(id)lineForStyle:(id)arg1 andFrame:(CGRect)arg2 ;
-(id)dottedBorders:(id)arg1 forFrame:(CGRect)arg2 ;
-(id)dashedBorders:(id)arg1 forFrame:(CGRect)arg2 ;
-(id)dottedStrokesForBorder:(id)arg1 withFrame:(CGRect)arg2 ;
-(id)cropImage:(id)arg1 withRect:(CGRect)arg2 ;
-(SCD_Struct_SX23)framesForBorder:(id)arg1 contentSize:(CGSize)arg2 ;
-(CGContextRef)newContextForFrame:(CGRect)arg1 ;
-(void)drawDashedSide:(id)arg1 borderSide:(int)arg2 withStyleFrames:(SCD_Struct_SX23)arg3 inContext:(CGContextRef)arg4 ;
-(id)imageFromContext:(CGContextRef)arg1 ;
-(double)phaseForBorderWidth:(double)arg1 style:(int)arg2 borderSide:(int)arg3 length:(double)arg4 startingGap:(double*)arg5 ;
-(double)dashLengthForWidth:(double)arg1 andStyle:(int)arg2 ;
-(void)drawFullDottedBorder:(id)arg1 withFrame:(CGRect)arg2 inContext:(CGContextRef)arg3 ;
-(id)renderBorders:(id)arg1 forFrame:(CGRect)arg2 ;
@end

