/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <libobjc.A.dylib/CADAccountAccessHandler.h>

@protocol CADACAccountsProvider, CADManagedConfigurationHandler, CADCalStoreInfoProvider, CADCalCalendarInfoProvider, CADPermissionValidator, OS_dispatch_queue;
@class NSString, NSObject, NSMutableDictionary, NSArray;

@interface CADMCAccountAccessHandler : NSObject <CADAccountAccessHandler> {

	NSString* _bundleIdentifier;
	id<CADACAccountsProvider> _accountsProvider;
	id<CADManagedConfigurationHandler> _managedConfigHandler;
	unsigned long long _accountManagement;
	id<CADCalStoreInfoProvider> _calStoreInfoProvider;
	id<CADCalCalendarInfoProvider> _calCalendarInfoProvider;
	id<CADPermissionValidator> _permissionValidator;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	NSMutableDictionary* _cachedRestrictedStoreInfos;
	NSArray* _cachedAccounts;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;                                          //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) id<CADACAccountsProvider> accountsProvider;                           //@synthesize accountsProvider=_accountsProvider - In the implementation block
@property (nonatomic,readonly) id<CADManagedConfigurationHandler> managedConfigHandler;              //@synthesize managedConfigHandler=_managedConfigHandler - In the implementation block
@property (nonatomic,readonly) unsigned long long accountManagement;                                 //@synthesize accountManagement=_accountManagement - In the implementation block
@property (nonatomic,readonly) id<CADCalStoreInfoProvider> calStoreInfoProvider;                     //@synthesize calStoreInfoProvider=_calStoreInfoProvider - In the implementation block
@property (nonatomic,readonly) id<CADCalCalendarInfoProvider> calCalendarInfoProvider;               //@synthesize calCalendarInfoProvider=_calCalendarInfoProvider - In the implementation block
@property (nonatomic,readonly) id<CADPermissionValidator> permissionValidator;                       //@synthesize permissionValidator=_permissionValidator - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> cacheQueue;                              //@synthesize cacheQueue=_cacheQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedRestrictedStoreInfos;                       //@synthesize cachedRestrictedStoreInfos=_cachedRestrictedStoreInfos - In the implementation block
@property (nonatomic,retain) NSArray * cachedAccounts;                                               //@synthesize cachedAccounts=_cachedAccounts - In the implementation block
-(id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1 ;
-(BOOL)isAccountManaged:(id)arg1 ;
-(BOOL)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(id)arg2 ;
-(void)_validateAction:(unsigned long long)arg1 ;
-(BOOL)_mayShowLocalAccountsForAction:(unsigned long long)arg1 ;
-(void)setCachedRestrictedStoreInfos:(NSMutableDictionary *)arg1 ;
-(NSString *)bundleIdentifier;
-(id)_restrictedCalendarRowIDsForAction:(unsigned long long)arg1 ;
-(id<CADManagedConfigurationHandler>)managedConfigHandler;
-(NSArray *)cachedAccounts;
-(id<CADACAccountsProvider>)accountsProvider;
-(NSObject*<OS_dispatch_queue>)cacheQueue;
-(id)_filteredAccountsForAction:(unsigned long long)arg1 withUnfilteredAccounts:(id)arg2 ;
-(id)initWithCalStoreInfoProvider:(id)arg1 calendarInfoProvider:(id)arg2 accountsProvider:(id)arg3 permissionValidator:(id)arg4 managedConfigHandler:(id)arg5 accountManagement:(unsigned long long)arg6 bundleIdentifier:(id)arg7 ;
-(id)_restrictedCalStoreInfosForAction:(unsigned long long)arg1 ;
-(void)setCachedAccounts:(NSArray *)arg1 ;
-(void)reset;
-(id<CADPermissionValidator>)permissionValidator;
-(id<CADCalCalendarInfoProvider>)calCalendarInfoProvider;
-(id)_cachedAccounts;
-(id<CADCalStoreInfoProvider>)calStoreInfoProvider;
-(BOOL)_isDisabledForAction:(unsigned long long)arg1 ;
-(NSMutableDictionary *)cachedRestrictedStoreInfos;
-(BOOL)_existingCalStoreMapsToAccountIdentifier:(id)arg1 ;
-(unsigned long long)accountManagement;
@end

