/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXConditionValidating.h>

@protocol SXRenderingConfigurationProvider;
@class NSString;

@interface SXConfiguredConditionValidator : NSObject <SXConditionValidating> {

	id<SXRenderingConfigurationProvider> _renderingConfigurationProvider;

}

@property (nonatomic,readonly) id<SXRenderingConfigurationProvider> renderingConfigurationProvider;              //@synthesize renderingConfigurationProvider=_renderingConfigurationProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXRenderingConfigurationProvider>)renderingConfigurationProvider;
-(id)initWithRenderingConfigurationProvider:(id)arg1 ;
-(BOOL)validateCondition:(id)arg1 context:(id)arg2 ;
@end

