/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/


@class FBSScene, FBSSceneTransitionContext;

@interface _FBSystemAppSceneInfo : NSObject {

	BOOL _hasSentFBSWorkspaceDelegateSceneCreate;
	FBSScene* _FBSScene;
	FBSSceneTransitionContext* _pendingTransitionContext;

}

@property (nonatomic,retain) FBSScene * FBSScene;                                               //@synthesize FBSScene=_FBSScene - In the implementation block
@property (assign,nonatomic) BOOL hasSentFBSWorkspaceDelegateSceneCreate;                       //@synthesize hasSentFBSWorkspaceDelegateSceneCreate=_hasSentFBSWorkspaceDelegateSceneCreate - In the implementation block
@property (nonatomic,retain) FBSSceneTransitionContext * pendingTransitionContext;              //@synthesize pendingTransitionContext=_pendingTransitionContext - In the implementation block
-(void)setFBSScene:(FBSScene *)arg1 ;
-(void)setPendingTransitionContext:(FBSSceneTransitionContext *)arg1 ;
-(FBSSceneTransitionContext *)pendingTransitionContext;
-(FBSScene *)FBSScene;
-(void)setHasSentFBSWorkspaceDelegateSceneCreate:(BOOL)arg1 ;
-(BOOL)hasSentFBSWorkspaceDelegateSceneCreate;
@end

