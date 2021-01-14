/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setScene:(FBScene *)arg1 ;
-(void)setTransitionContext:(FBSSceneTransitionContext *)arg1 ;
-(FBSSceneTransitionContext *)transitionContext;
-(id)initWithScene:(id)arg1 transitionContext:(id)arg2 ;
@end

