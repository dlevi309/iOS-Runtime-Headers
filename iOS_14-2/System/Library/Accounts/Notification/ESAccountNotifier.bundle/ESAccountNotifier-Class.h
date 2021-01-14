/*
* Generated on Thursday, January 14, 2021 at 2:29:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_sanityCheckEnabledDataclassesOnExchangeAccountInfo:(id)arg1 ;
-(id)_accountTypeWithIdentifier:(id)arg1 inStore:(id)arg2 ;
-(BOOL)canSaveAccount:(id)arg1 inStore:(id)arg2 ;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(NSMutableDictionary *)stopMonitoringAgentsTokens;
-(void)_stopMonitoringAgentsForAccountWithIdentifier:(id)arg1 ;
-(id)_modifiedDataclassesForAccount:(id)arg1 oldAccount:(id)arg2 ;
-(void)_startMonitoringAgentsIfNeededForAccountWithIdentifier:(id)arg1 ;
-(id)_leafAccountTypesToCheckForEquality;
-(id)_parentAccountTypes;
-(BOOL)_hasEasAccountInStore:(id)arg1 ;
@end

