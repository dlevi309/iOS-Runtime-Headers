/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/


#import <BiometricKitUI/BiometricKitUI-Structs.h>
@class FLSpring;

@interface BKUIPearlSpringInstance : NSObject {

	FLSpring* springs[3];
	 _value;
	SCD_Struct_BK5 _matrix;
	SCD_Struct_BK5 _initialMatrix;
	 _color;
	float _alphaFactor;
	float _alphaDecay;
	float _scale;
	float _scaleDest;
	BOOL _grayscale;
	unsigned long long _axisOrientation;
	unsigned long long _springState;
	 _target;

}

@property (assign) unsigned long long axisOrientation;                    //@synthesize axisOrientation=_axisOrientation - In the implementation block
@property (assign,nonatomic) unsigned long long springState;              //@synthesize springState=_springState - In the implementation block
@property (assign,nonatomic)  target;                                     //@synthesize target=_target - In the implementation block
@property (assign,nonatomic)  value; 
@property (assign,nonatomic) BOOL grayscale;                              //@synthesize grayscale=_grayscale - In the implementation block
-(void)setTarget:;
-()target;
-()value;
-(void)setValue:;
-(1)color;
-(void)setParameters:(FLSpringParameters)arg1 ;
-(1)velocity;
-(SCD_Struct_BK5)matrix;
-(BOOL)grayscale;
-(void)setGrayscale:(BOOL)arg1 ;
-(void)step:(double)arg1 ;
-(id)initWithInitialRotation:color:;
-(void)setAxisOrientation:(unsigned long long)arg1 ;
-(void)setSpringState:(unsigned long long)arg1 ;
-(SCD_Struct_BK5)createAxisRotationMatrix:;
-(unsigned long long)axisOrientation;
-(unsigned long long)springState;
@end

