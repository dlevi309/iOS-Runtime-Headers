/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timestamp;
-(double)radius;
-(BOOL)canComposeNew:(id)arg1 ;
-(id)initWithTouchPoint:(CGPoint)arg1 radius:(double)arg2 timestamp:(double)arg3 ;
-(CGPoint)touchPoint;
@end

