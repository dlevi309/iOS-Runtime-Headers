/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


#import <GameController/GameController-Structs.h>
@class GCMotion, GCControllerButtonInput, GCController, GCControllerDirectionPad;

@interface GCGamepad : NSObject {

	BOOL _dpadFlippedY;
	GCMotion* _motion;
	GCControllerButtonInput* _button0;
	GCControllerButtonInput* _button1;
	GCControllerButtonInput* _button2;
	GCControllerButtonInput* _button3;
	GCController* _controller;
	/*^block*/id _valueChangedHandler;
	GCControllerDirectionPad* _dpad;
	GCControllerButtonInput* _leftShoulder;
	GCControllerButtonInput* _rightShoulder;
	GCControllerButtonInput* _buttonMenu;

}

@property (assign,nonatomic,__weak) GCController * controller;                     //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) GCControllerDirectionPad * dpad;                      //@synthesize dpad=_dpad - In the implementation block
@property (nonatomic,retain) GCControllerButtonInput * buttonA;                    //@synthesize button0=_button0 - In the implementation block
@property (nonatomic,retain) GCControllerButtonInput * buttonB;                    //@synthesize button1=_button1 - In the implementation block
@property (nonatomic,retain) GCControllerButtonInput * buttonX;                    //@synthesize button2=_button2 - In the implementation block
@property (nonatomic,retain) GCControllerButtonInput * buttonY;                    //@synthesize button3=_button3 - In the implementation block
@property (nonatomic,retain) GCControllerButtonInput * leftShoulder;               //@synthesize leftShoulder=_leftShoulder - In the implementation block
@property (nonatomic,retain) GCControllerButtonInput * rightShoulder;              //@synthesize rightShoulder=_rightShoulder - In the implementation block
@property (nonatomic,retain) GCControllerButtonInput * buttonMenu;                 //@synthesize buttonMenu=_buttonMenu - In the implementation block
@property (nonatomic,copy) id valueChangedHandler;                                 //@synthesize valueChangedHandler=_valueChangedHandler - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
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
-(GCControllerDirectionPad *)dpad;
-(id)initWithController:(id)arg1 ;
-(void)setLeftShoulder:(GCControllerButtonInput *)arg1 ;
-(void)setRightShoulder:(GCControllerButtonInput *)arg1 ;
-(id)_motion;
-(id)button2;
-(id)initWithController:(id)arg1 dpadFlippedY:(BOOL)arg2 ;
-(GCControllerButtonInput *)buttonMenu;
-(id)productCategory;
-(void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3 ;
-(void)setButton:(id)arg1 value:(double)arg2 ;
-(id)valueChangedHandler;
-(BOOL)isBluetoothAndUSBMirrored;
-(void)set_motion:(id)arg1 ;
-(void)setButton:(id)arg1 pressed:(BOOL)arg2 ;
-(BOOL)reportsAbsoluteDpadValues;
-(void)setControllerForElements;
-(id)button0;
-(id)button1;
-(id)button3;
-(void)setReportsAbsoluteDpadValues:(BOOL)arg1 ;
-(void)setButtonA:(GCControllerButtonInput *)arg1 ;
-(void)setButtonB:(GCControllerButtonInput *)arg1 ;
-(void)setButtonX:(GCControllerButtonInput *)arg1 ;
-(void)setButtonY:(GCControllerButtonInput *)arg1 ;
-(void)setDpad:(GCControllerDirectionPad *)arg1 ;
-(void)setButtonMenu:(GCControllerButtonInput *)arg1 ;
@end

