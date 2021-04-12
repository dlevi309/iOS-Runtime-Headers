/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@interface _MKDirectionalArrowRecognizer : NSObject {

	id _target;
	SEL _action;
	long long _state;
	long long _arrows;
	long long _lastArrows;

}

@property (assign,nonatomic) long long state;                     //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) long long arrows;                  //@synthesize arrows=_arrows - In the implementation block
@property (nonatomic,readonly) long long lastArrows;              //@synthesize lastArrows=_lastArrows - In the implementation block
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(long long)arrows;
-(void)handleArrowMask:(long long)arg1 ;
-(long long)lastArrows;
@end

