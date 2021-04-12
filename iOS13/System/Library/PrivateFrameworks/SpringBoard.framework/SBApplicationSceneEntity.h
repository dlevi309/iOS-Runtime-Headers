/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWorkspaceEntity.h>
#import <libobjc.A.dylib/SBProcessSettings.h>

@class SBApplicationSceneHandle, NSMutableSet, SBProcessSettings, SBApplication, NSSet, NSString;

@interface SBApplicationSceneEntity : SBWorkspaceEntity <SBProcessSettings> {

	SBApplicationSceneHandle* _sceneHandle;
	NSMutableSet* _actions;
	SBProcessSettings* _processSettings;

}

@property (nonatomic,readonly) SBProcessSettings * processSettings;                 //@synthesize processSettings=_processSettings - In the implementation block
@property (nonatomic,readonly) SBApplicationSceneHandle * sceneHandle;              //@synthesize sceneHandle=_sceneHandle - In the implementation block
@property (nonatomic,readonly) SBApplication * application; 
@property (nonatomic,copy,readonly) NSSet * actions;                                //@synthesize actions=_actions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeAllActions;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSSet *)actions;
-(Class)viewControllerClass;
-(SBApplication *)application;
-(void)addActions:(id)arg1 ;
-(SBApplicationSceneHandle *)sceneHandle;
-(void)removeActions:(id)arg1 ;
-(id)applicationSceneEntity;
-(void)setObject:(id)arg1 forProcessSetting:(long long)arg2 ;
-(void)setFlag:(long long)arg1 forProcessSetting:(long long)arg2 ;
-(id)_initWithSceneHandle:(id)arg1 ;
-(void)translateActivationSettingsToActions;
-(BOOL)isApplicationSceneEntity;
-(BOOL)_supportsLayoutRole:(long long)arg1 ;
-(void)clearProcessSettings;
-(/*^block*/id)entityGenerator;
-(void)applyProcessSettings:(id)arg1 ;
-(long long)flagForProcessSetting:(long long)arg1 ;
-(BOOL)boolForProcessSetting:(long long)arg1 ;
-(id)objectForProcessSetting:(long long)arg1 ;
-(id)copyProcessSettings;
-(void)_initializeWithSceneHandle:(id)arg1 ;
-(SBProcessSettings *)processSettings;
@end

