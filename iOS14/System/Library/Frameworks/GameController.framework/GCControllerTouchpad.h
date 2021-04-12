/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCControllerElement.h>

@class NSString, GCControllerButtonInput, GCControllerDirectionPad;

@interface GCControllerTouchpad : GCControllerElement {

	float _touchpadRelativeWindowSize;
	float _touchpadRelativeOriginBufferSize;
	long long _touchState;
	BOOL _leftBufferZone;
	BOOL _beganTouchOutsideBounds;
	float _previousButtonState;
	CGPoint _absoluteWindowLocation;
	CGPoint _absolutePosition;
	CGPoint _absoluteTouchDownPosition;
	CGPoint _relativePosition;
	NSString* _descriptionName;
	BOOL _reportsAbsoluteTouchSurfaceValues;
	GCControllerButtonInput* _button;
	/*^block*/id _touchDown;
	/*^block*/id _touchMoved;
	/*^block*/id _touchUp;
	GCControllerDirectionPad* _touchSurface;

}

@property (nonatomic,retain) GCControllerDirectionPad * touchSurface;              //@synthesize touchSurface=_touchSurface - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * button;                   //@synthesize button=_button - In the implementation block
@property (nonatomic,copy) id touchDown;                                           //@synthesize touchDown=_touchDown - In the implementation block
@property (nonatomic,copy) id touchMoved;                                          //@synthesize touchMoved=_touchMoved - In the implementation block
@property (nonatomic,copy) id touchUp;                                             //@synthesize touchUp=_touchUp - In the implementation block
@property (nonatomic,readonly) long long touchState;                               //@synthesize touchState=_touchState - In the implementation block
@property (assign,nonatomic) BOOL reportsAbsoluteTouchSurfaceValues;               //@synthesize reportsAbsoluteTouchSurfaceValues=_reportsAbsoluteTouchSurfaceValues - In the implementation block
-(GCControllerButtonInput *)button;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)touchState;
-(id)description;
-(id)touchDown;
-(id)touchUp;
-(id)initWithCoder:(id)arg1 ;
-(void)setTouchDown:(id)arg1 ;
-(id)initWithDescriptionName:(id)arg1 ;
-(double)distanceBetweenCGPoint:(CGPoint)arg1 andCGPoint:(CGPoint)arg2 ;
-(CGPoint)mulCGPoint:(CGPoint)arg1 byScalar:(double)arg2 ;
-(CGPoint)normalizeCGPoint:(CGPoint)arg1 ;
-(CGPoint)scaleCGPoint:(CGPoint)arg1 toLength:(double)arg2 ;
-(CGPoint)addCGPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(double)magnitudeForCGPoint:(CGPoint)arg1 ;
-(CGPoint)subCGPoint:(CGPoint)arg1 fromPoint:(CGPoint)arg2 ;
-(CGPoint)clampPoint:(CGPoint)arg1 toLength:(double)arg2 ;
-(id)touchMoved;
-(BOOL)determineTouchStateWithDigitizerX:(float)arg1 digitizerY:(float)arg2 touchDown:(BOOL)arg3 ;
-(BOOL)calculateRelativePositionWithDigitizerX:(float)arg1 digitizerY:(float)arg2 touchDown:(BOOL)arg3 ;
-(void)reportDigitizerChange:(id)arg1 ;
-(GCControllerDirectionPad *)touchSurface;
-(BOOL)setDigitizerX:(float)arg1 digitizerY:(float)arg2 touchDown:(BOOL)arg3 queue:(id)arg4 ;
-(void)setValueForXAxis:(float)arg1 yAxis:(float)arg2 touchDown:(BOOL)arg3 buttonValue:(float)arg4 ;
-(void)setTouchMoved:(id)arg1 ;
-(void)setTouchUp:(id)arg1 ;
-(void)setTouchSurface:(GCControllerDirectionPad *)arg1 ;
-(BOOL)reportsAbsoluteTouchSurfaceValues;
-(void)setReportsAbsoluteTouchSurfaceValues:(BOOL)arg1 ;
@end

