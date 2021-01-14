/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class SXDataTableElementStyle, SXJSONDataTableSelector;

@interface SXDataTableStyleMatch : NSObject {

	SXDataTableElementStyle* _style;
	SXJSONDataTableSelector* _selector;

}

@property (nonatomic,readonly) SXDataTableElementStyle * style;                 //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) SXJSONDataTableSelector * selector;              //@synthesize selector=_selector - In the implementation block
+(id)matchWithStyle:(id)arg1 andSelector:(id)arg2 ;
-(SXJSONDataTableSelector *)selector;
-(SXDataTableElementStyle *)style;
-(id)initWithStyle:(id)arg1 andSelector:(id)arg2 ;
@end

