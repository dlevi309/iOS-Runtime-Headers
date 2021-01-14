/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NEConfigurationManager, NEConfiguration, NSString, NEDNSSettings, NSArray;

@interface NEDNSSettingsManager : NSObject <NEPrettyDescription> {

	BOOL _hasLoaded;
	NEConfigurationManager* _configurationManager;
	NEConfiguration* _configuration;

}

@property (readonly) NEConfigurationManager * configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (retain) NEConfiguration * configuration;                              //@synthesize configuration=_configuration - In the implementation block
@property (assign) BOOL hasLoaded;                                               //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (getter=isEnabled) BOOL enabled; 
@property (copy) NSString * localizedDescription; 
@property (retain) NEDNSSettings * dnsSettings; 
@property (copy) NSArray * onDemandRules; 
+(id)sharedManager;
-(NEConfigurationManager *)configurationManager;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)init;
-(NSArray *)onDemandRules;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setHasLoaded:(BOOL)arg1 ;
-(void)loadFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setOnDemandRules:(NSArray *)arg1 ;
-(id)description;
-(NSString *)localizedDescription;
-(NEConfiguration *)configuration;
-(void)removeFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveToPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(void)createEmptyConfigurationWithGrade:(long long)arg1 ;
-(id)initWithGrade:(long long)arg1 ;
-(NEDNSSettings *)dnsSettings;
-(void)setDnsSettings:(NEDNSSettings *)arg1 ;
-(void)setConfiguration:(NEConfiguration *)arg1 ;
-(BOOL)hasLoaded;
@end

