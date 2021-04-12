/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class FBSSceneSettings, FBSSceneTransitionContext, FBSceneUpdateContext, NSString;

@interface FBProcessWatchdogEventContext : NSObject <BSDescriptionProviding> {

	long long _event;
	FBSSceneSettings* _sceneSettings;
	FBSSceneTransitionContext* _sceneTransitionContext;
	FBSceneUpdateContext* _sceneUpdateContext;

}

@property (nonatomic,readonly) long long event;                                                        //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) FBSceneUpdateContext * sceneUpdateContext;                              //@synthesize sceneUpdateContext=_sceneUpdateContext - In the implementation block
@property (nonatomic,readonly) FBSSceneSettings * sceneSettings;                                       //@synthesize sceneSettings=_sceneSettings - In the implementation block
@property (nonatomic,__weak,readonly) FBSSceneTransitionContext * sceneTransitionContext;              //@synthesize sceneTransitionContext=_sceneTransitionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextForEvent:(long long)arg1 settings:(id)arg2 transitionContext:(id)arg3 ;
-(id)succinctDescription;
-(FBSSceneSettings *)sceneSettings;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(FBSSceneTransitionContext *)sceneTransitionContext;
-(NSString *)description;
-(long long)event;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(FBSceneUpdateContext *)sceneUpdateContext;
@end

