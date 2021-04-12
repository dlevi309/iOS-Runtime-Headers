/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
*/


@protocol STLockoutPolicyControllerDelegate;
@class STManagementState, STAskForTimeResource, DMFCategoryPolicyMonitor, DMFApplicationPolicyMonitor, NSURL, DMFWebsitePolicyMonitor, NSString, CNContactStore, STConversation, STConversationContext, NSArray, NSSet, CNContainer;

@interface STLockoutPolicyController : NSObject {

	unsigned long long _reuseIdentifier;
	long long _style;
	unsigned long long _stateBeforePending;
	STManagementState* _managementState;
	STAskForTimeResource* _askForTimeResource;
	DMFCategoryPolicyMonitor* _categoryPolicyMonitor;
	DMFApplicationPolicyMonitor* _applicationPolicyMonitor;
	NSURL* _websiteURL;
	DMFWebsitePolicyMonitor* _websitePolicyMonitor;
	id<STLockoutPolicyControllerDelegate> _delegate;
	BOOL _contactsEditable;
	NSString* _categoryIdentifier;
	NSString* _bundleIdentifier;
	CNContactStore* _contactStore;
	unsigned long long _state;
	STConversation* _conversation;
	STConversationContext* _conversationContext;
	NSArray* _contactsHandles;

}

@property (retain) STConversation * conversation;                               //@synthesize conversation=_conversation - In the implementation block
@property (retain) STConversationContext * conversationContext;                 //@synthesize conversationContext=_conversationContext - In the implementation block
@property (copy) NSArray * contactsHandles;                                     //@synthesize contactsHandles=_contactsHandles - In the implementation block
@property (nonatomic,copy,readonly) NSString * categoryIdentifier;              //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                         //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * websiteURL;                                  //@synthesize websiteURL=_websiteURL - In the implementation block
@property (copy,readonly) NSSet * blockedContactsHandles; 
@property (readonly) CNContactStore * contactStore;                             //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) CNContainer * iCloudContainer; 
@property (readonly) BOOL contactsEditable;                                     //@synthesize contactsEditable=_contactsEditable - In the implementation block
@property (readonly) unsigned long long state;                                  //@synthesize state=_state - In the implementation block
@property (readonly) BOOL needsToSetRestrictionsPasscode; 
@property (readonly) BOOL shouldAllowOneMoreMinute; 
-(id)init;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned long long)state;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(CNContactStore *)contactStore;
-(NSString *)categoryIdentifier;
-(STConversation *)conversation;
-(void)setConversation:(STConversation *)arg1 ;
-(void)_setupCategoryPolicyMonitorForIdentifier:(id)arg1 ;
-(void)_setupWebsitePolicyMonitorForURL:(id)arg1 ;
-(void)setConversationContext:(STConversationContext *)arg1 ;
-(void)_updateAllowedByScreenTime:(BOOL)arg1 applicationCurrentlyLimited:(BOOL)arg2 allowedByContactsHandle:(id)arg3 ;
-(void)_changePolicyToCurrentWithBundleIdentifier:(id)arg1 ;
-(void)_changePolicyToCurrent;
-(BOOL)_requestAdditionalTime:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)_actionRemindMeInMinutesWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_actionRemindMeInOneHourWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_actionOneMoreMinuteWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_actionIgnoreLimitForTodayWithCompletionHandler:(/*^block*/id)arg1 ;
-(STConversationContext *)conversationContext;
-(NSArray *)contactsHandles;
-(void)_changePolicyToCurrentWithCategoryIdentifier:(id)arg1 ;
-(void)_changePolicyToCurrentWithURL:(id)arg1 ;
-(void)_allowedByScreenTimeDidChange:(BOOL)arg1 conversationContext:(id)arg2 ;
-(void)_applicationCurrentlyLimitedDidChange:(BOOL)arg1 conversationContext:(id)arg2 ;
-(void)_allowedByContactsHandleDidChange:(id)arg1 conversationContext:(id)arg2 ;
-(BOOL)_changeInternalStateTo:(unsigned long long)arg1 ;
-(BOOL)needsToSetRestrictionsPasscode;
-(void)_handleChangeToPolicy:(long long)arg1 ;
-(id)_makeAskForTimeResource;
-(double)_timeIntervalToEndOfDay;
-(void)_authenticatedApproveForAdditionalTime:(double)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_askForTimeResponseWithState:(long long)arg1 respondingParent:(id)arg2 amountGranted:(id)arg3 error:(id)arg4 ;
-(void)_changeStateToBeforePending;
-(id)initWithCategoryIdentifier:(id)arg1 delegate:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 delegate:(id)arg2 ;
-(id)initWithWebsiteURL:(id)arg1 delegate:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 contactsHandles:(id)arg2 delegate:(id)arg3 ;
-(id)initWithBundleIdentifier:(id)arg1 conversationContext:(id)arg2 contactStore:(id)arg3 delegate:(id)arg4 ;
-(BOOL)handleAction:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSSet *)blockedContactsHandles;
-(CNContainer *)iCloudContainer;
-(BOOL)_shouldRequestMoreTime;
-(BOOL)_isRestrictionsPasscodeSet;
-(BOOL)shouldAllowOneMoreMinute;
-(void)_changeStateToInitial;
-(NSURL *)websiteURL;
-(void)setWebsiteURL:(NSURL *)arg1 ;
-(BOOL)contactsEditable;
-(void)setContactsHandles:(NSArray *)arg1 ;
@end

