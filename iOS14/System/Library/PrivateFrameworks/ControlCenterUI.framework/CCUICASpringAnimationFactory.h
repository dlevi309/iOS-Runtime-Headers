/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <libobjc.A.dylib/CCUICAAnimationFactory.h>

@class CCUICASpringAnimationParameters, NSString;

@interface CCUICASpringAnimationFactory : NSObject <CCUICAAnimationFactory> {

	CCUICASpringAnimationParameters* _parameters;
	double _speed;

}

@property (nonatomic,readonly) double animationDuration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)animationDuration;
-(BOOL)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_animation;
-(id)initWithParameters:(id)arg1 speed:(double)arg2 ;
@end

