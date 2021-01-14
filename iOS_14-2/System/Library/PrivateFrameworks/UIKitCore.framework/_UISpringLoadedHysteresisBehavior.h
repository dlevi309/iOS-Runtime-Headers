/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic,__weak) id<UISpringLoadedInteractionBehaviorDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)setVelocityIntegrator:(_UIVelocityIntegrator *)arg1 ;
-(id<UISpringLoadedInteractionBehaviorDelegate>)delegate;
-(void)setCancelingVelocityThreshold:(double)arg1 ;
-(BOOL)shouldAllowInteraction:(id)arg1 withContext:(id)arg2 ;
-(id<UISpringLoadedInteractionContext>)context;
-(void)setDelegate:(id<UISpringLoadedInteractionBehaviorDelegate>)arg1 ;
-(double)cancelingVelocityThreshold;
-(void)setBeginningVelocityThreshold:(double)arg1 ;
-(_UIVelocityIntegrator *)velocityIntegrator;
-(double)beginningVelocityThreshold;
-(void)interactionDidFinish:(id)arg1 ;
-(void)setupDisplayLink;
-(void)_tick:(id)arg1 ;
-(void)setContext:(id<UISpringLoadedInteractionContext>)arg1 ;
@end

