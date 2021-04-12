/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXRenderingConfiguration * configuration;                               //@synthesize configuration=_configuration - In the implementation block
-(SXRenderingConfiguration *)configuration;
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(id)initWithAppConfigurationManager:(id)arg1 ;
@end

