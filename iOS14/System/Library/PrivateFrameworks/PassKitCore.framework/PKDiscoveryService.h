/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKDiscoveryServiceExportedInterface.h>

@protocol OS_dispatch_queue;
@class PKXPCService, NSObject, NSHashTable;

@interface PKDiscoveryService : NSObject <PKDiscoveryServiceExportedInterface> {

	PKXPCService* _remoteService;
	NSObject*<OS_dispatch_queue> _replyQueue;
	NSHashTable* _observers;
	os_unfair_lock_s _observersLock;

}
+(id)sharedInstance;
-(void)addObserver:(id)arg1 ;
-(id)observers;
-(id)init;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)discoveryArticleLayoutForItemWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)displayedDiscoveryItemWithIdentifier:(id)arg1 ;
-(void)discoveryArticleLayoutsWithCompletion:(/*^block*/id)arg1 ;
-(void)updateDiscoveryItemWithIdentifier:(id)arg1 forAction:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(/*^block*/id)errorHandlerForMethod:(SEL)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateDiscoveryManifestWithCompletion:(/*^block*/id)arg1 ;
-(void)rulesWithCompletion:(/*^block*/id)arg1 ;
-(void)discoveryItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)insertDiscoveryItems:(id)arg1 discoveryArticleLayouts:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)insertRule:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)processDiscoveryItemsAndMessagesWithCompletion:(/*^block*/id)arg1 ;
-(void)removeDiscoveryMessageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)discoveryEngagementMessagesForPassUniqueIdentifier:(id)arg1 active:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)insertDiscoveryEngagementMessages:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateDiscoveryEngagementMessageWithIdentifier:(id)arg1 forAction:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteRuleWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)evaluateRulesWithIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeDiscoveryUserNotificationsWithCompletion:(/*^block*/id)arg1 ;
-(void)discoveryArticleLayoutsUpdated:(id)arg1 ;
-(void)discoveryEngagementMessagesUpdated;
-(void)removeObserver:(id)arg1 ;
-(void)displayedDiscoveryEngagementMessageWithIdentifier:(id)arg1 ;
@end

