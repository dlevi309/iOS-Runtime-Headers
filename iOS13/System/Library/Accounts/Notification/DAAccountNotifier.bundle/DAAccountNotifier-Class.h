/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Accounts/Notification/DAAccountNotifier.bundle/DAAccountNotifier
*/

#import <DAAccountNotifier/DAAccountNotifier-Structs.h>
#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@class NSMutableDictionary, NSString;

@interface DAAccountNotifier : NSObject <ACDAccountNotificationPlugin> {

	os_unfair_lock_s _stopMonitoringAgentsTokensLock;
	NSMutableDictionary* _stopMonitoringAgentsTokens;

}

@property (nonatomic,readonly) NSMutableDictionary * stopMonitoringAgentsTokens;              //@synthesize stopMonitoringAgentsTokens=_stopMonitoringAgentsTokens - In the implementation block
@property (nonatomic,readonly) BOOL shouldProcessAccountChanges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_dataclassesWeCareAbout;
+(BOOL)_isStoreFromDataAccess:(id)arg1 ;
+(BOOL)_isStoreFromRemindd:(id)arg1 ;
+(BOOL)_isStore:(id)arg1 fromClient:(id)arg2 ;
+(id)_propertiesThatTriggerRefresh;
+(id)_accountPropertiesThatTriggerRefresh;
-(id)init;
-(BOOL)canSaveAccount:(id)arg1 inStore:(id)arg2 ;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(id)_accountTypeWithIdentifier:(id)arg1 inStore:(id)arg2 ;
-(BOOL)_sanityCheckCalDAVAccount:(id)arg1 modifiedDataClasses:(id)arg2 ;
-(BOOL)_sanityCheckChildDAVAccount:(id)arg1 withParent:(id)arg2 modifiedDataClasses:(id)arg3 ;
-(NSMutableDictionary *)stopMonitoringAgentsTokens;
-(id)_popMonitoringAgentsTokenForAccountWithIdentifier:(id)arg1 ;
-(BOOL)shouldProcessAccountChanges;
-(BOOL)_sanityCheckChildSubCalAccountsWithParent:(id)arg1 inStore:(id)arg2 ;
-(id)_parentAccountTypes;
-(BOOL)_shouldRefreshForChangeOfType:(int)arg1 forAccount:(id)arg2 oldAccount:(id)arg3 ;
-(void)_stopMonitoringAgentsForAccountWithIdentifier:(id)arg1 ;
-(id)_modifiedDataclassesForAccount:(id)arg1 oldAccount:(id)arg2 ;
-(BOOL)_sanityCheckChildAccountOfType:(id)arg1 withParent:(id)arg2 oldParentAccount:(id)arg3 inStore:(id)arg4 modifiedDataClasses:(id)arg5 ;
-(BOOL)_sanityCheckEnabledDataclassesOnExchangeAccountInfo:(id)arg1 ;
-(void)_startMonitoringAgentsIfNeededForAccountWithIdentifier:(id)arg1 ;
@end

