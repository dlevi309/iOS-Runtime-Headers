/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBApplication, FBScene, FBSDisplayIdentity, FBSSceneDefinition;

@interface SBApplicationSceneHandleRequest : NSObject {

	SBApplication* _application;
	FBScene* _existingScene;
	FBSDisplayIdentity* _displayIdentity;
	FBSSceneDefinition* _sceneDefinition;

}

@property (nonatomic,retain) SBApplication * application;                       //@synthesize application=_application - In the implementation block
@property (nonatomic,retain) FBScene * existingScene;                           //@synthesize existingScene=_existingScene - In the implementation block
@property (nonatomic,retain) FBSDisplayIdentity * displayIdentity;              //@synthesize displayIdentity=_displayIdentity - In the implementation block
@property (nonatomic,copy) FBSSceneDefinition * sceneDefinition;                //@synthesize sceneDefinition=_sceneDefinition - In the implementation block
+(id)defaultRequestForApplication:(id)arg1 sceneIdentity:(id)arg2 displayIdentity:(id)arg3 ;
-(void)setApplication:(SBApplication *)arg1 ;
-(void)setDisplayIdentity:(FBSDisplayIdentity *)arg1 ;
-(FBSDisplayIdentity *)displayIdentity;
-(void)setExistingScene:(FBScene *)arg1 ;
-(SBApplication *)application;
-(void)setSceneDefinition:(FBSSceneDefinition *)arg1 ;
-(FBSSceneDefinition *)sceneDefinition;
-(FBScene *)existingScene;
-(id)initWithApplication:(id)arg1 sceneDefinition:(id)arg2 displayIdentity:(id)arg3 ;
@end

