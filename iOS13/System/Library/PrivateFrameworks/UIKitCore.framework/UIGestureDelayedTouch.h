/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UITouch, UIEvent;

@interface UIGestureDelayedTouch : NSObject <NSCopying> {

	UITouch* _touch;
	UITouch* _stateWhenDelayed;
	UITouch* _stateWhenDelivered;
	UIEvent* _event;
	long long _delayCount;
	BOOL _cloneForSecondDelivery;

}

@property (nonatomic,retain) UITouch * touch;                           //@synthesize touch=_touch - In the implementation block
@property (nonatomic,retain) UITouch * stateWhenDelayed;                //@synthesize stateWhenDelayed=_stateWhenDelayed - In the implementation block
@property (nonatomic,retain) UITouch * stateWhenDelivered;              //@synthesize stateWhenDelivered=_stateWhenDelivered - In the implementation block
@property (nonatomic,retain) UIEvent * event;                           //@synthesize event=_event - In the implementation block
@property (assign) BOOL cloneForSecondDelivery;                         //@synthesize cloneForSecondDelivery=_cloneForSecondDelivery - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIEvent *)event;
-(void)setEvent:(UIEvent *)arg1 ;
-(UITouch *)touch;
-(void)setTouch:(UITouch *)arg1 ;
-(UITouch *)stateWhenDelayed;
-(void)incrementDelayCount;
-(long long)decrementDelayCount;
-(void)setStateWhenDelayed:(UITouch *)arg1 ;
-(BOOL)cloneForSecondDelivery;
-(long long)delayCount;
-(void)saveCurrentTouchState;
-(long long)phaseForDelivery;
-(double)timestampForDelivery;
-(UITouch *)stateWhenDelivered;
-(void)setStateWhenDelivered:(UITouch *)arg1 ;
-(void)setCloneForSecondDelivery:(BOOL)arg1 ;
@end

