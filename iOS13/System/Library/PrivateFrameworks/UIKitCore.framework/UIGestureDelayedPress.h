/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIPress, UIPressesEvent;

@interface UIGestureDelayedPress : NSObject <NSCopying> {

	long long _delayCount;
	BOOL _cloneForSecondDelivery;
	UIPress* _press;
	UIPress* _stateWhenDelayed;
	UIPress* _stateWhenDelivered;
	UIPressesEvent* _event;

}

@property (nonatomic,retain) UIPress * press;                           //@synthesize press=_press - In the implementation block
@property (nonatomic,retain) UIPress * stateWhenDelayed;                //@synthesize stateWhenDelayed=_stateWhenDelayed - In the implementation block
@property (nonatomic,retain) UIPress * stateWhenDelivered;              //@synthesize stateWhenDelivered=_stateWhenDelivered - In the implementation block
@property (nonatomic,retain) UIPressesEvent * event;                    //@synthesize event=_event - In the implementation block
@property (assign) BOOL cloneForSecondDelivery;                         //@synthesize cloneForSecondDelivery=_cloneForSecondDelivery - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIPressesEvent *)event;
-(void)setEvent:(UIPressesEvent *)arg1 ;
-(UIPress *)press;
-(UIPress *)stateWhenDelayed;
-(void)incrementDelayCount;
-(void)setPress:(UIPress *)arg1 ;
-(long long)decrementDelayCount;
-(void)setStateWhenDelayed:(UIPress *)arg1 ;
-(BOOL)cloneForSecondDelivery;
-(long long)delayCount;
-(long long)phaseForDelivery;
-(double)timestampForDelivery;
-(UIPress *)stateWhenDelivered;
-(void)setStateWhenDelivered:(UIPress *)arg1 ;
-(void)setCloneForSecondDelivery:(BOOL)arg1 ;
-(void)saveCurrentPressState;
@end

