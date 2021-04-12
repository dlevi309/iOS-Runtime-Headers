/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@class NSString;

@interface POPAnimationEvent : NSObject {

	unsigned long long _type;
	double _time;
	NSString* _animationDescription;

}

@property (nonatomic,copy) NSString * animationDescription;              //@synthesize animationDescription=_animationDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double time;                              //@synthesize time=_time - In the implementation block
-(id)description;
-(unsigned long long)type;
-(double)time;
-(void)_appendDescription:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 time:(double)arg2 ;
-(NSString *)animationDescription;
-(void)setAnimationDescription:(NSString *)arg1 ;
@end

