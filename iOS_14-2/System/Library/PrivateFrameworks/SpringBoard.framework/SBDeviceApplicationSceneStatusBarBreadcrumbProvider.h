/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBDeviceApplicationSceneHandleObserver.h>

@class SiriBreadcrumbSource, SBBreadcrumbActionContext, SBDeviceApplicationSceneHandle, NSHashTable, NSString;

@interface SBDeviceApplicationSceneStatusBarBreadcrumbProvider : NSObject <SBDeviceApplicationSceneHandleObserver> {

	SiriBreadcrumbSource* _siriSource;
	SBBreadcrumbActionContext* _currentBreadcrumbActionContext;
	SBDeviceApplicationSceneHandle* _sceneHandle;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) BOOL hasBreadcrumb; 
@property (nonatomic,copy,readonly) NSString * breadcrumbTitle; 
@property (nonatomic,copy,readonly) NSString * breadcrumbSecondaryTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_breadcrumbBundleIdForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2 ;
+(BOOL)_shouldAddBreadcrumbToActivatingSceneEntity:(id)arg1 sceneHandle:(id)arg2 withTransitionContext:(id)arg3 ;
+(id)_breadcrumbPrimaryTitleForAppWithBundleID:(id)arg1 sceneHandle:(id)arg2 activatingSceneEntity:(id)arg3 ;
+(id)_destinationContextsForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2 ;
+(id)_breadcrumbSceneIdForForAppWithBundleID:(id)arg1 activatingSceneEntity:(id)arg2 withTransitionContext:(id)arg3 ;
-(id)succinctDescription;
-(void)addObserver:(id)arg1 ;
-(void)noteDidUpdateDisplayProperties;
-(void)captureContextForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2 ;
-(BOOL)activateSecondaryBreadcrumbIfPossible;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)hasBreadcrumb;
-(id)_breadcrumbNavigationActionContextForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)_handleBreadcrumbAction:(unsigned long long)arg1 analyticsSide:(unsigned long long)arg2 ;
-(void)prepareForReuse;
-(BOOL)_hasPrimaryBreadcrumb;
-(NSString *)breadcrumbTitle;
-(id)breadcrumbActionsForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2 ;
-(long long)_openStrategyForAppLinkState:(id)arg1 ;
-(BOOL)activateBreadcrumbIfPossible;
-(BOOL)_showTransientOvelayInPlace;
-(void)_presentAssistantFromBreadcrumb;
-(id)initWithSceneHandle:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_presentSpotlightFromBreadcrumb;
-(void)_installedApplicationsDidChange:(id)arg1 ;
-(void)sceneHandle:(id)arg1 didChangeEffectiveForegroundness:(BOOL)arg2 ;
-(BOOL)_hasSecondaryBreadcrumb;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)breadcrumbSecondaryTitle;
-(void)_setCurrentBreadcrumbActionContext:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)_activateAppLink:(id)arg1 withAppLinkState:(id)arg2 wasFromSpotlight:(BOOL)arg3 previousSideBundleID:(id)arg4 previousBreadcrumb:(id)arg5 ;
-(void)_activateBreadcrumbApplication:(id)arg1 withSceneIdentifier:(id)arg2 ;
@end

