/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FBSSceneMessage.h>

@class FBSSceneSettingsDiff, FBSSceneClientSettingsDiff, FBSSceneTransitionContext, NSSet;

@interface FBSSceneEvent : FBSSceneMessage {

	long long _source;
	FBSSceneSettingsDiff* _settingsDiff;
	FBSSceneClientSettingsDiff* _clientSettingsDiff;
	FBSSceneTransitionContext* _transitionContext;

}

@property (assign,nonatomic) long long source;                                             //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) FBSSceneSettingsDiff * settingsDiff;                          //@synthesize settingsDiff=_settingsDiff - In the implementation block
@property (nonatomic,retain) FBSSceneClientSettingsDiff * clientSettingsDiff;              //@synthesize clientSettingsDiff=_clientSettingsDiff - In the implementation block
@property (nonatomic,retain) FBSSceneTransitionContext * transitionContext;                //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,readonly) NSSet * actions; 
-(FBSSceneSettingsDiff *)settingsDiff;
-(id)succinctDescription;
-(void)setTransitionContext:(FBSSceneTransitionContext *)arg1 ;
-(id)init;
-(NSSet *)actions;
-(FBSSceneTransitionContext *)transitionContext;
-(FBSSceneClientSettingsDiff *)clientSettingsDiff;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setSource:(long long)arg1 ;
-(void)setSettingsDiff:(FBSSceneSettingsDiff *)arg1 ;
-(id)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)setClientSettingsDiff:(FBSSceneClientSettingsDiff *)arg1 ;
-(long long)source;
@end

