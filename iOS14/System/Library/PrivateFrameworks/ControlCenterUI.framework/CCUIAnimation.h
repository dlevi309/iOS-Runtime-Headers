/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol CCUIAnimationParameters;
@interface CCUIAnimation : NSObject <NSCopying> {

	id<CCUIAnimationParameters> _parameters;
	double _delay;
	double _speed;
	/*^block*/id _animations;

}

@property (nonatomic,copy,readonly) id<CCUIAnimationParameters> parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) double delay;                                             //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) double speed;                                             //@synthesize speed=_speed - In the implementation block
@property (nonatomic,copy,readonly) id animations;                                       //@synthesize animations=_animations - In the implementation block
+(id)animationWithParameters:(id)arg1 animations:(/*^block*/id)arg2 ;
+(id)animationWithParameters:(id)arg1 delay:(double)arg2 speed:(double)arg3 animations:(/*^block*/id)arg4 ;
+(id)animationWithParameters:(id)arg1 delay:(double)arg2 animations:(/*^block*/id)arg3 ;
-(id<CCUIAnimationParameters>)parameters;
-(id)animations;
-(id)_initWithParameters:(id)arg1 delay:(double)arg2 speed:(double)arg3 animations:(/*^block*/id)arg4 ;
-(double)speed;
-(double)delay;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

