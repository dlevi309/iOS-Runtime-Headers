/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


#import <GameController/GameController-Structs.h>
@class GCMotion, GCControllerButtonInput, GCController, GCControllerDirectionPad;

@interface GCMicroGamepad : NSObject {

	BOOL _dpadFlippedY;
	BOOL _reportsAbsoluteDpadValues;
	BOOL _allowsRotation;
	GCMotion* _motion;
	GCControllerButtonInput* _button0;
	GCControllerButtonInput* _button1;
	GCController* _controller;
	/*^block*/id _valueChangedHandler;
	GCControllerDirectionPad* _dpad;
	GCControllerButtonInput* _buttonMenu;
	long long _deviceType;

}

@property (assign,nonatomic) long long deviceType;                                    //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,__weak,readonly) GCController * controller;                      //@synthesize controller=_controller - In the implementation block
@property (nonatomic,copy) id valueChangedHandler;                                    //@synthesize valueChangedHandler=_valueChangedHandler - In the implementation block
@property (nonatomic,retain,readonly) GCControllerDirectionPad * dpad;                //@synthesize dpad=_dpad - In the implementation block
@property (nonatomic,retain,readonly) GCControllerButtonInput * buttonA;              //@synthesize button0=_button0 - In the implementation block
@property (nonatomic,retain,readonly) GCControllerButtonInput * buttonX;              //@synthesize button1=_button1 - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * buttonMenu;                  //@synthesize buttonMenu=_buttonMenu - In the implementation block
@property (assign,nonatomic) BOOL reportsAbsoluteDpadValues;                          //@synthesize reportsAbsoluteDpadValues=_reportsAbsoluteDpadValues - In the implementation block
@property (assign,nonatomic) BOOL allowsRotation;                                     //@synthesize allowsRotation=_allowsRotation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)deviceType;
-(void)setController:(GCController *)arg1 ;
-(GCController *)controller;
-(void)handleEvent:(IOHIDEventRef)arg1 ;
-(BOOL)allowsRotation;
-(void)setAllowsRotation:(BOOL)arg1 ;
-(void)setDeviceType:(long long)arg1 ;
-(id)saveSnapshot;
-(void)setPlayerIndex:(long long)arg1 ;
-(void)setValueChangedHandler:(id)arg1 ;
-(GCControllerButtonInput *)buttonA;
-(id)buttonB;
-(GCControllerButtonInput *)buttonX;
-(GCControllerDirectionPad *)dpad;
-(id)initWithController:(id)arg1 ;
-(id)_motion;
-(id)initWithController:(id)arg1 dpadFlippedY:(BOOL)arg2 ;
-(GCControllerButtonInput *)buttonMenu;
-(id)productCategory;
-(void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3 ;
-(void)setButton:(id)arg1 value:(double)arg2 ;
-(id)valueChangedHandler;
-(BOOL)isBluetoothAndUSBMirrored;
-(void)set_motion:(id)arg1 ;
-(void)setButton:(id)arg1 pressed:(BOOL)arg2 ;
-(void)setStateFromMicroGamepad:(id)arg1 ;
-(BOOL)reportsAbsoluteDpadValues;
-(void)setControllerForElements;
-(id)button0;
-(id)button1;
-(void)setReportsAbsoluteDpadValues:(BOOL)arg1 ;
-(BOOL)supportsDpadTaps;
-(void)microControllerWithDigitizerX:(float)arg1 digitizerY:(float)arg2 timestamp:(unsigned long long)arg3 touchDown:(BOOL)arg4 ;
@end

