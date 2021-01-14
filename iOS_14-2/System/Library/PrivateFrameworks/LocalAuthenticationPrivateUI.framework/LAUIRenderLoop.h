/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
*/


@protocol LAUIRenderLoopDelegate;
@class CADisplayLink;

@interface LAUIRenderLoop : NSObject {

	CADisplayLink* _display_link;
	BOOL _effective_paused;
	BOOL _background;
	BOOL _in_application_context;
	BOOL _invalidated;
	BOOL _drawing;
	BOOL _paused;
	long long _preferred_fps;
	id<LAUIRenderLoopDelegate> _delegate;

}

@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated;                              //@synthesize invalidated=_invalidated - In the implementation block
@property (getter=isDrawing,nonatomic,readonly) BOOL drawing;                                      //@synthesize drawing=_drawing - In the implementation block
@property (assign,getter=isInApplicationContext,nonatomic) BOOL inApplicationContext;              //@synthesize in_application_context=_in_application_context - In the implementation block
@property (assign,nonatomic) long long preferredFramesPerSecond;                                   //@synthesize preferred_fps=_preferred_fps - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                          //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic,__weak) id<LAUIRenderLoopDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(BOOL)isInvalidated;
-(id)init;
-(id<LAUIRenderLoopDelegate>)delegate;
-(void)_drawAtTime:(double)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)setDelegate:(id<LAUIRenderLoopDelegate>)arg1 ;
-(long long)preferredFramesPerSecond;
-(void)setInApplicationContext:(BOOL)arg1 ;
-(void)attachToScreen:(id)arg1 ;
-(BOOL)isDrawing;
-(void)invalidate;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_didDraw;
-(BOOL)isPaused;
-(void)_didInvalidate;
-(void)dealloc;
-(void)_drawWithDisplayLink:(id)arg1 ;
-(void)_updateEffectivePausedState;
-(void)_willDraw;
-(BOOL)_preferredPauseState;
-(BOOL)isInApplicationContext;
@end

