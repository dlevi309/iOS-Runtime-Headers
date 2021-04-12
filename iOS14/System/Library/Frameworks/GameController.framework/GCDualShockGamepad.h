/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GCExtendedGamepad.h>

@class GCControllerButtonInput, GCControllerDirectionPad;

@interface GCDualShockGamepad : GCExtendedGamepad {

	GCControllerButtonInput* _touchpadButton;
	GCControllerDirectionPad* _touchpadPrimary;
	GCControllerDirectionPad* _touchpadSecondary;

}

@property (nonatomic,readonly) GCControllerButtonInput * touchpadButton;                  //@synthesize touchpadButton=_touchpadButton - In the implementation block
@property (nonatomic,readonly) GCControllerDirectionPad * touchpadPrimary;                //@synthesize touchpadPrimary=_touchpadPrimary - In the implementation block
@property (nonatomic,readonly) GCControllerDirectionPad * touchpadSecondary;              //@synthesize touchpadSecondary=_touchpadSecondary - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithController:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)initializeExtraControllerElements;
-(BOOL)isBluetoothAndUSBMirrored;
-(GCControllerButtonInput *)touchpadButton;
-(GCControllerDirectionPad *)touchpadPrimary;
-(GCControllerDirectionPad *)touchpadSecondary;
-(void)_activateExtendedSupport;
@end

