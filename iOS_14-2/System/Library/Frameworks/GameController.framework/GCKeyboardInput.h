/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCPhysicalInputProfile.h>

@class NSArray, NSSet;

@interface GCKeyboardInput : GCPhysicalInputProfile {

	NSArray* _keys;
	NSSet* _allCodes;
	BOOL _isActive;
	int _numberOfKeysPressed;
	/*^block*/id _keyChangedHandler;

}

@property (nonatomic,copy) id keyChangedHandler;                                       //@synthesize keyChangedHandler=_keyChangedHandler - In the implementation block
@property (getter=isAnyKeyPressed,nonatomic,readonly) BOOL anyKeyPressed; 
-(id)init;
-(void)handleEvent:(IOHIDEventRef)arg1 ;
-(void)appDidBecomeActive;
-(void)commonInit;
-(id)name;
-(id)initWithController:(id)arg1 ;
-(id)handlerQueue;
-(id)productCategory;
-(void)appWillResignActive;
-(BOOL)hasButton:(long long)arg1 ;
-(id)buttonForKeyCode:(long long)arg1 ;
-(id)setElementValuesFromKeyboardInput:(id)arg1 ;
-(BOOL)shouldFilterInternalEvent:(IOHIDEventRef)arg1 ;
-(void)setKeyValue:(long long)arg1 down:(BOOL)arg2 ;
-(BOOL)isAnyKeyPressed;
-(void)setStateFromKeyboardInput:(id)arg1 ;
-(id)keyChangedHandler;
-(void)setKeyChangedHandler:(id)arg1 ;
@end

