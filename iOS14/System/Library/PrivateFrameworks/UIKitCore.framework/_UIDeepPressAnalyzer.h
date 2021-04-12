/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class _UIVelocityIntegrator;

@interface _UIDeepPressAnalyzer : NSObject {

	_UIVelocityIntegrator* _touchForceIntegrator;
	_UIVelocityIntegrator* _locationIntegrator;

}

@property (nonatomic,retain) _UIVelocityIntegrator * touchForceIntegrator;                 //@synthesize touchForceIntegrator=_touchForceIntegrator - In the implementation block
@property (nonatomic,retain) _UIVelocityIntegrator * locationIntegrator;                   //@synthesize locationIntegrator=_locationIntegrator - In the implementation block
@property (getter=isDeepPressLikely,nonatomic,readonly) BOOL deepPressLikely; 
-(id)init;
-(void)analyzeTouches:(id)arg1 ;
-(void)setTouchForceIntegrator:(_UIVelocityIntegrator *)arg1 ;
-(_UIVelocityIntegrator *)touchForceIntegrator;
-(void)setLocationIntegrator:(_UIVelocityIntegrator *)arg1 ;
-(double)_touchForceFromTouches:(id)arg1 ;
-(_UIVelocityIntegrator *)locationIntegrator;
-(void)analyzeTouchForce:(double)arg1 centroidAtLocation:(CGPoint)arg2 ;
-(BOOL)isDeepPressLikely;
@end

