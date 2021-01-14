/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCPhysicalInputProfile.h>
#import <libobjc.A.dylib/_GCGamepadEventSink.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GCControllerDirectionPad, GCControllerButtonInput, NSString, GCController;

@interface GCExtendedGamepad : GCPhysicalInputProfile <_GCGamepadEventSink, NSSecureCoding> {

	long long _buttonHomeUsage;
	long long _buttonMenuUsage;
	long long _buttonOptionsUsage;
	/*^block*/id _valueChangedHandler;
	GCControllerDirectionPad* _dpad;
	GCControllerButtonInput* _button0;
	GCControllerButtonInput* _button1;
	GCControllerButtonInput* _button2;
	GCControllerButtonInput* _button3;
	GCControllerDirectionPad* _leftThumbstick;
	GCControllerDirectionPad* _rightThumbstick;
	GCControllerButtonInput* _leftShoulder;
	GCControllerButtonInput* _rightShoulder;
	GCControllerButtonInput* _leftTrigger;
	GCControllerButtonInput* _rightTrigger;
	GCControllerButtonInput* _leftThumbstickButton;
	GCControllerButtonInput* _rightThumbstickButton;
	id _gamepadEventObservation;
	GCControllerButtonInput* _buttonMenu;
	GCControllerButtonInput* _buttonOptions;
	GCControllerButtonInput* _buttonHome;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GCControllerButtonInput * button0; 
@property (nonatomic,readonly) GCControllerButtonInput * button1; 
@property (nonatomic,readonly) GCControllerButtonInput * button2; 
@property (nonatomic,readonly) GCControllerButtonInput * button3; 
@property (nonatomic,readonly) GCControllerButtonInput * _buttonHome; 
@property (nonatomic,__weak,readonly) GCController * controller; 
@property (nonatomic,copy) id valueChangedHandler;                                           //@synthesize valueChangedHandler=_valueChangedHandler - In the implementation block
@property (nonatomic,readonly) GCControllerDirectionPad * dpad;                              //@synthesize dpad=_dpad - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * buttonA;                            //@synthesize button0=_button0 - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * buttonB;                            //@synthesize button1=_button1 - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * buttonX;                            //@synthesize button2=_button2 - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * buttonY;                            //@synthesize button3=_button3 - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * buttonMenu;                         //@synthesize buttonMenu=_buttonMenu - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * buttonOptions;                      //@synthesize buttonOptions=_buttonOptions - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * buttonHome;                         //@synthesize buttonHome=_buttonHome - In the implementation block
@property (nonatomic,readonly) GCControllerDirectionPad * leftThumbstick;                    //@synthesize leftThumbstick=_leftThumbstick - In the implementation block
@property (nonatomic,readonly) GCControllerDirectionPad * rightThumbstick;                   //@synthesize rightThumbstick=_rightThumbstick - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * leftShoulder;                       //@synthesize leftShoulder=_leftShoulder - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * rightShoulder;                      //@synthesize rightShoulder=_rightShoulder - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * leftTrigger;                        //@synthesize leftTrigger=_leftTrigger - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * rightTrigger;                       //@synthesize rightTrigger=_rightTrigger - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * leftThumbstickButton;               //@synthesize leftThumbstickButton=_leftThumbstickButton - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * rightThumbstickButton;              //@synthesize rightThumbstickButton=_rightThumbstickButton - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_current;
-(GCControllerDirectionPad *)dpad;
-(void)setValueChangedHandler:(id)arg1 ;
-(GCControllerButtonInput *)leftThumbstickButton;
-(GCControllerButtonInput *)rightThumbstickButton;
-(GCControllerDirectionPad *)leftThumbstick;
-(GCControllerDirectionPad *)rightThumbstick;
-(GCControllerButtonInput *)buttonHome;
-(void)handleEvent:(IOHIDEventRef)arg1 ;
-(BOOL)allowsRotation;
-(void)encodeWithCoder:(id)arg1 ;
-(id)saveSnapshot;
-(GCControllerButtonInput *)buttonA;
-(GCControllerButtonInput *)buttonB;
-(GCControllerButtonInput *)buttonX;
-(GCControllerButtonInput *)buttonY;
-(id)name;
-(GCControllerButtonInput *)button2;
-(void)setAllowsRotation:(BOOL)arg1 ;
-(id)initWithController:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInfo:(const SCD_Struct_GC17*)arg1 ;
-(GCControllerButtonInput *)button0;
-(GCControllerButtonInput *)button1;
-(GCControllerButtonInput *)button3;
-(GCControllerButtonInput *)leftShoulder;
-(id)initWithIdentifier:(id)arg1 ;
-(GCControllerButtonInput *)leftTrigger;
-(GCControllerButtonInput *)rightShoulder;
-(GCControllerButtonInput *)rightTrigger;
-(GCControllerButtonInput *)buttonMenu;
-(GCControllerButtonInput *)buttonOptions;
-(id)productCategory;
-(id)initWithController:(id)arg1 initInfo:(const SCD_Struct_GC17*)arg2 ;
-(id)valueChangedHandler;
-(void)setGamepadEventSource:(id)arg1 ;
-(BOOL)reportsAbsoluteDpadValues;
-(void)_triggerValueChangedHandlerForElement:(id)arg1 queue:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 info:(const SCD_Struct_GC17*)arg2 ;
-(void)initAuxiliaryButtonsWithInitInfo:(const SCD_Struct_GC17*)arg1 ;
-(id)setElementValuesFromExtendedGamepad:(id)arg1 ;
-(GCControllerButtonInput *)_buttonHome;
-(void)setStateFromExtendedGamepad:(id)arg1 ;
-(void)setReportsAbsoluteDpadValues:(BOOL)arg1 ;
@end

