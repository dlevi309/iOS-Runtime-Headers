/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <libobjc.A.dylib/CCUICAAnimationFactory.h>

@class CCUICABasicAnimationParameters, NSString;

@interface CCUICABasicAnimationFactory : NSObject <CCUICAAnimationFactory> {

	CCUICABasicAnimationParameters* _parameters;
	double _speed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double animationDuration; 
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(BOOL)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2 ;
-(double)animationDuration;
-(id)_animation;
-(id)initWithParameters:(id)arg1 speed:(double)arg2 ;
@end

