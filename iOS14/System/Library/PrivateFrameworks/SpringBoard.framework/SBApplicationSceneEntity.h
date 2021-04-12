/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_supportsLayoutRole:(long long)arg1 ;
-(id)copyProcessSettings;
-(void)clearProcessSettings;
-(NSSet *)actions;
-(void)setFlag:(long long)arg1 forProcessSetting:(long long)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(Class)viewControllerClass;
-(BOOL)boolForProcessSetting:(long long)arg1 ;
-(BOOL)isApplicationSceneEntity;
-(id)objectForProcessSetting:(long long)arg1 ;
-(/*^block*/id)entityGenerator;
-(void)_initializeWithSceneHandle:(id)arg1 ;
-(void)setObject:(id)arg1 forProcessSetting:(long long)arg2 ;
-(id)applicationSceneEntity;
-(id)_initWithSceneHandle:(id)arg1 ;
-(unsigned long long)hash;
-(void)removeActions:(id)arg1 ;
-(SBProcessSettings *)processSettings;
-(SBApplicationSceneHandle *)sceneHandle;
-(SBApplication *)application;
-(long long)flagForProcessSetting:(long long)arg1 ;
-(void)removeAllActions;
-(void)addActions:(id)arg1 ;
-(void)applyProcessSettings:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)translateActivationSettingsToActions;
-(BOOL)isEqual:(id)arg1 ;
@end

