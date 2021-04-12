/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/


@class FBScene, FBSSceneTransitionContext;

@interface _FBClientSettingObserverContext : NSObject {

	FBScene* _scene;
	FBSSceneTransitionContext* _transitionContext;

}

@property (nonatomic,retain) FBScene * scene;                                            //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) FBSSceneTransitionContext * transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
-(FBScene *)scene;
-(FBSSceneTransitionContext *)transitionContext;
-(void)setTransitionContext:(FBSSceneTransitionContext *)arg1 ;
-(void)setScene:(FBScene *)arg1 ;
-(id)initWithScene:(id)arg1 transitionContext:(id)arg2 ;
@end

