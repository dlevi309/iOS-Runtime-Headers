/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
*/


@protocol PKRenderLoopDelegate;
@class CADisplayLink;

@interface PKRenderLoop : NSObject {

	CADisplayLink* _displayLink;
	BOOL _effectivePaused;
	BOOL _background;
	BOOL _invalidated;
	BOOL _drawing;
	BOOL _inApplicationContext;
	BOOL _paused;
	long long _preferredFramesPerSecond;
	id<PKRenderLoopDelegate> _delegate;

}

@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated;               //@synthesize invalidated=_invalidated - In the implementation block
@property (getter=isDrawing,nonatomic,readonly) BOOL drawing;                       //@synthesize drawing=_drawing - In the implementation block
@property (assign,nonatomic) BOOL inApplicationContext;                             //@synthesize inApplicationContext=_inApplicationContext - In the implementation block
@property (assign,nonatomic) long long preferredFramesPerSecond;                    //@synthesize preferredFramesPerSecond=_preferredFramesPerSecond - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                           //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic,__weak) id<PKRenderLoopDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(BOOL)isInvalidated;
-(id)init;
-(id<PKRenderLoopDelegate>)delegate;
-(void)_drawAtTime:(double)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)setDelegate:(id<PKRenderLoopDelegate>)arg1 ;
-(long long)preferredFramesPerSecond;
-(void)setInApplicationContext:(BOOL)arg1 ;
-(void)attachToScreen:(id)arg1 ;
-(BOOL)isDrawing;
-(void)invalidate;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_didDraw;
-(BOOL)isPaused;
-(void)dealloc;
-(void)_drawWithDisplayLink:(id)arg1 ;
-(void)_updateEffectivePausedState;
-(void)_willDraw;
-(BOOL)_subclassPreferredPauseState;
-(BOOL)inApplicationContext;
@end

