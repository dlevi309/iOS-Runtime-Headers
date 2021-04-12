/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


#import <GameController/GameController-Structs.h>
@class GCMotion, GCControllerButtonInput, GCController, GCControllerDirectionPad;

@interface GCExtendedGamepad : NSObject {

	BOOL _dpadFlippedY;
	BOOL _leftFlippedY;
	BOOL _rightFlippedY;
	long long _buttonHomeUsage;
	long long _buttonMenuUsage;
	long long _buttonOptionsUsage;
	GCMotion* _motion;
	GCControllerButtonInput* _button0;
	GCControllerButtonInput* _button1;
	GCControllerButtonInput* _button2;
	GCControllerButtonInput* _button3;
	GCController* _controller;
	/*^block*/id _valueChangedHandler;
	GCControllerDirectionPad* _dpad;
	GCControllerButtonInput* _buttonMenu;
	GCControllerButtonInput* _buttonOptions;
	GCControllerDirectionPad* _leftThumbstick;
	GCControllerDirectionPad* _rightThumbstick;
	GCControllerButtonInput* _leftShoulder;
	GCControllerButtonInput* _rightShoulder;
	GCControllerButtonInput* _leftTrigger;
	GCControllerButtonInput* _rightTrigger;
	GCControllerButtonInput* _leftThumbstickButton;
	GCControllerButtonInput* _rightThumbstickButton;
	GCControllerButtonInput* __buttonHome;

}

@property (nonatomic,retain) GCControllerButtonInput * _buttonHome;                          //@synthesize _buttonHome=__buttonHome - In the implementation block
@property (nonatomic,__weak,readonly) GCController * controller;                             //@synthesize controller=_controller - In the implementation block
@property (nonatomic,copy) id valueChangedHandler;                                           //@synthesize valueChangedHandler=_valueChangedHandler - In the implementation block
@property (nonatomic,readonly) GCControllerDirectionPad * dpad;                              //@synthesize dpad=_dpad - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * buttonA;                            //@synthesize button0=_button0 - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * buttonB;                            //@synthesize button1=_button1 - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * buttonX;                            //@synthesize button2=_button2 - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * buttonY;                            //@synthesize button3=_button3 - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * buttonMenu;                         //@synthesize buttonMenu=_buttonMenu - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * buttonOptions;                      //@synthesize buttonOptions=_buttonOptions - In the implementation block
@property (nonatomic,readonly) GCControllerDirectionPad * leftThumbstick;                    //@synthesize leftThumbstick=_leftThumbstick - In the implementation block
@property (nonatomic,readonly) GCControllerDirectionPad * rightThumbstick;                   //@synthesize rightThumbstick=_rightThumbstick - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * leftShoulder;                       //@synthesize leftShoulder=_leftShoulder - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * rightShoulder;                      //@synthesize rightShoulder=_rightShoulder - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * leftTrigger;                        //@synthesize leftTrigger=_leftTrigger - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * rightTrigger;                       //@synthesize rightTrigger=_rightTrigger - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * leftThumbstickButton;               //@synthesize leftThumbstickButton=_leftThumbstickButton - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * rightThumbstickButton;              //@synthesize rightThumbstickButton=_rightThumbstickButton - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setController:(GCController *)arg1 ;
-(GCController *)controller;
-(void)handleEvent:(IOHIDEventRef)arg1 ;
-(BOOL)allowsRotation;
-(void)setAllowsRotation:(BOOL)arg1 ;
-(id)saveSnapshot;
-(void)setPlayerIndex:(long long)arg1 ;
-(void)setValueChangedHandler:(id)arg1 ;
-(GCControllerButtonInput *)buttonA;
-(GCControllerButtonInput *)buttonB;
-(GCControllerButtonInput *)buttonX;
-(GCControllerButtonInput *)buttonY;
-(GCControllerButtonInput *)leftShoulder;
-(GCControllerButtonInput *)rightShoulder;
-(GCControllerButtonInput *)leftTrigger;
-(GCControllerButtonInput *)rightTrigger;
-(GCControllerDirectionPad *)leftThumbstick;
-(GCControllerDirectionPad *)rightThumbstick;
-(GCControllerDirectionPad *)dpad;
-(id)initWithController:(id)arg1 ;
-(id)_motion;
-(id)button2;
-(GCControllerButtonInput *)buttonMenu;
-(GCControllerButtonInput *)buttonOptions;
-(GCControllerButtonInput *)leftThumbstickButton;
-(GCControllerButtonInput *)rightThumbstickButton;
-(id)productCategory;
-(void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3 ;
-(void)setButton:(id)arg1 value:(double)arg2 ;
-(id)valueChangedHandler;
-(id)initWithController:(id)arg1 initInfo:(const GCExtendedGamepadInitWithControllerInitInfo*)arg2 ;
-(BOOL)isBluetoothAndUSBMirrored;
-(void)set_motion:(id)arg1 ;
-(void)setButton:(id)arg1 pressed:(BOOL)arg2 ;
-(void)setStateFromExtendedGamepad:(id)arg1 ;
-(BOOL)reportsAbsoluteDpadValues;
-(void)setHapticMotor:(int)arg1 frequency:(float)arg2 ;
-(void)setEnableTimeForHaptics:(BOOL)arg1 ;
-(void)initAuxiliaryButtonsWithInitInfo:(const GCExtendedGamepadInitWithControllerInitInfo*)arg1 ;
-(void)setControllerForElements;
-(GCControllerButtonInput *)_buttonHome;
-(id)button0;
-(id)button1;
-(id)button3;
-(void)setReportsAbsoluteDpadValues:(BOOL)arg1 ;
-(void)setLightbarColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 ;
-(void)set_buttonHome:(GCControllerButtonInput *)arg1 ;
@end

