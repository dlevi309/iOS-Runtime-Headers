/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GCControllerButtonInput.h>

@class NSMutableArray, _GCSetValueEvent;

@interface _GCControllerGestureAwareButtonInput : GCControllerButtonInput {

	NSMutableArray* _multiPressEventQueue;
	_GCSetValueEvent* _longPressDownEvent;
	float _realValue;
	BOOL _longPressMuted;
	BOOL _multiPressMuted;
	BOOL _enabled;
	float _longPressInterval;
	float _multiPressInterval;
	int _requiredMultiPressCount;
	/*^block*/id _longPressHandler;
	/*^block*/id _multiPressHandler;

}

@property (assign,nonatomic) long long actualSystemGestureState; 
@property (assign,nonatomic) float longPressInterval;                         //@synthesize longPressInterval=_longPressInterval - In the implementation block
@property (assign,nonatomic) float multiPressInterval;                        //@synthesize multiPressInterval=_multiPressInterval - In the implementation block
@property (assign,nonatomic) int requiredMultiPressCount;                     //@synthesize requiredMultiPressCount=_requiredMultiPressCount - In the implementation block
@property (nonatomic,copy) id longPressHandler;                               //@synthesize longPressHandler=_longPressHandler - In the implementation block
@property (nonatomic,copy) id multiPressHandler;                              //@synthesize multiPressHandler=_multiPressHandler - In the implementation block
-(void)setLongPressInterval:(float)arg1 ;
-(float)longPressInterval;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setValue:(float)arg1 ;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(BOOL)_commitPendingValueOnQueue:(id)arg1 ;
-(id)initWithDescriptionName:(id)arg1 ;
-(long long)actualSystemGestureState;
-(void)registerSetValueEvent:(float)arg1 queue:(id)arg2 ;
-(void)__onqueue_executeMultiPressRecognizerForEvent:(id)arg1 queue:(id)arg2 ;
-(void)__onqueue_forwardEvent:(id)arg1 queue:(id)arg2 ;
-(void)__onqueue_executeLongPressRecognizerForEvent:(id)arg1 queue:(id)arg2 ;
-(float)multiPressInterval;
-(void)setActualSystemGestureState:(long long)arg1 ;
-(void)muteLongPress:(BOOL)arg1 ;
-(void)muteMultiPress:(BOOL)arg1 ;
-(void)setMultiPressInterval:(float)arg1 ;
-(int)requiredMultiPressCount;
-(void)setRequiredMultiPressCount:(int)arg1 ;
-(id)longPressHandler;
-(void)setLongPressHandler:(id)arg1 ;
-(id)multiPressHandler;
-(void)setMultiPressHandler:(id)arg1 ;
@end

