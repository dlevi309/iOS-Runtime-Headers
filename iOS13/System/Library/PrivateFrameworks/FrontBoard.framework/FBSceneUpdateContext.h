/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol NSObjectNSCopying;
@class NSString, FBSSceneSettings, FBSSceneSettingsDiff, FBSSceneTransitionContext;

@interface FBSceneUpdateContext : NSObject <BSDescriptionProviding> {

	NSString* _sceneID;
	unsigned long long _transactionID;
	FBSSceneSettings* _settings;
	FBSSceneSettingsDiff* _settingsDiff;
	FBSSceneTransitionContext* _transitionContext;
	id<NSObject><NSCopying> _clientContext;

}

@property (nonatomic,copy) NSString * sceneID;                                                  //@synthesize sceneID=_sceneID - In the implementation block
@property (assign,nonatomic) unsigned long long transactionID;                                  //@synthesize transactionID=_transactionID - In the implementation block
@property (nonatomic,retain) FBSSceneSettings * settings;                                       //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) FBSSceneSettingsDiff * settingsDiff;                               //@synthesize settingsDiff=_settingsDiff - In the implementation block
@property (assign,nonatomic,__weak) FBSSceneTransitionContext * transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,copy) id<NSObject><NSCopying> clientContext;                               //@synthesize clientContext=_clientContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextWithScene:(id)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(FBSSceneSettings *)settings;
-(void)setSettings:(FBSSceneSettings *)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(FBSSceneTransitionContext *)transitionContext;
-(void)setTransitionContext:(FBSSceneTransitionContext *)arg1 ;
-(unsigned long long)transactionID;
-(FBSSceneSettingsDiff *)settingsDiff;
-(void)setTransactionID:(unsigned long long)arg1 ;
-(NSString *)sceneID;
-(void)setSceneID:(NSString *)arg1 ;
-(void)setSettingsDiff:(FBSSceneSettingsDiff *)arg1 ;
-(id<NSObject><NSCopying>)clientContext;
-(void)setClientContext:(id<NSObject><NSCopying>)arg1 ;
@end

