/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHPointFIFO.h>

@protocol CHPointFIFODrawingTarget;
@interface CHQuadCurvePointFIFO : CHPointFIFO {

	BOOL _emitInterpolatedPoints;
	float _unitScale;
	/*^block*/id _emissionHandler;
	CGPathRef _path;
	double _lineWidth;
	id<CHPointFIFODrawingTarget> _drawingTarget;
	 _lastPoint;
	vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >* _prevPoints;
	vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >* _points;
	vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >* _controlPoints;

}

@property (assign,nonatomic) vector<float __attribute__((ext_vector_type(4))) prevPoints;                 //@synthesize prevPoints=_prevPoints - In the implementation block
@property (assign,nonatomic) vector<float __attribute__((ext_vector_type(4))) points;                     //@synthesize points=_points - In the implementation block
@property (assign,nonatomic) vector<float __attribute__((ext_vector_type(4))) controlPoints;              //@synthesize controlPoints=_controlPoints - In the implementation block
@property (assign,nonatomic)  lastPoint;                                                                  //@synthesize lastPoint=_lastPoint - In the implementation block
@property (nonatomic,retain) id<CHPointFIFODrawingTarget> drawingTarget;                                  //@synthesize drawingTarget=_drawingTarget - In the implementation block
@property (assign,nonatomic) float unitScale;                                                             //@synthesize unitScale=_unitScale - In the implementation block
@property (assign,nonatomic) BOOL emitInterpolatedPoints;                                                 //@synthesize emitInterpolatedPoints=_emitInterpolatedPoints - In the implementation block
@property (copy) id emissionHandler;                                                                      //@synthesize emissionHandler=_emissionHandler - In the implementation block
@property (assign,nonatomic) CGPathRef path;                                                              //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) double lineWidth;                                                            //@synthesize lineWidth=_lineWidth - In the implementation block
+(6)interpolateFromPoint:(float)arg1 ;
-(void)dealloc;
-(void)clear;
-(CGPathRef)path;
-(void)setPath:(CGPathRef)arg1 ;
-(void)flush;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(void)addPoint:;
-(id)initWithFIFO:(id)arg1 ;
-(vector<float __attribute__((ext_vector_type(4))))prevPoints;
-(void)setPrevPoints:(vector<float __attribute__((ext_vector_type(4))))arg1 ;
-(float)unitScale;
-(void)setUnitScale:(float)arg1 ;
-(vector<float __attribute__((ext_vector_type(4))))points;
-(void)setLastPoint:;
-()lastPoint;
-(vector<float __attribute__((ext_vector_type(4))))controlPoints;
-(void)setUnitScaleForViewSize:(CGSize)arg1 normalizedSize:(CGSize)arg2 contentScaleFactor:(double)arg3 ;
-(id)emissionHandler;
-(void)setEmissionHandler:(id)arg1 ;
-(void)setPoints:(vector<float __attribute__((ext_vector_type(4))))arg1 ;
-(void)setControlPoints:(vector<float __attribute__((ext_vector_type(4))))arg1 ;
-(BOOL)emitInterpolatedPoints;
-(void)setEmitInterpolatedPoints:(BOOL)arg1 ;
-(id)initWithFIFO:(id)arg1 drawingTarget:(id)arg2 ;
-(id<CHPointFIFODrawingTarget>)drawingTarget;
-(void)setDrawingTarget:(id<CHPointFIFODrawingTarget>)arg1 ;
@end

