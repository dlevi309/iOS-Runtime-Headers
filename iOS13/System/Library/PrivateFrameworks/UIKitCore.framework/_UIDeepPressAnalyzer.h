/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setLocationIntegrator:(_UIVelocityIntegrator *)arg1 ;
-(double)_touchForceFromTouches:(id)arg1 ;
-(void)analyzeTouchForce:(double)arg1 centroidAtLocation:(CGPoint)arg2 ;
-(_UIVelocityIntegrator *)touchForceIntegrator;
-(_UIVelocityIntegrator *)locationIntegrator;
-(BOOL)isDeepPressLikely;
@end

