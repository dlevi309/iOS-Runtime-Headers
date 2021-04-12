/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@protocol OS_dispatch_queue, TUCallFilterControllerActions;
@class NSObject;

@interface TUCallFilterController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<TUCallFilterControllerActions> _actionsDelegate;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,__weak,readonly) id<TUCallFilterControllerActions> actionsDelegate;              //@synthesize actionsDelegate=_actionsDelegate - In the implementation block
@property (nonatomic,readonly) BOOL silenceUnknownCallersEnabled; 
-(id<TUCallFilterControllerActions>)actionsDelegate;
-(BOOL)willRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)policyForAddresses:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)shouldRestrictDialRequest:(id)arg1 performSynchronously:(BOOL)arg2 ;
-(BOOL)shouldRestrictDialRequest:(id)arg1 ;
-(unsigned long long)callFilterStatusForDialRequest:(id)arg1 ;
-(BOOL)containsRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(BOOL)arg3 ;
-(id)initWithActionsDelegate:(id)arg1 serialQueue:(id)arg2 ;
-(BOOL)containsRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)silenceUnknownCallersEnabled;
-(BOOL)isUnknownHandle:(id)arg1 ;
-(BOOL)shouldRestrictConversation:(id)arg1 performSynchronously:(BOOL)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isUnknownAddress:(id)arg1 normalizedAddress:(id)arg2 forBundleIdentifier:(id)arg3 ;
-(id)bundleIdentifierForDialRequest:(id)arg1 ;
-(BOOL)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(BOOL)arg3 ;
-(BOOL)shouldRestrictJoinConversationRequest:(id)arg1 performSynchronously:(BOOL)arg2 ;
-(BOOL)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 ;
@end

