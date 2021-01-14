/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setParameters:(FLSpringParameters)arg1 ;
-(void)setTarget:;
-(BOOL)grayscale;
-(void)setGrayscale:(BOOL)arg1 ;
-(SCD_Struct_BK5)matrix;
-(1)velocity;
-(1)color;
-(void)setValue:;
-(void)step:(double)arg1 ;
-()target;
-()value;
-(id)initWithInitialRotation:color:;
-(void)setAxisOrientation:(unsigned long long)arg1 ;
-(void)setSpringState:(unsigned long long)arg1 ;
-(SCD_Struct_BK5)createAxisRotationMatrix:;
-(unsigned long long)axisOrientation;
-(unsigned long long)springState;
@end

