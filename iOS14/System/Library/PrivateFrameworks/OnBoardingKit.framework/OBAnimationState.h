/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/


@class NSString;

@interface OBAnimationState : NSObject {

	NSString* _name;
	double _transitionDuration;
	double _transitionSpeed;
	NSString* _darkName;

}

@property (nonatomic,retain) NSString * darkName;                    //@synthesize darkName=_darkName - In the implementation block
@property (nonatomic,retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double transitionDuration;              //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (assign,nonatomic) double transitionSpeed;                 //@synthesize transitionSpeed=_transitionSpeed - In the implementation block
-(void)setTransitionDuration:(double)arg1 ;
-(double)transitionDuration;
-(NSString *)darkName;
-(void)setTransitionSpeed:(double)arg1 ;
-(void)setDarkName:(NSString *)arg1 ;
-(id)initWithStateName:(id)arg1 transitionDuration:(double)arg2 transitionSpeed:(double)arg3 ;
-(id)initWithStateName:(id)arg1 darkStateName:(id)arg2 transitionDuration:(double)arg3 transitionSpeed:(double)arg4 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(double)transitionSpeed;
-(id)stateForLayer:(id)arg1 ;
@end

