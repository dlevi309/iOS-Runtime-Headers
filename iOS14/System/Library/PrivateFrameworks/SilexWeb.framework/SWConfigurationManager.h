/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWConfigurationManager.h>
@class SWConfiguration;


@protocol SWConfigurationManager <NSObject>
@property (copy,nonatomic) SWConfiguration * configuration; 
@required
-(SWConfiguration *)configuration;
-(void)setConfiguration:(id)arg1;

@end


@protocol SWScriptsManager, SWLogger, SWScript, SWConfigurationSerializer;
@class SWConfiguration, NSString;

@interface SWConfigurationManager : NSObject <SWConfigurationManager> {

	SWConfiguration* _configuration;
	id<SWScriptsManager> _webContentScriptsManager;
	id<SWLogger> _logger;
	id<SWScript> _configurationScript;
	id<SWConfigurationSerializer> _serializer;

}

@property (nonatomic,readonly) id<SWScriptsManager> webContentScriptsManager;              //@synthesize webContentScriptsManager=_webContentScriptsManager - In the implementation block
@property (nonatomic,readonly) id<SWLogger> logger;                                        //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) id<SWScript> configurationScript;                             //@synthesize configurationScript=_configurationScript - In the implementation block
@property (nonatomic,readonly) id<SWConfigurationSerializer> serializer;                   //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,copy) SWConfiguration * configuration;                                //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SWConfigurationSerializer>)serializer;
-(SWConfiguration *)configuration;
-(id<SWLogger>)logger;
-(void)setConfiguration:(SWConfiguration *)arg1 ;
-(id)initWithWebContentScriptsManager:(id)arg1 logger:(id)arg2 serializer:(id)arg3 ;
-(id<SWScriptsManager>)webContentScriptsManager;
-(id<SWScript>)configurationScript;
-(void)setConfigurationScript:(id<SWScript>)arg1 ;
@end

