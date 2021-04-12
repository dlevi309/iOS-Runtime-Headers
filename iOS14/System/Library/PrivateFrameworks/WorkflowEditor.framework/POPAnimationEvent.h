/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
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
-(double)time;
-(id)description;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 time:(double)arg2 ;
-(void)setAnimationDescription:(NSString *)arg1 ;
-(void)_appendDescription:(id)arg1 ;
-(NSString *)animationDescription;
@end

