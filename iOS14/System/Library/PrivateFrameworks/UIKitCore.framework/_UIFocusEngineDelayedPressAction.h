/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class _UIFocusEventRecognizer;

@interface _UIFocusEngineDelayedPressAction : NSObject {

	_UIFocusEventRecognizer* _sender;
	long long _pressType;
	double _timestamp;

}

@property (nonatomic,__weak,readonly) _UIFocusEventRecognizer * sender;              //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) long long pressType;                                  //@synthesize pressType=_pressType - In the implementation block
@property (nonatomic,readonly) double timestamp;                                     //@synthesize timestamp=_timestamp - In the implementation block
+(void)sendDelayedPressWithType:(long long)arg1 timestamp:(double)arg2 sender:(id)arg3 ;
-(_UIFocusEventRecognizer *)sender;
-(double)timestamp;
-(id)_initWithPressType:(long long)arg1 timestamp:(double)arg2 sender:(id)arg3 ;
-(void)_sendPressEvent;
-(long long)pressType;
@end

