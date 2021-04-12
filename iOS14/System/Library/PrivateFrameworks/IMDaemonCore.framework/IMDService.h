/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMSystemMonitorListener.h>

@class NSBundle, NSString, NSDictionary;

@interface IMDService : NSObject <IMSystemMonitorListener> {

	NSBundle* _bundle;
	Class _sessionClass;
	NSString* _internalName;
	NSDictionary* _accountDefaults;
	NSDictionary* _serviceDefaults;
	NSDictionary* _serviceProperties;
	NSDictionary* _cachedServiceDefaults;
	NSDictionary* _cachedSetupServiceDefaults;
	BOOL _blockPrefWriting;

}

@property (nonatomic,retain) NSDictionary * serviceProperties;                             //@synthesize serviceProperties=_serviceProperties - In the implementation block
@property (nonatomic,readonly) Class sessionClass; 
@property (nonatomic,readonly) Class accountClass; 
@property (nonatomic,retain,readonly) NSBundle * bundle;                                   //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain,readonly) NSString * internalName; 
@property (nonatomic,retain,readonly) NSString * serviceDomain; 
@property (nonatomic,readonly) BOOL isIDSBased; 
@property (nonatomic,readonly) BOOL isLegacy; 
@property (getter=isDiscontinued,nonatomic,readonly) BOOL discontinued; 
@property (nonatomic,retain,readonly) NSDictionary * serviceDefaults; 
@property (nonatomic,retain,readonly) NSDictionary * serviceDefaultsForSetup; 
@property (nonatomic,retain,readonly) NSDictionary * defaultAccountSettings; 
@property (nonatomic,readonly) BOOL serviceRequiresSingleAccount; 
@property (nonatomic,readonly) BOOL shouldCreateActiveAccounts; 
@property (nonatomic,readonly) BOOL serviceWantsNullHostReachability; 
@property (nonatomic,readonly) BOOL serviceIgnoresNetworkConnectivity; 
@property (nonatomic,readonly) BOOL shouldForceAccountsActive; 
@property (nonatomic,readonly) BOOL shouldForceAccountsConnected; 
@property (nonatomic,readonly) BOOL serviceNeedsLogin; 
@property (nonatomic,readonly) BOOL serviceNeedsPassword; 
@property (nonatomic,readonly) BOOL serviceShouldBeAlwaysLoggedIn; 
@property (nonatomic,readonly) BOOL serviceRequiresHost; 
@property (nonatomic,readonly) BOOL serviceSupportsRegistration; 
@property (nonatomic,readonly) BOOL serviceSupportsAuthorization; 
@property (nonatomic,readonly) BOOL serviceChatsIgnoreLoginStatus; 
@property (nonatomic,readonly) BOOL serviceSupportsPresence; 
@property (nonatomic,readonly) BOOL serviceSupportsOneSessionForAllAccounts; 
@property (nonatomic,readonly) BOOL supportsDatabase; 
@property (nonatomic,readonly) BOOL disallowDeactivation; 
@property (nonatomic,readonly) long long serviceProtocolVersion; 
-(NSBundle *)bundle;
-(void)disableAccount:(id)arg1 ;
-(NSString *)internalName;
-(BOOL)shouldForceAccountsActive;
-(id)_serviceDefaultsForDomain:(id)arg1 ;
-(void)_reallyUnloadServiceBundle;
-(id)initWithBundle:(id)arg1 ;
-(id)oldInternalName;
-(id)createDiscontinuedAccount;
-(void)systemDidStartBackup;
-(BOOL)supportsDatabase;
-(BOOL)clearOneTimeImportAccounts;
-(BOOL)isLegacy;
-(void)synchronizeServiceDefaults;
-(void)setServiceProperties:(NSDictionary *)arg1 ;
-(Class)accountClass;
-(BOOL)disallowDeactivation;
-(BOOL)shouldForceAccountsConnected;
-(BOOL)serviceRequiresSingleAccount;
-(BOOL)serviceSupportsOneSessionForAllAccounts;
-(void)unloadServiceBundle;
-(void)systemDidEnterMemoryPressure;
-(long long)serviceProtocolVersion;
-(NSDictionary *)serviceDefaultsForSetup;
-(id)_serviceDomain;
-(NSDictionary *)serviceProperties;
-(void)accountRemoved:(id)arg1 ;
-(id)description;
-(id)_copyServicePropertiesFromIMServiceBundle:(id)arg1 ;
-(BOOL)serviceNeedsLogin;
-(void)delayedSaveSettings;
-(id)newAccountWithAccountDefaults:(id)arg1 accountID:(id)arg2 ;
-(BOOL)isIDSBased;
-(void)accountAdded:(id)arg1 ;
-(BOOL)serviceSupportsPresence;
-(id)_defaultDefaults;
-(BOOL)serviceRequiresHost;
-(void)loadServiceBundle;
-(BOOL)shouldCreateActiveAccounts;
-(NSDictionary *)defaultAccountSettings;
-(BOOL)serviceWantsNullHostReachability;
-(BOOL)serviceIgnoresNetworkConnectivity;
-(id)_oldServiceDomain;
-(BOOL)serviceSupportsAuthorization;
-(BOOL)serviceNeedsPassword;
-(void)enableAccount:(id)arg1 ;
-(BOOL)isDiscontinued;
-(BOOL)serviceShouldBeAlwaysLoggedIn;
-(BOOL)serviceChatsIgnoreLoginStatus;
-(BOOL)serviceSupportsRegistration;
-(void)saveSettings;
-(NSString *)serviceDomain;
-(void)purgeMemoryCaches;
-(id)mainService;
-(void)dealloc;
-(NSDictionary *)serviceDefaults;
-(Class)sessionClass;
@end

