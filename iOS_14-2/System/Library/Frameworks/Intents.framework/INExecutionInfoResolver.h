/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@class INExecutionCounterpartMapper, NSDictionary;

@interface INExecutionInfoResolver : NSObject {

	INExecutionCounterpartMapper* _counterpartMapper;
	NSDictionary* __counterpartMapping;

}

@property (nonatomic,copy,readonly) NSDictionary * _counterpartMapping;                        //@synthesize _counterpartMapping=__counterpartMapping - In the implementation block
@property (nonatomic,readonly) INExecutionCounterpartMapper * _counterpartMapper;              //@synthesize counterpartMapper=_counterpartMapper - In the implementation block
+(void)initialize;
+(id)defaultResolver;
-(INExecutionCounterpartMapper *)_counterpartMapper;
-(id)resolveIntentExecutionInfo:(id)arg1 ;
-(id)_resolveUserActivityExecutionInfoByLinkingFileProvidersToFilesApp:(id)arg1 ;
-(id)_resolveExecutionInfoByLinkingExtensionToApp:(id)arg1 ;
-(id)_resolveIntentExecutionInfoUsingCounterparts:(id)arg1 ;
-(id)counterpartIdentifiersForLocalIdentifier:(id)arg1 ;
-(id)resolveUserActivityExecutionInfo:(id)arg1 ;
-(id)_resolveUserActivityExecutionInfoUsingCounterparts:(id)arg1 ;
-(id)_resolveIntentExecutionInfoByLinkingExtensionToApp:(id)arg1 ;
-(id)_resolveUserActivityExecutionInfoBySwappingIdentifiers:(id)arg1 ;
-(id)_resolveIntentExecutionInfoBySwappingIdentifiers:(id)arg1 ;
-(id)_resolveExecutionInfo:(id)arg1 ;
-(id)_resolveExecutionInfoBySwappingIdentifiers:(id)arg1 ;
-(id)localIdentifiersForCounterpartIdentifier:(id)arg1 ;
-(id)counterpartBundleIdentifiersForBundleIdentifier:(id)arg1 ;
-(NSDictionary *)_counterpartMapping;
@end

