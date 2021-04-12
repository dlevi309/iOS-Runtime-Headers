/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIEvent.h>

@interface UIMoveEvent : UIEvent {

	long long _moveDirection;
	unsigned long long _focusHeading;

}

@property (assign,setter=_setMoveDirection:,nonatomic) long long _moveDirection;                     //@synthesize moveDirection=_moveDirection - In the implementation block
@property (assign,setter=_setFocusHeading:,nonatomic) unsigned long long _focusHeading;              //@synthesize focusHeading=_focusHeading - In the implementation block
-(long long)type;
-(unsigned long long)_focusHeading;
-(long long)_moveDirection;
-(void)_setFocusHeading:(unsigned long long)arg1 ;
-(void)_setMoveDirection:(long long)arg1 ;
-(void)_sendEventToResponder:(id)arg1 ;
@end

