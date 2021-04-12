/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/POPAnimation.h>

@interface POPCustomAnimation : POPAnimation {

	double _currentTime;
	double _elapsedTime;
	/*^block*/id _animate;

}

@property (nonatomic,copy) id animate;                          //@synthesize animate=_animate - In the implementation block
@property (nonatomic,readonly) double currentTime;              //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,readonly) double elapsedTime;              //@synthesize elapsedTime=_elapsedTime - In the implementation block
+(id)animationWithBlock:(/*^block*/id)arg1 ;
-(double)beginTime;
-(double)elapsedTime;
-(double)currentTime;
-(id)animate;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAnimate:(id)arg1 ;
-(void)_appendDescription:(id)arg1 debug:(BOOL)arg2 ;
-(BOOL)_advance:(id)arg1 currentTime:(double)arg2 elapsedTime:(double)arg3 ;
@end

