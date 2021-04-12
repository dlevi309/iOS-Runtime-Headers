/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NEConfiguration, NEConfigurationManager, NSString, NEDNSProxyProviderProtocol;

@interface NEDNSProxyManager : NSObject <NEPrettyDescription> {

	BOOL _hasLoaded;
	NEConfiguration* _configuration;
	NEConfigurationManager* _configurationManager;

}

@property (assign) BOOL hasLoaded;                                               //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (retain) NEConfiguration * configuration;                              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) NEConfigurationManager * configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (copy) NSString * localizedDescription; 
@property (retain) NEDNSProxyProviderProtocol * providerProtocol; 
@property (getter=isEnabled) BOOL enabled; 
+(id)sharedManager;
-(id)init;
-(id)description;
-(NSString *)localizedDescription;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(void)setConfiguration:(NEConfiguration *)arg1 ;
-(NEConfiguration *)configuration;
-(NEConfigurationManager *)configurationManager;
-(BOOL)hasLoaded;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setHasLoaded:(BOOL)arg1 ;
-(void)loadFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)createEmptyConfiguration;
-(id)initDNSProxyManagerWithPluginType:(id)arg1 ;
-(NEDNSProxyProviderProtocol *)providerProtocol;
-(void)removeFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveToPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setProviderProtocol:(NEDNSProxyProviderProtocol *)arg1 ;
@end

