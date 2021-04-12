/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIEvent.h>

@interface _UIGameControllerEvent : UIEvent {

	SCD_Struct_UI117 _previousState;
	unsigned long long _activeComponent;

}
-(long long)subtype;
-(BOOL)_processLeftStick:(SCD_Struct_UI117*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(void)_maybeConvertAndSendAsPressesEvent;
-(BOOL)_processDPad:(SCD_Struct_UI117*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(CGPoint)_leftStickPosition;
-(BOOL)_processShoulder:(SCD_Struct_UI117*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_processStandardButtons:(SCD_Struct_UI117*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(long long)type;
-(void)_sendEventToResponder:(id)arg1 ;
-(BOOL)_processRightStick:(SCD_Struct_UI117*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(void)_reset;
-(BOOL)_determineInputTypeAndProcess:(SCD_Struct_UI117*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
@end

