/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@protocol PMLTransformerProtocol;
@class PMLSessionDescriptor;

@interface SGTransformerInstance : NSObject {

	PMLSessionDescriptor* _sessionDescriptor;
	id<PMLTransformerProtocol> _transformer;
	Class _modelClass;

}

@property (nonatomic,retain) PMLSessionDescriptor * sessionDescriptor;              //@synthesize sessionDescriptor=_sessionDescriptor - In the implementation block
@property (nonatomic,retain) id<PMLTransformerProtocol> transformer;                //@synthesize transformer=_transformer - In the implementation block
@property (nonatomic,retain) Class modelClass;                                      //@synthesize modelClass=_modelClass - In the implementation block
+(id)defaultWindowAndNgrams;
+(id)defaultSessionDescriptorForModelId:(id)arg1 featureVersion:(id)arg2 language:(id)arg3 windowAndNgrams:(id)arg4 ;
-(void)setTransformer:(id<PMLTransformerProtocol>)arg1 ;
-(id<PMLTransformerProtocol>)transformer;
-(void)setModelClass:(Class)arg1 ;
-(Class)modelClass;
-(PMLSessionDescriptor *)sessionDescriptor;
-(id)trainingFeaturesOf:(id)arg1 ;
-(id)initWithTransformer:(id)arg1 sessionDescriptor:(id)arg2 modelClass:(Class)arg3 ;
-(void)setSessionDescriptor:(PMLSessionDescriptor *)arg1 ;
@end

