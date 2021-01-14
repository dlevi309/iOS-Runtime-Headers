/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UIGestureDelaying.h>

@class UITouch, UIEvent, NSString;

@interface UIGestureDelayedTouch : NSObject <NSCopying, _UIGestureDelaying> {

	UITouch* _touch;
	UITouch* _stateWhenDelayed;
	UITouch* _stateWhenDelivered;
	UIEvent* _event;
	long long _delayCount;
	BOOL _cloneForSecondDelivery;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)phaseForDelivery;
-(double)timestampForDelivery;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

