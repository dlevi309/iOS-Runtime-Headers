/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(SGModelSource *)source;
-(SGQuickResponsesConfig *)config;
-(SGModelSampler *)sampler;
-(id<PMLTransformerProtocol>)featurizer;
-(id<PMLTransformerProtocol>)labeler;
-(id)initWithConfig:(id)arg1 featurizer:(id)arg2 source:(id)arg3 labeler:(id)arg4 sampler:(id)arg5 ;
@end

