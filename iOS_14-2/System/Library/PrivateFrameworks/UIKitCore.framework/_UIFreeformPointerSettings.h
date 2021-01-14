/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <PrototypeTools/PTSettings.h>

@interface _UIFreeformPointerSettings : PTSettings {

	double _defaultPointerCornerRadius;
	double _slipFactorX;
	double _slipFactorY;

}

@property (assign,nonatomic) double defaultPointerCornerRadius;              //@synthesize defaultPointerCornerRadius=_defaultPointerCornerRadius - In the implementation block
@property (assign,nonatomic) double slipFactorX;                             //@synthesize slipFactorX=_slipFactorX - In the implementation block
@property (assign,nonatomic) double slipFactorY;                             //@synthesize slipFactorY=_slipFactorY - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setDefaultPointerCornerRadius:(double)arg1 ;
-(void)setSlipFactorX:(double)arg1 ;
-(void)setSlipFactorY:(double)arg1 ;
-(double)slipFactorX;
-(double)slipFactorY;
-(double)defaultPointerCornerRadius;
@end

