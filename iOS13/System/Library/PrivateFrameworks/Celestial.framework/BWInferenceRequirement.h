/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol BWInferenceProvider;
@class BWInferenceConfiguration;

@interface BWInferenceRequirement : NSObject {

	id<BWInferenceProvider> _provider;
	BWInferenceConfiguration* _configuration;

}

@property (nonatomic,readonly) id<BWInferenceProvider> provider;                      //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) BWInferenceConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(void)dealloc;
-(BWInferenceConfiguration *)configuration;
-(id<BWInferenceProvider>)provider;
-(id)initWithProvider:(id)arg1 configuration:(id)arg2 ;
@end

