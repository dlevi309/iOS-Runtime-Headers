/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
*/

#import <PassKitCore/PKSpringAnimationFactory.h>
#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>

@class NSString;

@interface PKUISpringAnimationFactory : PKSpringAnimationFactory <_UIBasicAnimationFactory> {

	/*^block*/id _animationDelayHandler;
	double _maximumVendedDelay;

}

@property (nonatomic,copy) id animationDelayHandler;                   //@synthesize animationDelayHandler=_animationDelayHandler - In the implementation block
@property (nonatomic,readonly) double maximumVendedDelay;              //@synthesize maximumVendedDelay=_maximumVendedDelay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)setAnimationDelayHandler:(id)arg1 ;
-(id)springAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(double)maximumVendedDelay;
-(id)_springAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)animationDelayHandler;
@end

