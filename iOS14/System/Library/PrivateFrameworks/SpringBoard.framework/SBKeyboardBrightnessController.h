/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBHIDValueModifyingButtonSetArbiterDelegate.h>

@class KeyboardBrightnessClient, SBHIDValueModifyingButtonSetArbiter, NSString;

@interface SBKeyboardBrightnessController : NSObject <SBHIDValueModifyingButtonSetArbiterDelegate> {

	KeyboardBrightnessClient* _keyboardBrightnessClient;
	SBHIDValueModifyingButtonSetArbiter* _buttonArbiter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setBrightnessLevel:(float)arg1 ;
-(void)handleBrightnessKeyPressEvent:(IOHIDEventRef)arg1 ;
-(void)cancelBrightnessEvent;
-(void)_setBrightnessLevel:(float)arg1 showHUD:(BOOL)arg2 ;
-(void)_adjustBacklightLevel:(BOOL)arg1 ;
-(void)buttonSetArbiter:(id)arg1 performActionForButtonPage:(unsigned short)arg2 usage:(unsigned short)arg3 ;
@end

