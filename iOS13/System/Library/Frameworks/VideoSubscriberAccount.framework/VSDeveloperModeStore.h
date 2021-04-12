/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <libobjc.A.dylib/VSRemoteNotifierDelegate.h>
#import <libobjc.A.dylib/VSDeveloperServiceProtocol.h>

@protocol OS_dispatch_queue;
@class VSPersistentContainer, NSObject, VSRemoteNotifier, NSString;

@interface VSDeveloperModeStore : NSObject <VSRemoteNotifierDelegate, VSDeveloperServiceProtocol> {

	VSPersistentContainer* _persistentContainer;
	NSObject*<OS_dispatch_queue> _settingsQueue;
	VSRemoteNotifier* _serviceChangeRemoteNotifier;
	VSRemoteNotifier* _settingsChangeRemoteNotifier;
	VSRemoteNotifier* _providersChangeRemoteNotifier;
	VSRemoteNotifier* _accountStoreChangeRemoteNotifier;

}

@property (nonatomic,retain) VSPersistentContainer * persistentContainer;                      //@synthesize persistentContainer=_persistentContainer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> settingsQueue;                       //@synthesize settingsQueue=_settingsQueue - In the implementation block
@property (nonatomic,retain) VSRemoteNotifier * serviceChangeRemoteNotifier;                   //@synthesize serviceChangeRemoteNotifier=_serviceChangeRemoteNotifier - In the implementation block
@property (nonatomic,retain) VSRemoteNotifier * settingsChangeRemoteNotifier;                  //@synthesize settingsChangeRemoteNotifier=_settingsChangeRemoteNotifier - In the implementation block
@property (nonatomic,retain) VSRemoteNotifier * providersChangeRemoteNotifier;                 //@synthesize providersChangeRemoteNotifier=_providersChangeRemoteNotifier - In the implementation block
@property (nonatomic,retain) VSRemoteNotifier * accountStoreChangeRemoteNotifier;              //@synthesize accountStoreChangeRemoteNotifier=_accountStoreChangeRemoteNotifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(VSPersistentContainer *)persistentContainer;
-(void)setPersistentContainer:(VSPersistentContainer *)arg1 ;
-(void)addDeveloperIdentityProvider:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateExistingDeveloperIdentityProvider:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeDeveloperIdentityProviderWithUniqueID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchDeveloperSettingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchDeveloperIdentityProvidersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateDeveloperSettings:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)migrateSettingsPropertyFileIfNecessary;
-(id)legacySettingsPropertiesPath;
-(id)settingsPropertiesURL;
-(VSRemoteNotifier *)serviceChangeRemoteNotifier;
-(VSRemoteNotifier *)settingsChangeRemoteNotifier;
-(VSRemoteNotifier *)providersChangeRemoteNotifier;
-(id)_identityProviderFetchRequest;
-(void)_performIdentityProviderBlock:(/*^block*/id)arg1 ;
-(id)_developerIdentityProviderInContext:(id)arg1 ;
-(void)_noteServiceDidChange;
-(void)_noteProvidersDidChange;
-(NSObject*<OS_dispatch_queue>)settingsQueue;
-(void)_noteSettingsDidChange;
-(VSRemoteNotifier *)accountStoreChangeRemoteNotifier;
-(id)_nullableObjectOrNSNull:(id)arg1 ;
-(void)setSettingsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setServiceChangeRemoteNotifier:(VSRemoteNotifier *)arg1 ;
-(void)setSettingsChangeRemoteNotifier:(VSRemoteNotifier *)arg1 ;
-(void)setProvidersChangeRemoteNotifier:(VSRemoteNotifier *)arg1 ;
-(void)setAccountStoreChangeRemoteNotifier:(VSRemoteNotifier *)arg1 ;
@end

