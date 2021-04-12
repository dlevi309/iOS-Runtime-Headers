/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/SXRenderingConfigurationProvider.h>

@protocol FCNewsAppConfigurationManager;
@class SXRenderingConfiguration, NSString;

@interface NUANFRenderingConfigurationProvider : NSObject <SXRenderingConfigurationProvider> {

	SXRenderingConfiguration* _configuration;
	id<FCNewsAppConfigurationManager> _appConfigurationManager;

}

@property (nonatomic,readonly) id<FCNewsAppConfigurationManager> appConfigurationManager;              //@synthesize appConfigurationManager=_appConfigurationManager - In the implementation block
@property (nonatomic,readonly) SXRenderingConfiguration * configuration;                               //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAppConfigurationManager:(id)arg1 ;
-(SXRenderingConfiguration *)configuration;
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
@end

