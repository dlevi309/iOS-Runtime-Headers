/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBApplicationSceneEntity.h>

@class SBDeviceApplicationSceneHandle;

@interface SBDeviceApplicationSceneEntity : SBApplicationSceneEntity

@property (nonatomic,readonly) SBDeviceApplicationSceneHandle * sceneHandle; 
+(id)defaultEntityWithApplicationForMainDisplay:(id)arg1 ;
+(id)newEntityWithApplicationForMainDisplay:(id)arg1 ;
+(id)entityWithApplicationForMainDisplay:(id)arg1 withScenePersistenceIdentifier:(id)arg2 ;
+(id)defaultEntityWithApplicationForMainDisplay:(id)arg1 targetContentIdentifier:(id)arg2 ;
-(BOOL)_supportsLayoutRole:(long long)arg1 ;
-(id)initWithApplicationForMainDisplay:(id)arg1 ;
-(BOOL)supportsPresentationAtAnySize;
-(Class)viewControllerClass;
-(id)initWithApplicationSceneHandle:(id)arg1 ;
-(id)initWithApplicationForMainDisplay:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)initWithApplicationForMainDisplay:(id)arg1 targetContentIdentifier:(id)arg2 ;
-(BOOL)isDeviceApplicationSceneEntity;
-(long long)_mainDisplayPreferredInterfaceOrientation;
-(id)deviceApplicationSceneEntity;
-(void)_setMainDisplayPreferredInterfaceOrientation:(long long)arg1 ;
-(id)initWithApplicationForMainSecureDisplay:(id)arg1 ;
-(id)initWithApplicationForMainDisplay:(id)arg1 generatingNewPrimarySceneIfRequired:(BOOL)arg2 ;
-(id)initWithApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3 sceneHandleProvider:(id)arg4 displayIdentity:(id)arg5 ;
-(BOOL)wantsExclusiveForeground;
@end

