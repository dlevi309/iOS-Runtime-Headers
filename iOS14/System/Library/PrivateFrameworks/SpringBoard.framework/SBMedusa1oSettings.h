/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <PrototypeTools/PTSettings.h>

@interface SBMedusa1oSettings : PTSettings {

	BOOL _debugRotationCenter;
	BOOL _debugColorRotationRegions;
	BOOL _clipRotationRegions;
	BOOL _fencesRotation;
	double _zoomOutRotationFactor;
	double _rotationSlowdownFactor;
	unsigned long long _millisecondsBetweenResizeSteps;
	double _gapSwipeBuffer;

}

@property (assign,nonatomic) BOOL debugRotationCenter;                                       //@synthesize debugRotationCenter=_debugRotationCenter - In the implementation block
@property (assign,nonatomic) BOOL debugColorRotationRegions;                                 //@synthesize debugColorRotationRegions=_debugColorRotationRegions - In the implementation block
@property (assign,nonatomic) BOOL clipRotationRegions;                                       //@synthesize clipRotationRegions=_clipRotationRegions - In the implementation block
@property (assign,nonatomic) double zoomOutRotationFactor;                                   //@synthesize zoomOutRotationFactor=_zoomOutRotationFactor - In the implementation block
@property (assign,nonatomic) double rotationSlowdownFactor;                                  //@synthesize rotationSlowdownFactor=_rotationSlowdownFactor - In the implementation block
@property (assign,nonatomic) BOOL fencesRotation;                                            //@synthesize fencesRotation=_fencesRotation - In the implementation block
@property (assign,nonatomic) unsigned long long millisecondsBetweenResizeSteps;              //@synthesize millisecondsBetweenResizeSteps=_millisecondsBetweenResizeSteps - In the implementation block
@property (assign,nonatomic) double gapSwipeBuffer;                                          //@synthesize gapSwipeBuffer=_gapSwipeBuffer - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(BOOL)debugRotationCenter;
-(BOOL)debugColorRotationRegions;
-(BOOL)clipRotationRegions;
-(double)zoomOutRotationFactor;
-(double)rotationSlowdownFactor;
-(double)gapSwipeBuffer;
-(void)setDebugRotationCenter:(BOOL)arg1 ;
-(void)setDebugColorRotationRegions:(BOOL)arg1 ;
-(void)setClipRotationRegions:(BOOL)arg1 ;
-(void)setZoomOutRotationFactor:(double)arg1 ;
-(void)setRotationSlowdownFactor:(double)arg1 ;
-(void)setFencesRotation:(BOOL)arg1 ;
-(void)setGapSwipeBuffer:(double)arg1 ;
-(BOOL)fencesRotation;
-(unsigned long long)millisecondsBetweenResizeSteps;
-(void)setMillisecondsBetweenResizeSteps:(unsigned long long)arg1 ;
@end

