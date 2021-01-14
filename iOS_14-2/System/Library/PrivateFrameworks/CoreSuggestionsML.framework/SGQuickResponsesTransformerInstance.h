/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@protocol PMLTransformerProtocol;
@class SGQuickResponsesConfig, SGModelSource, SGModelSampler;

@interface SGQuickResponsesTransformerInstance : NSObject {

	SGQuickResponsesConfig* _config;
	id<PMLTransformerProtocol> _featurizer;
	SGModelSource* _source;
	id<PMLTransformerProtocol> _labeler;
	SGModelSampler* _sampler;

}

@property (nonatomic,readonly) SGQuickResponsesConfig * config;                    //@synthesize config=_config - In the implementation block
@property (nonatomic,readonly) id<PMLTransformerProtocol> featurizer;              //@synthesize featurizer=_featurizer - In the implementation block
@property (nonatomic,readonly) SGModelSource * source;                             //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) id<PMLTransformerProtocol> labeler;                 //@synthesize labeler=_labeler - In the implementation block
@property (nonatomic,readonly) SGModelSampler * sampler;                           //@synthesize sampler=_sampler - In the implementation block
-(SGQuickResponsesConfig *)config;
-(SGModelSampler *)sampler;
-(id<PMLTransformerProtocol>)labeler;
-(SGModelSource *)source;
-(id<PMLTransformerProtocol>)featurizer;
-(id)initWithConfig:(id)arg1 featurizer:(id)arg2 source:(id)arg3 labeler:(id)arg4 sampler:(id)arg5 ;
@end

