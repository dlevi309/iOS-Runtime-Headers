/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <PrototypeTools/PTSettings.h>

@interface _UIActivityIndicatorSettings : PTSettings {

	BOOL _customColor;
	double _fullLoopDuration;
	double _redValue;
	double _greenValue;
	double _blueValue;
	double _alphaValue;

}

@property (assign,nonatomic) double fullLoopDuration;              //@synthesize fullLoopDuration=_fullLoopDuration - In the implementation block
@property (assign,nonatomic) BOOL customColor;                     //@synthesize customColor=_customColor - In the implementation block
@property (assign,nonatomic) double redValue;                      //@synthesize redValue=_redValue - In the implementation block
@property (assign,nonatomic) double greenValue;                    //@synthesize greenValue=_greenValue - In the implementation block
@property (assign,nonatomic) double blueValue;                     //@synthesize blueValue=_blueValue - In the implementation block
@property (assign,nonatomic) double alphaValue;                    //@synthesize alphaValue=_alphaValue - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setCustomColor:(BOOL)arg1 ;
-(void)setAlphaValue:(double)arg1 ;
-(double)redValue;
-(double)blueValue;
-(BOOL)customColor;
-(double)fullLoopDuration;
-(void)setFullLoopDuration:(double)arg1 ;
-(double)greenValue;
-(double)alphaValue;
-(void)setRedValue:(double)arg1 ;
-(void)setBlueValue:(double)arg1 ;
-(void)setGreenValue:(double)arg1 ;
@end

