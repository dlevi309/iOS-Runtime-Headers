/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/SpringFactory.h>

@interface ScrollSpringFactory : SpringFactory {

	double _initialVelocity;

}

@property (assign,nonatomic) double initialVelocity;              //@synthesize initialVelocity=_initialVelocity - In the implementation block
+(id)sharedFactory;
-(double)initialVelocity;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)setInitialVelocity:(double)arg1 ;
@end

