/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBApplicationSceneEntity.h>

@class SBDeviceApplicationSceneHandle;

@interface SBDeviceApplicationSceneEntity : SBApplicationSceneEntity

@property (nonatomic,readonly) SBDeviceApplicationSceneHandle * sceneHandle; 
+(id)newEntityWithApplicationForMainDisplay:(id)arg1 ;
+(id)defaultEntityWithApplicationForMainDisplay:(id)arg1 ;
+(id)defaultEntityWithApplicationForMainDisplay:(id)arg1 targetContentIdentifier:(id)arg2 ;
+(id)entityWithApplicationForMainDisplay:(id)arg1 withScenePersistenceIdentifier:(id)arg2 ;
-(BOOL)wantsExclusiveForeground;
-(Class)viewControllerClass;
-(id)initWithApplicationForMainDisplay:(id)arg1 ;
-(id)initWithApplicationSceneHandle:(id)arg1 ;
-(id)initWithApplicationForMainDisplay:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)initWithApplicationForMainDisplay:(id)arg1 generatingNewPrimarySceneIfRequired:(BOOL)arg2 ;
-(BOOL)isDeviceApplicationSceneEntity;
-(id)initWithApplicationForMainDisplay:(id)arg1 targetContentIdentifier:(id)arg2 ;
-(id)initWithApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3 sceneHandleProvider:(id)arg4 ;
-(BOOL)_supportsLayoutRole:(long long)arg1 ;
-(BOOL)supportsPresentationAtAnySize;
-(void)_setMainDisplayPreferredInterfaceOrientation:(long long)arg1 ;
-(long long)_mainDisplayPreferredInterfaceOrientation;
-(id)initWithApplicationForMainSecureDisplay:(id)arg1 ;
-(id)deviceApplicationSceneEntity;
@end

