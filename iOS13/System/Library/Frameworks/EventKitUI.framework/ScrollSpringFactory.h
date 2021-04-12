/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/SpringFactory.h>

@interface ScrollSpringFactory : SpringFactory {

	double _initialVelocity;

}

@property (assign,nonatomic) double initialVelocity;              //@synthesize initialVelocity=_initialVelocity - In the implementation block
+(id)sharedFactory;
-(double)initialVelocity;
-(void)setInitialVelocity:(double)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
@end

