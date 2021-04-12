/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
*/

#import <SafariSafeBrowsing/SafariSafeBrowsing-Structs.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface SSBLookupContext : NSObject <MCProfileConnectionObserver> {

	shared_ptr<SafeBrowsing::LookupContext>* _lookupContext;
	unsigned _observerToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLookupContext;
-(id)init;
-(void)dealloc;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)lookUpURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fetchCellularDataPlanWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setSafeBrowsingEnabledStateNeedsUpdate;
-(void)_forceDatabaseUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getDatabaseStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getServiceStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_forceLoadRemoteConfigurationFromDiskWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_forceUpdateRemoteConfigurationFromServerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_deleteAllDatabasesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getLastDatabaseUpdateTimeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_lookUpURLs:(id)arg1 forProtectionType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

