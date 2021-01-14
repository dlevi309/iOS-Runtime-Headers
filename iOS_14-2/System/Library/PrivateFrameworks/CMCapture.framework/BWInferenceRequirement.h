/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWInferenceProvider;
@class BWInferenceConfiguration;

@interface BWInferenceRequirement : NSObject {

	id<BWInferenceProvider> _provider;
	BWInferenceConfiguration* _configuration;

}

@property (nonatomic,readonly) id<BWInferenceProvider> provider;                      //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) BWInferenceConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(id<BWInferenceProvider>)provider;
-(BWInferenceConfiguration *)configuration;
-(id)initWithProvider:(id)arg1 configuration:(id)arg2 ;
-(void)dealloc;
@end

