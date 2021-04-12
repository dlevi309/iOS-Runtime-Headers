/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <DigitalTouchShared/ETPointFIFO.h>

@interface ETQuadCurvePointFIFO : ETPointFIFO {

	BOOL _emitInterpolatedPoints;
	float _unitSize;
	/*^block*/id _emissionHandler;
	 _lastPoint;
	vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* _prevPoints;
	vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* _points;
	vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* _controlPoints;

}

@property (assign,nonatomic) vector<float __attribute__((ext_vector_type(2))) prevPoints;                 //@synthesize prevPoints=_prevPoints - In the implementation block
@property (assign,nonatomic) vector<float __attribute__((ext_vector_type(2))) points;                     //@synthesize points=_points - In the implementation block
@property (assign,nonatomic) vector<float __attribute__((ext_vector_type(2))) controlPoints;              //@synthesize controlPoints=_controlPoints - In the implementation block
@property (assign,nonatomic)  lastPoint;                                                                  //@synthesize lastPoint=_lastPoint - In the implementation block
@property (assign,nonatomic) float unitSize;                                                              //@synthesize unitSize=_unitSize - In the implementation block
@property (assign,nonatomic) BOOL emitInterpolatedPoints;                                                 //@synthesize emitInterpolatedPoints=_emitInterpolatedPoints - In the implementation block
@property (copy) id emissionHandler;                                                                      //@synthesize emissionHandler=_emissionHandler - In the implementation block
-(void)clear;
-(void)flush;
-(id)initWithFIFO:(id)arg1 ;
-(vector<float __attribute__((ext_vector_type(2))))prevPoints;
-(void)setPrevPoints:(vector<float __attribute__((ext_vector_type(2))))arg1 ;
-(vector<float __attribute__((ext_vector_type(2))))points;
-(void)setLastPoint:;
-()lastPoint;
-(vector<float __attribute__((ext_vector_type(2))))controlPoints;
-(id)emissionHandler;
-(void)setEmissionHandler:(id)arg1 ;
-(void)setPoints:(vector<float __attribute__((ext_vector_type(2))))arg1 ;
-(void)setControlPoints:(vector<float __attribute__((ext_vector_type(2))))arg1 ;
-(BOOL)emitInterpolatedPoints;
-(void)setEmitInterpolatedPoints:(BOOL)arg1 ;
-(void)setUnitSize:(float)arg1 ;
-(void)addPoints:(1*)arg1 count:(unsigned long long)arg2 ;
-(float)unitSize;
@end

