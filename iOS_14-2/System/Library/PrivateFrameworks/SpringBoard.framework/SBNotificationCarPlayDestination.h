/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BNBannerHostMonitorListenerObserving.h>
#import <libobjc.A.dylib/BNPresentableObserving.h>
#import <libobjc.A.dylib/NCCarPlayBannerPresentableViewControllerDelegate.h>
#import <libobjc.A.dylib/NCNotificationAlertDestination.h>

@protocol BNPresentable, NCNotificationAlertDestinationDelegate;
@class DNDEventBehaviorResolutionService, BNBannerHostMonitorListener, NSHashTable, CRCarPlayAppPolicyEvaluator, NSMutableDictionary, NCCarPlayBannerSource, NSString, BSServiceConnectionEndpoint;

@interface SBNotificationCarPlayDestination : NSObject <BNBannerHostMonitorListenerObserving, BNPresentableObserving, NCCarPlayBannerPresentableViewControllerDelegate, NCNotificationAlertDestination> {

	DNDEventBehaviorResolutionService* _dndEventBehaviorResolutionService;
	BNBannerHostMonitorListener* _bannerHostMonitorListener;
	NSHashTable* _presentables;
	CRCarPlayAppPolicyEvaluator* _appPolicyEvaluator;
	NSMutableDictionary* _appPolicyForBundleID;
	id<BNPresentable> _presentablePresentingAlertController;
	id<NCNotificationAlertDestinationDelegate> _delegate;
	NCCarPlayBannerSource* _carPlayBannerSource;

}

@property (getter=_carPlayBannerSource,nonatomic,readonly) NCCarPlayBannerSource * carPlayBannerSource;              //@synthesize carPlayBannerSource=_carPlayBannerSource - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NCNotificationAlertDestinationDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (getter=isAlertDestination,nonatomic,readonly) BOOL alertDestination; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) BSServiceConnectionEndpoint * endpoint; 
-(void)postNotificationRequest:(id)arg1 ;
-(void)presentableWillAppearAsBanner:(id)arg1 ;
-(void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2 ;
-(BOOL)isAlertDestination;
-(void)withdrawNotificationRequest:(id)arg1 ;
-(id)_removePresentable:(id)arg1 ;
-(id)init;
-(BOOL)presentableViewControllerClosesByDefault:(id)arg1 ;
-(void)modifyNotificationRequest:(id)arg1 ;
-(id<NCNotificationAlertDestinationDelegate>)delegate;
-(BOOL)_inCallOrFaceTime;
-(id)_supplementaryActionsForNotificationRequest:(id)arg1 ;
-(void)didSelectBannerOfPresentableViewController:(id)arg1 ;
-(BOOL)isActive;
-(BSServiceConnectionEndpoint *)endpoint;
-(id)_subActionsForNotificationRequest:(id)arg1 ;
-(/*^block*/id)_ignoreActionForNotificationRequest:(id)arg1 ;
-(id)_presentablesWithRequestIdentifier:(id)arg1 ;
-(id)_carPlayBannerSource;
-(long long)_effectiveDefaultActionTypeForNotificationRequest:(id)arg1 ;
-(BOOL)_setSuspended:(BOOL)arg1 forPresentingAlertControllerForPresentable:(id)arg2 ;
-(id)_newPresentableForNotificationRequest:(id)arg1 layoutDescription:(id)arg2 ;
-(id)_bulletinForNotificationRequest:(id)arg1 ;
-(void)setDelegate:(id<NCNotificationAlertDestinationDelegate>)arg1 ;
-(id)_policyForApp:(id)arg1 ;
-(BOOL)_notificationRequestShouldShowModalSubActions:(id)arg1 ;
-(/*^block*/id)_actionForNotificationRequest:(id)arg1 ;
-(long long)_defaultActionTypeForNotificationRequest:(id)arg1 ;
-(void)bannerHostDidBecomeAvailableForMonitorListener:(id)arg1 ;
-(void)bannerHostDidBecomeUnavailableForMonitorListener:(id)arg1 ;
-(id)_appPolicyEvaluator;
-(void)_callOrFaceTimeStateChanged;
-(BOOL)_notificationRequestSupportsSubActions:(id)arg1 ;
-(id)_closeNotificationActionForNotificationRequest:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)canReceiveNotificationRequest:(id)arg1 ;
-(void)_addPresentable:(id)arg1 ;
-(id)_allNotificationActionsForNotificationRequest:(id)arg1 ;
-(id)keyWindowForScreen:(id)arg1 ;
-(id)_subActionLabelsForNotificationRequest:(id)arg1 ;
-(void)dealloc;
-(void)didCancelBannerOfPresentableViewController:(id)arg1 reason:(id)arg2 ;
@end

