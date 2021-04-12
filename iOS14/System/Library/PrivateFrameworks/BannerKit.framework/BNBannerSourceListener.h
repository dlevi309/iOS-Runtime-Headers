/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

#import <BannerKit/BannerKit-Structs.h>
#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <libobjc.A.dylib/BNBannerSourceClientToHostInterface.h>
#import <libobjc.A.dylib/BNBannerHostSceneViewControllerObserving.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue, BNBannerSourceListenerDelegate;
@class FBSDisplayConfiguration, NSSet, BSServiceConnectionListener, NSObject, NSMutableArray, NSMutableSet, NSMutableDictionary, NSString;

@interface BNBannerSourceListener : NSObject <BSServiceConnectionListenerDelegate, BNBannerSourceClientToHostInterface, BNBannerHostSceneViewControllerObserving, BSInvalidatable> {

	FBSDisplayConfiguration* _displayConfiguration;
	NSSet* _authorizedBundleIDs;
	BSServiceConnectionListener* _connectionListener;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _connections;
	NSMutableSet* _unpreparedPresentables;
	NSMutableDictionary* _requesterIDsToPresentables;
	id<BNBannerSourceListenerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BNBannerSourceListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(void)_removePresentable:(id)arg1 ;
-(id<BNBannerSourceListenerDelegate>)delegate;
-(void)_removeConnection:(id)arg1 ;
-(BOOL)_isConnectingProcessAuthorized:(id)arg1 error:(out id*)arg2 ;
-(void)_addConnection:(id)arg1 ;
-(void)setDelegate:(id<BNBannerSourceListenerDelegate>)arg1 ;
-(void)invalidate;
-(void)_addPresentable:(id)arg1 ;
-(void)dealloc;
-(id)initWithAuthorizedBundleIDs:(id)arg1 ;
-(void)layoutDescriptionDidChange:(id)arg1 ;
-(void)__layoutDescriptionWithReply:(/*^block*/id)arg1 ;
-(void)__postPresentableWithSpecification:(id)arg1 options:(id)arg2 userInfo:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)__recommendSuspension:(id)arg1 forReason:(id)arg2 revokingCurrent:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)__revokePresentablesWithIdentification:(id)arg1 withAnimation:(id)arg2 reason:(id)arg3 userInfo:(id)arg4 reply:(/*^block*/id)arg5 ;
-(id)initWithServiceDomain:(id)arg1 displayConfiguration:(id)arg2 authorizedBundleIDs:(id)arg3 ;
-(id)_createSceneWithIdentifier:(id)arg1 forProcess:(id)arg2 preferredContentSize:(CGSize)arg3 contentOutsets:(UIEdgeInsets)arg4 ;
-(void)_addUnpreparedPresentable:(id)arg1 ;
-(BOOL)_isPresentableWaitingToBeMadeReady:(id)arg1 ;
-(void)_removeUnpreparedPresentable:(id)arg1 ;
-(id)_removeUnpreparedPresentablesWithIdentification:(id)arg1 ;
-(void)_removePresentableWithIdentification:(id)arg1 ;
-(BOOL)_isPrototypeFeaturesEnabled;
-(void)_removePresentablesFromRequesterWithIdentifier:(id)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)sceneDidInvalidateForBannerHostSceneViewController:(id)arg1 ;
@end

