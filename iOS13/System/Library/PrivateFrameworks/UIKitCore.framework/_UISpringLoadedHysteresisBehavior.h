/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UISpringLoadedInteractionBehavior_Private.h>

@protocol UISpringLoadedInteractionBehaviorDelegate, UISpringLoadedInteractionContext;
@class CADisplayLink, _UIVelocityIntegrator, NSString;

@interface _UISpringLoadedHysteresisBehavior : NSObject <UISpringLoadedInteractionBehavior_Private> {

	id<UISpringLoadedInteractionBehaviorDelegate> delegate;
	double _beginningVelocityThreshold;
	double _cancelingVelocityThreshold;
	CADisplayLink* _displayLink;
	_UIVelocityIntegrator* _velocityIntegrator;
	id<UISpringLoadedInteractionContext> _context;

}

@property (nonatomic,retain) CADisplayLink * displayLink;                                                //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,retain) _UIVelocityIntegrator * velocityIntegrator;                                 //@synthesize velocityIntegrator=_velocityIntegrator - In the implementation block
@property (assign,nonatomic,__weak) id<UISpringLoadedInteractionContext> context;                        //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) double beginningVelocityThreshold;                                          //@synthesize beginningVelocityThreshold=_beginningVelocityThreshold - In the implementation block
@property (assign,nonatomic) double cancelingVelocityThreshold;                                          //@synthesize cancelingVelocityThreshold=_cancelingVelocityThreshold - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<UISpringLoadedInteractionBehaviorDelegate> delegate; 
-(id<UISpringLoadedInteractionBehaviorDelegate>)delegate;
-(void)setDelegate:(id<UISpringLoadedInteractionBehaviorDelegate>)arg1 ;
-(id<UISpringLoadedInteractionContext>)context;
-(void)setContext:(id<UISpringLoadedInteractionContext>)arg1 ;
-(BOOL)shouldAllowInteraction:(id)arg1 withContext:(id)arg2 ;
-(void)interactionDidFinish:(id)arg1 ;
-(_UIVelocityIntegrator *)velocityIntegrator;
-(void)setVelocityIntegrator:(_UIVelocityIntegrator *)arg1 ;
-(void)_tick:(id)arg1 ;
-(void)setBeginningVelocityThreshold:(double)arg1 ;
-(void)setCancelingVelocityThreshold:(double)arg1 ;
-(void)setupDisplayLink;
-(double)beginningVelocityThreshold;
-(double)cancelingVelocityThreshold;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
@end

