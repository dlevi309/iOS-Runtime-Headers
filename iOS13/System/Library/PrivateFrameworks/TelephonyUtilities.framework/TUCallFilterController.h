/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSObject*<OS_dispatch_queue>)queue;
-(id<TUCallFilterControllerActions>)actionsDelegate;
-(id)initWithActionsDelegate:(id)arg1 serialQueue:(id)arg2 ;
-(BOOL)isUnknownAddress:(id)arg1 normalizedAddress:(id)arg2 forBundleIdentifier:(id)arg3 ;
-(BOOL)shouldRestrictDialRequest:(id)arg1 performSynchronously:(BOOL)arg2 ;
-(id)bundleIdentifierForDialRequest:(id)arg1 ;
-(BOOL)containsRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(BOOL)arg3 ;
-(id)policyForAddresses:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(BOOL)arg3 ;
-(BOOL)willRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)silenceUnknownCallersEnabled;
-(BOOL)isUnknownHandle:(id)arg1 ;
-(BOOL)shouldRestrictDialRequest:(id)arg1 ;
-(unsigned long long)callFilterStatusForDialRequest:(id)arg1 ;
-(BOOL)containsRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)shouldRestrictConversation:(id)arg1 performSynchronously:(BOOL)arg2 ;
-(BOOL)shouldRestrictJoinConversationRequest:(id)arg1 performSynchronously:(BOOL)arg2 ;
-(BOOL)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 ;
@end

