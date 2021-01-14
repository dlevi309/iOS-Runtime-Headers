/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
*/


@class LAUIPhysicalButtonView, CALayer, NSString;

@interface LAUIPhysicalButtonViewAnimation : NSObject {

	LAUIPhysicalButtonView* _physicalButtonView;
	CALayer* _layer;
	NSString* _animationKey;

}
-(void)end;
-(void)begin;
-(void)update;
-(BOOL)isRunning;
-(double)duration;
-(void)endImmediately;
-(id)initWith:(id)arg1 layer:(id)arg2 ;
-(void)beginWithDelay:(double)arg1 ;
-(void)addAdditiveAnimation:(id)arg1 to:(id)arg2 keyPath:(id)arg3 ;
@end

