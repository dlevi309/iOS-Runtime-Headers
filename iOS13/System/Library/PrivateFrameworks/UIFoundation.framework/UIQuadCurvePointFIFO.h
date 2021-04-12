/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/UIPointFIFO.h>

@class _UIPointVector, UIView;

@interface UIQuadCurvePointFIFO : UIPointFIFO {

	float _unitScale;
	BOOL _emitInterpolatedPoints;
	CGPathRef _path;
	double _lineWidth;
	/*^block*/id _emissionHandler;
	_UIPointVector* _prevPoints;
	_UIPointVector* _points;
	_UIPointVector* _controlPoints;
	 _lastPoint;
	UIView* _view;

}

@property (assign,nonatomic) float unitScale;                             //@synthesize unitScale=_unitScale - In the implementation block
@property (assign,nonatomic) BOOL emitInterpolatedPoints;                 //@synthesize emitInterpolatedPoints=_emitInterpolatedPoints - In the implementation block
@property (copy) id emissionHandler;                                      //@synthesize emissionHandler=_emissionHandler - In the implementation block
@property (assign,nonatomic) CGPathRef path;                              //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) double lineWidth;                            //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) _UIPointVector * prevPoints;                 //@synthesize prevPoints=_prevPoints - In the implementation block
@property (assign,nonatomic) _UIPointVector * points;                     //@synthesize points=_points - In the implementation block
@property (assign,nonatomic) _UIPointVector * controlPoints;              //@synthesize controlPoints=_controlPoints - In the implementation block
@property (assign,nonatomic)  lastPoint;                                  //@synthesize lastPoint=_lastPoint - In the implementation block
@property (nonatomic,retain) UIView * view;                               //@synthesize view=_view - In the implementation block
+(6)interpolateFromPoint:(float)arg1 ;
-(void)dealloc;
-(void)clear;
-(CGPathRef)path;
-(void)setPath:(CGPathRef)arg1 ;
-(void)flush;
-(UIView *)view;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(void)addPoint:;
-(id)initWithFIFO:(id)arg1 ;
-(_UIPointVector *)prevPoints;
-(void)setPrevPoints:(_UIPointVector *)arg1 ;
-(float)unitScale;
-(void)setUnitScale:(float)arg1 ;
-(_UIPointVector *)points;
-(void)setLastPoint:;
-()lastPoint;
-(void)enumerateInterpolationFromPoint:(/*^block*/id)arg1 ;
-(_UIPointVector *)controlPoints;
-(id)initWithFIFO:(id)arg1 strokeView:(id)arg2 ;
-(void)setUnitScaleForViewSize:(CGSize)arg1 normalizedSize:(CGSize)arg2 contentScaleFactor:(double)arg3 ;
-(id)emissionHandler;
-(void)setEmissionHandler:(id)arg1 ;
-(void)setPoints:(_UIPointVector *)arg1 ;
-(void)setControlPoints:(_UIPointVector *)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(BOOL)emitInterpolatedPoints;
-(void)setEmitInterpolatedPoints:(BOOL)arg1 ;
@end

