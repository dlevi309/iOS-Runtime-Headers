/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NEConfigurationManager *)configurationManager;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setHasLoaded:(BOOL)arg1 ;
-(void)loadFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)description;
-(NSString *)localizedDescription;
-(NEConfiguration *)configuration;
-(void)createEmptyConfiguration;
-(NEDNSProxyProviderProtocol *)providerProtocol;
-(id)initDNSProxyManagerWithPluginType:(id)arg1 ;
-(void)removeFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveToPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setProviderProtocol:(NEDNSProxyProviderProtocol *)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(void)setConfiguration:(NEConfiguration *)arg1 ;
-(BOOL)hasLoaded;
@end

