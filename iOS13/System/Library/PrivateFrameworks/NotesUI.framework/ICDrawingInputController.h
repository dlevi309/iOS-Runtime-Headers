/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@protocol OS_dispatch_queue, ICDrawingInputControllerDelegate, OS_dispatch_semaphore;
#import <NotesUI/NotesUI-Structs.h>
@class NSObject, ICDrawingCommandData;

@interface ICDrawingInputController : NSObject {

	vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> >* _drawPoints;
	NSObject*<OS_dispatch_queue> _inputQueue;
	NSObject*<OS_dispatch_queue> _outputQueue;
	id<ICDrawingInputControllerDelegate> _delegate;
	ICDrawingCommandData* _currentCommand;
	long long _currentInputType;
	BOOL _ended;
	double _inputScale;
	float _smoothingKernel[7];
	long long _immutableCount;
	vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> >* _updatedDrawPoints;
	BOOL _drawingEndedButNotFinished;
	NSObject*<OS_dispatch_semaphore> _drawingWaitForFinishSemaphore;
	BOOL _isSnappedToRuler;
	BOOL _useRuler;
	BOOL _isSnappedToRulerTopSide;
	BOOL _canSnapToRuler;
	double _eraserIndicatorAlpha;
	double _rulerWidth;
	double _strokeMaxForce;
	double _touchSensitivity;
	ICDrawingPixelSmoothingFilter* _pixelSmoothingFilter;
	ICDrawingPointReductionFilter* _pointReductionFilter;
	ICDrawingStartHookFilter* _startHookFilter;
	ICDrawingEndHookFilter* _endHookFilter;
	ICDrawingVelocityCalculationFilter* _velocityFilter;
	ICDrawingInputSmoother* _inputSmoother;
	ICDrawingInputProviderInitial* _inputProvider;
	ICDrawingInputToOutputFilter* _inputToOutputFilter;
	ICDrawingAzimuthFilter* _azimuthFilter;
	ICDrawingEndCapsFilter* _endCapFilter;
	ICDrawingRulerExtremaFilter* _rulerExtremaFilter;
	ICDrawingEstimatedAltitudeAndAzimuthFilter* _estimatedAltitudeAndAzimuthFilter;
	CGPoint _lastPoint;
	CGAffineTransform _rulerTransform;

}

@property (assign,nonatomic) CGAffineTransform rulerTransform;                                                           //@synthesize rulerTransform=_rulerTransform - In the implementation block
@property (assign,nonatomic) BOOL useRuler;                                                                              //@synthesize useRuler=_useRuler - In the implementation block
@property (assign,nonatomic) double rulerWidth;                                                                          //@synthesize rulerWidth=_rulerWidth - In the implementation block
@property (assign,nonatomic) BOOL isSnappedToRulerTopSide;                                                               //@synthesize isSnappedToRulerTopSide=_isSnappedToRulerTopSide - In the implementation block
@property (assign) BOOL isSnappedToRuler;                                                                                //@synthesize isSnappedToRuler=_isSnappedToRuler - In the implementation block
@property (assign,nonatomic) BOOL canSnapToRuler;                                                                        //@synthesize canSnapToRuler=_canSnapToRuler - In the implementation block
@property (assign,nonatomic) double strokeMaxForce;                                                                      //@synthesize strokeMaxForce=_strokeMaxForce - In the implementation block
@property (assign) CGPoint lastPoint;                                                                                    //@synthesize lastPoint=_lastPoint - In the implementation block
@property (assign,nonatomic) double touchSensitivity;                                                                    //@synthesize touchSensitivity=_touchSensitivity - In the implementation block
@property (assign,nonatomic) ICDrawingPixelSmoothingFilter* pixelSmoothingFilter;                                        //@synthesize pixelSmoothingFilter=_pixelSmoothingFilter - In the implementation block
@property (assign,nonatomic) ICDrawingPointReductionFilter* pointReductionFilter;                                        //@synthesize pointReductionFilter=_pointReductionFilter - In the implementation block
@property (assign,nonatomic) ICDrawingStartHookFilter* startHookFilter;                                                  //@synthesize startHookFilter=_startHookFilter - In the implementation block
@property (assign,nonatomic) ICDrawingEndHookFilter* endHookFilter;                                                      //@synthesize endHookFilter=_endHookFilter - In the implementation block
@property (assign,nonatomic) ICDrawingVelocityCalculationFilter* velocityFilter;                                         //@synthesize velocityFilter=_velocityFilter - In the implementation block
@property (assign,nonatomic) ICDrawingInputSmoother* inputSmoother;                                                      //@synthesize inputSmoother=_inputSmoother - In the implementation block
@property (assign,nonatomic) ICDrawingInputProviderInitial* inputProvider;                                               //@synthesize inputProvider=_inputProvider - In the implementation block
@property (assign,nonatomic) ICDrawingInputToOutputFilter* inputToOutputFilter;                                          //@synthesize inputToOutputFilter=_inputToOutputFilter - In the implementation block
@property (assign,nonatomic) ICDrawingAzimuthFilter* azimuthFilter;                                                      //@synthesize azimuthFilter=_azimuthFilter - In the implementation block
@property (assign,nonatomic) ICDrawingEndCapsFilter* endCapFilter;                                                       //@synthesize endCapFilter=_endCapFilter - In the implementation block
@property (assign,nonatomic) ICDrawingRulerExtremaFilter* rulerExtremaFilter;                                            //@synthesize rulerExtremaFilter=_rulerExtremaFilter - In the implementation block
@property (assign,nonatomic) ICDrawingEstimatedAltitudeAndAzimuthFilter* estimatedAltitudeAndAzimuthFilter;              //@synthesize estimatedAltitudeAndAzimuthFilter=_estimatedAltitudeAndAzimuthFilter - In the implementation block
@property (readonly) BOOL lastPointIsMasked; 
@property (assign,nonatomic) double eraserIndicatorAlpha;                                                                //@synthesize eraserIndicatorAlpha=_eraserIndicatorAlpha - In the implementation block
+(void)initialize;
+(void)setupDefaults;
+(void)loadDefaults;
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)setInputScale:(double)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setLastPoint:(CGPoint)arg1 ;
-(CGPoint)lastPoint;
-(void)drawingUpdatePoint:(SCD_Struct_IC16)arg1 ;
-(void)drawingCancelledWithCompletion:(/*^block*/id)arg1 ;
-(double)eraserIndicatorAlpha;
-(void)setEraserIndicatorAlpha:(double)arg1 ;
-(double)rulerWidth;
-(CGAffineTransform)rulerTransform;
-(BOOL)isSnappedToRuler;
-(void)setRulerTransform:(CGAffineTransform)arg1 ;
-(BOOL)lastPointIsMasked;
-(void)setUseRuler:(BOOL)arg1 ;
-(void)setCanSnapToRuler:(BOOL)arg1 ;
-(void)setIsSnappedToRuler:(BOOL)arg1 ;
-(void)setStrokeMaxForce:(double)arg1 ;
-(void)setTouchSensitivity:(double)arg1 ;
-(ICDrawingInputProvider<ICDrawingOutputPoint>*)outputFilter;
-(void)setRulerWidth:(double)arg1 ;
-(BOOL)isSnappedToRulerTopSide;
-(BOOL)useRuler;
-(double)distanceToRulerCenter:(CGPoint)arg1 ;
-(void)setIsSnappedToRulerTopSide:(BOOL)arg1 ;
-(CGPoint)snapPointToRuler:(CGPoint)arg1 ;
-(CGPoint)getRulerSnapLineOriginAndTangent:(CGPoint*)arg1 andNormal:(CGPoint*)arg2 ;
-(BOOL)canSnapToRuler;
-(BOOL)shouldSnapPointToRuler:(CGPoint)arg1 ;
-(void)snapToRuler;
-(void)maskToRuler;
-(unsigned long long)copyInputUpdatedRangeFromIndex:(unsigned long long)arg1 into:(vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> >*)arg2 ;
-(void)drawingUpdateAllPoints;
-(void)updateImmutableCount;
-(void)_drawingAddPoint:(SCD_Struct_IC16)arg1 ;
-(void)removePredictedTouches;
-(void)updateRulerSnapping;
-(vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >*)getUpdatedRangeFromIndex:(inout unsigned long long*)arg1 ;
-(vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> >*)getInputUpdatedRangeFromIndex:(inout unsigned long long*)arg1 ;
-(double)strokeMaxForce;
-(double)touchSensitivity;
-(ICDrawingInputProviderInitial*)inputProvider;
-(void)setInputProvider:(ICDrawingInputProviderInitial*)arg1 ;
-(ICDrawingPixelSmoothingFilter*)pixelSmoothingFilter;
-(void)setPixelSmoothingFilter:(ICDrawingPixelSmoothingFilter*)arg1 ;
-(ICDrawingPointReductionFilter*)pointReductionFilter;
-(void)setPointReductionFilter:(ICDrawingPointReductionFilter*)arg1 ;
-(ICDrawingStartHookFilter*)startHookFilter;
-(void)setStartHookFilter:(ICDrawingStartHookFilter*)arg1 ;
-(ICDrawingEndHookFilter*)endHookFilter;
-(void)setEndHookFilter:(ICDrawingEndHookFilter*)arg1 ;
-(ICDrawingVelocityCalculationFilter*)velocityFilter;
-(void)setVelocityFilter:(ICDrawingVelocityCalculationFilter*)arg1 ;
-(ICDrawingInputSmoother*)inputSmoother;
-(void)setInputSmoother:(ICDrawingInputSmoother*)arg1 ;
-(ICDrawingInputToOutputFilter*)inputToOutputFilter;
-(void)setInputToOutputFilter:(ICDrawingInputToOutputFilter*)arg1 ;
-(ICDrawingAzimuthFilter*)azimuthFilter;
-(void)setAzimuthFilter:(ICDrawingAzimuthFilter*)arg1 ;
-(ICDrawingEndCapsFilter*)endCapFilter;
-(void)setEndCapFilter:(ICDrawingEndCapsFilter*)arg1 ;
-(ICDrawingRulerExtremaFilter*)rulerExtremaFilter;
-(void)setRulerExtremaFilter:(ICDrawingRulerExtremaFilter*)arg1 ;
-(ICDrawingEstimatedAltitudeAndAzimuthFilter*)estimatedAltitudeAndAzimuthFilter;
-(void)setEstimatedAltitudeAndAzimuthFilter:(ICDrawingEstimatedAltitudeAndAzimuthFilter*)arg1 ;
-(SCD_Struct_IC17)baseValuesforCommandType:(unsigned)arg1 inputType:(long long)arg2 ;
-(SCD_Struct_IC18)parametersforCommandType:(unsigned)arg1 ;
-(double)baseRadiusForCommandType:(unsigned)arg1 inputType:(long long)arg2 ;
-(double)rulerOffset;
-(SCD_Struct_IC17)outputCurrentCommandPoint:(SCD_Struct_IC16)arg1 ;
-(SCD_Struct_IC17)outputPoint:(SCD_Struct_IC16)arg1 forCommandType:(unsigned)arg2 baseValues:(SCD_Struct_IC17)arg3 ;
-(SCD_Struct_IC17)penOutputPoint:(SCD_Struct_IC16)arg1 baseValues:(SCD_Struct_IC17)arg2 ;
-(SCD_Struct_IC17)pencilOutputPoint:(SCD_Struct_IC16)arg1 baseValues:(SCD_Struct_IC17)arg2 ;
-(SCD_Struct_IC17)markerOutputPoint:(SCD_Struct_IC16)arg1 baseValues:(SCD_Struct_IC17)arg2 ;
-(void)handleMarkerStartCapPoint:(SCD_Struct_IC17*)arg1 forInput:(SCD_Struct_IC16*)arg2 ;
-(SCD_Struct_IC17)eraserOutputPoint:(SCD_Struct_IC16)arg1 baseValues:(SCD_Struct_IC17)arg2 ;
-(SCD_Struct_IC16)calculateVelocityForNewPoint:(SCD_Struct_IC16)arg1 previousPoint:(SCD_Struct_IC16)arg2 ;
-(SCD_Struct_IC16)calculateVelocityForFirstPoint:(SCD_Struct_IC16)arg1 ;
-(void)drawingBeganWithCommand:(id)arg1 inputType:(long long)arg2 start:(/*^block*/id)arg3 ;
-(void)snapToRuler:(CGAffineTransform)arg1 width:(double)arg2 ;
-(void)drawingAddPoints:(vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> >*)arg1 ;
-(void)drawingAddPoint:(SCD_Struct_IC16)arg1 ;
-(void)drawingEndedWithPreCompletion:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end

