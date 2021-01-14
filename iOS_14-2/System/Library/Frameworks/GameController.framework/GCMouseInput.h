/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCPhysicalInputProfile.h>

@class NSMutableArray, UIWindow, GCDeviceCursor, GCControllerButtonInput, NSArray;

@interface GCMouseInput : GCPhysicalInputProfile {

	BOOL _isActive;
	BOOL _wasInitialized;
	long long _buttons;
	NSMutableArray* _auxiliaryButtons;
	UIWindow* _window;
	/*^block*/id _mouseMovedHandler;
	GCDeviceCursor* _scroll;
	GCControllerButtonInput* _leftButton;
	GCControllerButtonInput* _rightButton;
	GCControllerButtonInput* _middleButton;

}

@property (nonatomic,copy) id mouseMovedHandler;                                    //@synthesize mouseMovedHandler=_mouseMovedHandler - In the implementation block
@property (nonatomic,readonly) GCDeviceCursor * scroll;                             //@synthesize scroll=_scroll - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * leftButton;                //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * rightButton;               //@synthesize rightButton=_rightButton - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * middleButton;              //@synthesize middleButton=_middleButton - In the implementation block
@property (nonatomic,readonly) NSArray * auxiliaryButtons; 
-(GCControllerButtonInput *)leftButton;
-(void)handleEvent:(IOHIDEventRef)arg1 ;
-(GCControllerButtonInput *)rightButton;
-(void)appDidBecomeActive;
-(id)name;
-(GCDeviceCursor *)scroll;
-(GCControllerButtonInput *)middleButton;
-(id)initWithController:(id)arg1 ;
-(id)productCategory;
-(void)appWillResignActive;
-(void)_handleEventImpl:(IOHIDEventRef)arg1 ;
-(BOOL)shouldAcceptMouseEvents;
-(BOOL)_handleEventRec:(IOHIDEventRef)arg1 ;
-(void)_handleDigitizerEvent:(CGPoint)arg1 ;
-(void)_handlePointerEvent:(CGPoint)arg1 ;
-(void)_handleButtonEvent:(long long)arg1 ;
-(void)_handleScrollEvent:(CGPoint)arg1 ;
-(void)_fireMouseMovedWithQueue:(id)arg1 deltaX:(float)arg2 deltaY:(float)arg3 ;
-(NSArray *)auxiliaryButtons;
-(long long)_mouseButtons;
-(id)mouseMovedHandler;
-(void)setMouseMovedHandler:(id)arg1 ;
@end

