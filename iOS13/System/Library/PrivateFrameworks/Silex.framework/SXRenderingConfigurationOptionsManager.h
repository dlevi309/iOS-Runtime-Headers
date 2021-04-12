/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXHintsConfigurationOptionProvider.h>

@protocol SXHintsConfigurationOption, SXDocumentProviding, SXRenderingConfigurationProvider;
@class NSString;

@interface SXRenderingConfigurationOptionsManager : NSObject <SXHintsConfigurationOptionProvider> {

	os_unfair_lock_s _lock;
	id<SXHintsConfigurationOption> _hints;
	id<SXDocumentProviding> _documentProvider;
	id<SXRenderingConfigurationProvider> _configurationProvider;

}

@property (nonatomic,readonly) os_unfair_lock_s lock;                                                   //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) id<SXDocumentProviding> documentProvider;                                //@synthesize documentProvider=_documentProvider - In the implementation block
@property (nonatomic,readonly) id<SXRenderingConfigurationProvider> configurationProvider;              //@synthesize configurationProvider=_configurationProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SXHintsConfigurationOption> hints;                                    //@synthesize hints=_hints - In the implementation block
-(os_unfair_lock_s)lock;
-(id<SXHintsConfigurationOption>)hints;
-(id<SXRenderingConfigurationProvider>)configurationProvider;
-(id<SXDocumentProviding>)documentProvider;
-(id)initWithDocumentProvider:(id)arg1 configurationProvider:(id)arg2 ;
-(BOOL)validateConfigurationOption:(id)arg1 ;
-(BOOL)validateConfigurationOption:(id)arg1 documentSpecVersion:(id)arg2 clientSpecVersion:(id)arg3 ;
@end

