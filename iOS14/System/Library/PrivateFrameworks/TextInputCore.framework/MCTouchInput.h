/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/MCKeyboardInput.h>

@interface MCTouchInput : MCKeyboardInput {

	double _radius;
	double _timestamp;
	CGPoint _touchPoint;

}

@property (nonatomic,readonly) CGPoint touchPoint;              //@synthesize touchPoint=_touchPoint - In the implementation block
@property (nonatomic,readonly) double radius;                   //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) double timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
-(double)timestamp;
-(double)radius;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)canComposeNew:(id)arg1 ;
-(id)initWithTouchPoint:(CGPoint)arg1 radius:(double)arg2 timestamp:(double)arg3 ;
-(CGPoint)touchPoint;
@end

