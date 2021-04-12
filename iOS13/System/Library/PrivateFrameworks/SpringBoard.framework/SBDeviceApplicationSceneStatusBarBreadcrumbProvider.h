/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)_shouldAddBreadcrumbToActivatingSceneEntity:(id)arg1 sceneHandle:(id)arg2 withTransitionContext:(id)arg3 ;
+(id)_breadcrumbBundleIdForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2 ;
+(id)_breadcrumbPrimaryTitleForAppWithBundleID:(id)arg1 sceneHandle:(id)arg2 activatingSceneEntity:(id)arg3 ;
+(id)_destinationContextsForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2 ;
+(id)_breadcrumbSceneIdForForAppWithBundleID:(id)arg1 activatingSceneEntity:(id)arg2 withTransitionContext:(id)arg3 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)prepareForReuse;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)hasBreadcrumb;
-(void)sceneHandle:(id)arg1 didChangeEffectiveForegroundness:(BOOL)arg2 ;
-(id)_breadcrumbNavigationActionContextForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)captureContextForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)_handleBreadcrumbAction:(unsigned long long)arg1 analyticsSide:(unsigned long long)arg2 ;
-(BOOL)_hasPrimaryBreadcrumb;
-(BOOL)_hasSecondaryBreadcrumb;
-(void)noteDidUpdateDisplayProperties;
-(void)_presentAssistantFromBreadcrumb;
-(void)_presentSpotlightFromBreadcrumbWithSource:(unsigned long long)arg1 ;
-(void)_activateAppLink:(id)arg1 withAppLinkState:(id)arg2 wasFromSpotlight:(BOOL)arg3 previousSideBundleID:(id)arg4 previousBreadcrumb:(id)arg5 ;
-(void)_activateBreadcrumbApplication:(id)arg1 withSceneIdentifier:(id)arg2 ;
-(long long)_openStrategyForAppLinkState:(id)arg1 ;
-(NSString *)breadcrumbTitle;
-(NSString *)breadcrumbSecondaryTitle;
-(id)initWithSceneHandle:(id)arg1 ;
-(id)breadcrumbActionsForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2 ;
-(BOOL)activateBreadcrumbIfPossible;
-(BOOL)activateSecondaryBreadcrumbIfPossible;
@end

