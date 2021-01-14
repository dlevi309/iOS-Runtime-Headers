/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

@class GCControllerDirectionPad;


@protocol DigitizerValueChangedDelegate <NSObject>
@property (readonly) GCControllerDirectionPad * dpad; 
@required
-(GCControllerDirectionPad *)dpad;
-(void)digitizerTouchEvent:(id)arg1 x:(double)arg2 y:(double)arg3 timestamp:(unsigned long long)arg4 forceSkipDpadRotation:(BOOL)arg5;
-(void)digitizerTouchUp:(id)arg1 timestamp:(unsigned long long)arg2 forceSkipDpadRotation:(BOOL)arg3;

@end

