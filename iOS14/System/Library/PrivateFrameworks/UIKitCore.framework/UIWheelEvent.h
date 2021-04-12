/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIEvent.h>

@class NSMutableArray;

@interface UIWheelEvent : UIEvent {

	long long _recentScrollDistance;
	NSMutableArray* _recentScrollEvents;
	long long lastSubtype;

}
-(long long)subtype;
-(BOOL)_canHaveVelocity;
-(double)_wheelVelocity;
-(void)_setHIDEvent:(IOHIDEventRef)arg1 ;
-(long long)type;
-(void)_sendEventToResponder:(id)arg1 ;
@end

