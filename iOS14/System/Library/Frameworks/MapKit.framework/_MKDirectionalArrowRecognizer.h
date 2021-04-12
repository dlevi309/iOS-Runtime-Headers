/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@interface _MKDirectionalArrowRecognizer : NSObject {

	id _target;
	SEL _action;
	long long _state;
	long long _arrows;
	long long _lastArrows;
	long long _modifierFlags;

}

@property (assign,nonatomic) long long state;                      //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long modifierFlags;              //@synthesize modifierFlags=_modifierFlags - In the implementation block
@property (nonatomic,readonly) long long arrows;                   //@synthesize arrows=_arrows - In the implementation block
@property (nonatomic,readonly) long long lastArrows;               //@synthesize lastArrows=_lastArrows - In the implementation block
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(long long)modifierFlags;
-(void)setModifierFlags:(long long)arg1 ;
-(long long)arrows;
-(void)keyUp:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(void)handleArrowMask:(long long)arg1 ;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(long long)lastArrows;
@end

