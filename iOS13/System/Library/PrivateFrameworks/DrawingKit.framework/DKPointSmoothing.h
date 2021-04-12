/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
*/


@class UIPointFIFO, UIBoxcarFilterPointFIFO, UIQuadCurvePointFIFO;

@interface DKPointSmoothing : NSObject {

	unsigned long long _width;
	float _spacing;
	float _unitScale;
	BOOL _emitInterpolatedPoints;
	UIPointFIFO* _strokeFIFO;
	UIBoxcarFilterPointFIFO* _boxcarFIFO;
	UIQuadCurvePointFIFO* _interpolatingFIFO;

}

@property (nonatomic,retain) UIPointFIFO * strokeFIFO;                              //@synthesize strokeFIFO=_strokeFIFO - In the implementation block
@property (nonatomic,retain) UIBoxcarFilterPointFIFO * boxcarFIFO;                  //@synthesize boxcarFIFO=_boxcarFIFO - In the implementation block
@property (nonatomic,retain) UIQuadCurvePointFIFO * interpolatingFIFO;              //@synthesize interpolatingFIFO=_interpolatingFIFO - In the implementation block
@property (assign,nonatomic) unsigned long long width;                              //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) float spacing;                                         //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) float unitScale;                                       //@synthesize unitScale=_unitScale - In the implementation block
@property (assign,nonatomic) BOOL emitInterpolatedPoints;                           //@synthesize emitInterpolatedPoints=_emitInterpolatedPoints - In the implementation block
@property (nonatomic,copy) id emissionHandler; 
+(6)interpolateFromPoint:(float)arg1 ;
+(void)_interpolateFromPoint:(float)arg1 toPoint:(/*^block*/id)arg2 ;
-(id)init;
-(void)clear;
-(float)spacing;
-(unsigned long long)width;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)flush;
-(void)addPoint:;
-(void)emitPoint:;
-(void)setSpacing:(float)arg1 ;
-(float)unitScale;
-(void)setUnitScale:(float)arg1 ;
-(id)emissionHandler;
-(void)setEmissionHandler:(id)arg1 ;
-(BOOL)emitInterpolatedPoints;
-(void)setEmitInterpolatedPoints:(BOOL)arg1 ;
-(void)setInterpolatingFIFO:(UIQuadCurvePointFIFO *)arg1 ;
-(UIQuadCurvePointFIFO *)interpolatingFIFO;
-(void)setStrokeFIFO:(UIPointFIFO *)arg1 ;
-(UIPointFIFO *)strokeFIFO;
-(void)setBoxcarFIFO:(UIBoxcarFilterPointFIFO *)arg1 ;
-(UIBoxcarFilterPointFIFO *)boxcarFIFO;
-(id)initWithWidth:(unsigned long long)arg1 spacing:(float)arg2 ;
@end

