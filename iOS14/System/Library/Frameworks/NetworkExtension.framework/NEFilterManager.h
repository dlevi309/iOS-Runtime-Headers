/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NEConfigurationManager, NEConfiguration, NSString, NEFilterProviderConfiguration;

@interface NEFilterManager : NSObject <NEPrettyDescription> {

	BOOL _hasLoaded;
	NEConfigurationManager* _configurationManager;
	NEConfiguration* _configuration;

}

@property (assign) BOOL hasLoaded;                                                     //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (readonly) NEConfigurationManager * configurationManager;                    //@synthesize configurationManager=_configurationManager - In the implementation block
@property (retain) NEConfiguration * configuration;                                    //@synthesize configuration=_configuration - In the implementation block
@property (copy) NSString * localizedDescription; 
@property (retain) NEFilterProviderConfiguration * providerConfiguration; 
@property (getter=isEnabled) BOOL enabled; 
@property (assign) long long grade; 
+(id)sharedManager;
-(NEConfigurationManager *)configurationManager;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(long long)grade;
-(id)init;
-(void)setGrade:(long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(NEFilterProviderConfiguration *)providerConfiguration;
-(void)setHasLoaded:(BOOL)arg1 ;
-(void)loadFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setProviderConfiguration:(NEFilterProviderConfiguration *)arg1 ;
-(id)description;
-(NSString *)localizedDescription;
-(NEConfiguration *)configuration;
-(void)createEmptyConfiguration;
-(void)removeFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveToPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(id)initFilterManagerWithPluginType:(id)arg1 ;
-(BOOL)isEnabled;
-(void)setConfiguration:(NEConfiguration *)arg1 ;
-(BOOL)hasLoaded;
@end

