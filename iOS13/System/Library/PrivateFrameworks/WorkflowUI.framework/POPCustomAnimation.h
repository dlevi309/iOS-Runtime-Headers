/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/POPAnimation.h>

@interface POPCustomAnimation : POPAnimation {

	double _currentTime;
	double _elapsedTime;
	/*^block*/id _animate;

}

@property (nonatomic,copy) id animate;                          //@synthesize animate=_animate - In the implementation block
@property (nonatomic,readonly) double currentTime;              //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,readonly) double elapsedTime;              //@synthesize elapsedTime=_elapsedTime - In the implementation block
+(id)animationWithBlock:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_init;
-(double)beginTime;
-(id)animate;
-(double)elapsedTime;
-(double)currentTime;
-(BOOL)_advance:(id)arg1 currentTime:(double)arg2 elapsedTime:(double)arg3 ;
-(void)_appendDescription:(id)arg1 debug:(BOOL)arg2 ;
-(void)setAnimate:(id)arg1 ;
@end

