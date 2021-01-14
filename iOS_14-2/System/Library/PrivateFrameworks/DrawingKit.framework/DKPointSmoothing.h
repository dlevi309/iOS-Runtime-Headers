/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)spacing;
-(void)setSpacing:(float)arg1 ;
-(void)clear;
-(void)flush;
-(unsigned long long)width;
-(void)addPoint:;
-(id)init;
-(void)setUnitScale:(float)arg1 ;
-(BOOL)emitInterpolatedPoints;
-(void)setEmitInterpolatedPoints:(BOOL)arg1 ;
-(void)emitPoint:;
-(void)setWidth:(unsigned long long)arg1 ;
-(id)emissionHandler;
-(void)setEmissionHandler:(id)arg1 ;
-(void)setInterpolatingFIFO:(UIQuadCurvePointFIFO *)arg1 ;
-(UIQuadCurvePointFIFO *)interpolatingFIFO;
-(void)setStrokeFIFO:(UIPointFIFO *)arg1 ;
-(UIPointFIFO *)strokeFIFO;
-(float)unitScale;
-(void)setBoxcarFIFO:(UIBoxcarFilterPointFIFO *)arg1 ;
-(UIBoxcarFilterPointFIFO *)boxcarFIFO;
-(id)initWithWidth:(unsigned long long)arg1 spacing:(float)arg2 ;
@end

