/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPoints:(vector<float __attribute__((ext_vector_type(2))))arg1 ;
-(void)setControlPoints:(vector<float __attribute__((ext_vector_type(2))))arg1 ;
-(BOOL)emitInterpolatedPoints;
-(void)setEmitInterpolatedPoints:(BOOL)arg1 ;
-(vector<float __attribute__((ext_vector_type(2))))prevPoints;
-(void)setPrevPoints:(vector<float __attribute__((ext_vector_type(2))))arg1 ;
-(id)emissionHandler;
-(void)setEmissionHandler:(id)arg1 ;
-()lastPoint;
-(vector<float __attribute__((ext_vector_type(2))))controlPoints;
-(float)unitSize;
-(vector<float __attribute__((ext_vector_type(2))))points;
-(id)initWithFIFO:(id)arg1 ;
-(void)setLastPoint:;
-(void)setUnitSize:(float)arg1 ;
-(void)addPoints:(1*)arg1 count:(unsigned long long)arg2 ;
@end

