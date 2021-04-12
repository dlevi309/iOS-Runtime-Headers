/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Accounts/Notification/ESAccountNotifier.bundle/ESAccountNotifier
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@class NSMutableDictionary, NSString;

@interface ESAccountNotifier : NSObject <ACDAccountNotificationPlugin> {

	NSMutableDictionary* _stopMonitoringAgentsTokens;

}

@property (nonatomic,readonly) NSMutableDictionary * stopMonitoringAgentsTokens;              //@synthesize stopMonitoringAgentsTokens=_stopMonitoringAgentsTokens - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_dataclassesWeCareAbout;
-(id)init;
-(id)_leafAccountTypesToCheckForEquality;
-(BOOL)canSaveAccount:(id)arg1 inStore:(id)arg2 ;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(id)_accountTypeWithIdentifier:(id)arg1 inStore:(id)arg2 ;
-(NSMutableDictionary *)stopMonitoringAgentsTokens;
-(id)_parentAccountTypes;
-(void)_stopMonitoringAgentsForAccountWithIdentifier:(id)arg1 ;
-(id)_modifiedDataclassesForAccount:(id)arg1 oldAccount:(id)arg2 ;
-(BOOL)_sanityCheckEnabledDataclassesOnExchangeAccountInfo:(id)arg1 ;
-(void)_startMonitoringAgentsIfNeededForAccountWithIdentifier:(id)arg1 ;
-(BOOL)_hasEasAccountInStore:(id)arg1 ;
@end

