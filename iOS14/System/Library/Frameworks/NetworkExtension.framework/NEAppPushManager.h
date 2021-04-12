/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol NEAppPushDelegate;
@class NEConfigurationManager, NEConfiguration, NSArray, NSDictionary, NSString;

@interface NEAppPushManager : NSObject {

	BOOL _active;
	BOOL _hasLoaded;
	id<NEAppPushDelegate> _delegate;
	NEConfigurationManager* _configurationManager;
	NEConfiguration* _configuration;
	void* _nesmConnection;

}

@property (getter=isActive) BOOL active;                                         //@synthesize active=_active - In the implementation block
@property (readonly) NEConfigurationManager * configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (copy) NEConfiguration * configuration;                                //@synthesize configuration=_configuration - In the implementation block
@property (assign) BOOL hasLoaded;                                               //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (assign) void* nesmConnection;                                         //@synthesize nesmConnection=_nesmConnection - In the implementation block
@property (copy) NSArray * matchSSIDs; 
@property (copy) NSDictionary * providerConfiguration; 
@property (copy) NSString * providerBundleIdentifier; 
@property (__weak) id<NEAppPushDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (copy) NSString * localizedDescription; 
@property (getter=isEnabled) BOOL enabled; 
+(id)loadedManagers;
+(void)loadAllFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)initCallKitXPCClient;
+(void)deliverIncomingCallPayload:(id)arg1 ;
-(NEConfigurationManager *)configurationManager;
-(void)setActive:(BOOL)arg1 ;
-(id)init;
-(id<NEAppPushDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isActive;
-(NSDictionary *)providerConfiguration;
-(NSString *)providerBundleIdentifier;
-(void)setHasLoaded:(BOOL)arg1 ;
-(void)setProviderBundleIdentifier:(NSString *)arg1 ;
-(void)loadFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<NEAppPushDelegate>)arg1 ;
-(void)setProviderConfiguration:(NSDictionary *)arg1 ;
-(NSString *)localizedDescription;
-(NEConfiguration *)configuration;
-(void)removeFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveToPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)matchSSIDs;
-(void)setMatchSSIDs:(NSArray *)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(void)createEmptyConfigurationWithGrade:(long long)arg1 ;
-(id)initWithGrade:(long long)arg1 ;
-(void)cancelSessionManagerConnection;
-(void*)nesmConnection;
-(void)setNesmConnection:(void*)arg1 ;
-(BOOL)establishSessionManagerConnectionWithConfigurationID:(id)arg1 ;
-(void)dealloc;
-(void)setConfiguration:(NEConfiguration *)arg1 ;
-(BOOL)hasLoaded;
@end

