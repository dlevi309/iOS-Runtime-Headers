/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/


@class NSURL, MLModel, MLUpdateContext;

@interface PFLModelHandler : NSObject {

	NSURL* _modelURL;
	MLModel* _model;
	MLUpdateContext* _context;

}

@property (nonatomic,readonly) NSURL * modelURL;                     //@synthesize modelURL=_modelURL - In the implementation block
@property (nonatomic,readonly) MLModel * model;                      //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) MLUpdateContext * context;              //@synthesize context=_context - In the implementation block
-(MLModel *)model;
-(NSURL *)modelURL;
-(MLUpdateContext *)context;
-(void)setContext:(MLUpdateContext *)arg1 ;
-(id)initWithModelURL:(id)arg1 error:(id*)arg2 ;
-(void)evaluateWithDataProvider:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateOrderedLayerNames:(id)arg1 withDataProvider:(id)arg2 withPatchModelShapes:(id)arg3 withPatchModelData:(id)arg4 withModelConfiguration:(id)arg5 completion:(/*^block*/id)arg6 ;
@end

