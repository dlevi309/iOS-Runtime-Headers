/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
*/


@class INCExecutionCounterpartMapper, NSDictionary;

@interface INCExecutionInfoResolver : NSObject {

	INCExecutionCounterpartMapper* _counterpartMapper;
	NSDictionary* __counterpartMapping;

}

@property (nonatomic,copy,readonly) NSDictionary * _counterpartMapping;                         //@synthesize _counterpartMapping=__counterpartMapping - In the implementation block
@property (nonatomic,readonly) INCExecutionCounterpartMapper * _counterpartMapper;              //@synthesize counterpartMapper=_counterpartMapper - In the implementation block
+(void)initialize;
+(id)defaultResolver;
-(id)resolveUserActivityExecutionInfo:(id)arg1 ;
-(id)resolveIntentExecutionInfo:(id)arg1 ;
-(id)counterpartBundleIdentifiersForBundleIdentifier:(id)arg1 ;
-(INCExecutionCounterpartMapper *)_counterpartMapper;
-(id)_resolveIntentExecutionInfoBySwappingIdentifiers:(id)arg1 ;
-(id)_resolveIntentExecutionInfoByLinkingExtensionToApp:(id)arg1 ;
-(id)_resolveIntentExecutionInfoUsingCounterparts:(id)arg1 ;
-(id)_resolveUserActivityExecutionInfoUsingCounterparts:(id)arg1 ;
-(NSDictionary *)_counterpartMapping;
@end

