/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCPhysicalInputProfile.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GCControllerButtonInput, GCControllerDirectionPad, GCController;

@interface GCMicroGamepad : GCPhysicalInputProfile <NSSecureCoding> {

	/*^block*/id _valueChangedHandler;
	long long _deviceType;
	BOOL _reportsAbsoluteDpadValues;
	BOOL _allowsRotation;
	GCControllerButtonInput* _button0;
	GCControllerButtonInput* _button1;
	GCControllerDirectionPad* _dpad;
	GCControllerButtonInput* _buttonMenu;

}

@property (assign,nonatomic) long long deviceType; 
@property (nonatomic,__weak,readonly) GCController * controller; 
@property (nonatomic,copy) id valueChangedHandler;                                //@synthesize valueChangedHandler=_valueChangedHandler - In the implementation block
@property (nonatomic,readonly) GCControllerDirectionPad * dpad;                   //@synthesize dpad=_dpad - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * buttonA;                 //@synthesize button0=_button0 - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * buttonX;                 //@synthesize button1=_button1 - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * buttonMenu;              //@synthesize buttonMenu=_buttonMenu - In the implementation block
@property (assign,nonatomic) BOOL reportsAbsoluteDpadValues;                      //@synthesize reportsAbsoluteDpadValues=_reportsAbsoluteDpadValues - In the implementation block
@property (assign,nonatomic) BOOL allowsRotation;                                 //@synthesize allowsRotation=_allowsRotation - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_current;
-(long long)deviceType;
-(GCControllerDirectionPad *)dpad;
-(void)setValueChangedHandler:(id)arg1 ;
-(void)handleEvent:(IOHIDEventRef)arg1 ;
-(void)setDeviceType:(long long)arg1 ;
-(BOOL)allowsRotation;
-(void)encodeWithCoder:(id)arg1 ;
-(id)saveSnapshot;
-(GCControllerButtonInput *)buttonA;
-(id)buttonB;
-(GCControllerButtonInput *)buttonX;
-(id)name;
-(void)setAllowsRotation:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)button0;
-(id)button1;
-(id)initWithIdentifier:(id)arg1 ;
-(GCControllerButtonInput *)buttonMenu;
-(id)productCategory;
-(id)valueChangedHandler;
-(BOOL)reportsAbsoluteDpadValues;
-(void)_triggerValueChangedHandlerForElement:(id)arg1 queue:(id)arg2 ;
-(void)setLastEventTimestamp:(double)arg1 ;
-(void)setReportsAbsoluteDpadValues:(BOOL)arg1 ;
-(BOOL)supportsDpadTaps;
-(void)setStateFromMicroGamepad:(id)arg1 ;
-(void)microControllerWithDigitizerX:(float)arg1 digitizerY:(float)arg2 timestamp:(unsigned long long)arg3 touchDown:(BOOL)arg4 ;
@end

