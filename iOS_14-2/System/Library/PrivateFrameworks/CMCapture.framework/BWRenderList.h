/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWRenderListParameterListProvider.h>

@protocol OS_dispatch_queue;
@class NSSet, NSObject, NSString;

@interface BWRenderList : NSObject <BWRenderListParameterListProvider> {

	BWRenderListRendererList* _rendererList;
	BWRenderListRendererNode* _originalMarkerRendererNode;
	BWRenderListParameterList* _parameterList;
	BOOL _affectsMetadata;
	BOOL _supportsAnimation;
	NSSet* _originalFilterNames;
	NSSet* _processedFilterNames;
	BOOL _isolationQueuePrepared;
	NSObject*<OS_dispatch_queue> _preparationIsolationQueue;

}

@property (assign,getter=isPrepared,nonatomic) BOOL prepared; 
@property (nonatomic,readonly) BWRenderListRendererList* rendererList; 
@property (nonatomic,readonly) BOOL producesOriginalRender; 
@property (nonatomic,readonly) BOOL supportsAnimation;                                //@synthesize supportsAnimation=_supportsAnimation - In the implementation block
@property (nonatomic,readonly) BOOL affectsMetadata;                                  //@synthesize affectsMetadata=_affectsMetadata - In the implementation block
@property (nonatomic,readonly) NSSet * originalFilterNames;                           //@synthesize originalFilterNames=_originalFilterNames - In the implementation block
@property (nonatomic,readonly) NSSet * processedFilterNames;                          //@synthesize processedFilterNames=_processedFilterNames - In the implementation block
@property (nonatomic,readonly) BWRenderListParameterList* parameterList; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)shallowDepthOfFieldFilterName;
-(BOOL)producesOriginalRender;
-(BOOL)supportsAnimation;
-(BOOL)_shouldStreamingSDOFRendererConsumeFilter:(id)arg1 ;
-(void)setPrepared:(BOOL)arg1 ;
-(void)_appendBatchRendererFromProvider:(id)arg1 toRendererList:(BWRenderListRendererList*)arg2 parameterList:(BWRenderListParameterList*)arg3 withContext:(BWRenderListOptimizationContext*)arg4 ;
-(NSSet *)originalFilterNames;
-(void)prepareWithParameters:(id)arg1 forInputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3 ;
-(BOOL)affectsMetadata;
-(BWRenderListParameterList*)parameterList;
-(BWRenderListRendererList*)rendererList;
-(void)_finishOptimizingRendererList:(BWRenderListRendererList*)arg1 parameterList:(BWRenderListParameterList*)arg2 fromProvider:(id)arg3 context:(BWRenderListOptimizationContext*)arg4 ;
-(id)copyParameters;
-(BOOL)isPrepared;
-(BOOL)shouldAllowOriginalRenderFromNode:(BWRenderListRendererNode*)arg1 ;
-(void)_continueOptimizingRendererList:(BWRenderListRendererList*)arg1 parameterList:(BWRenderListParameterList*)arg2 withFilter:(id)arg3 fromProvider:(id)arg4 context:(BWRenderListOptimizationContext*)arg5 ;
-(BOOL)_shouldUseMetalRendererForFilterWithName:(id)arg1 optimizationStrategy:(short)arg2 ;
-(BOOL)_shouldUseOptimizationStrategyDependentSDOFRendererForFilterWithName:(id)arg1 ;
-(BWRenderListRendererNode*)firstRendererNode;
-(void)_appendSingleRendererOfType:(short)arg1 forFilter:(id)arg2 fromProvider:(id)arg3 toRendererList:(BWRenderListRendererList*)arg4 parameterList:(BWRenderListParameterList*)arg5 withContext:(BWRenderListOptimizationContext*)arg6 ;
-(id)initWithResourceProvider:(id)arg1 originalFilters:(id)arg2 processedFilters:(id)arg3 optimizationStrategy:(short)arg4 ;
-(id)initWithAnimationSupported:(BOOL)arg1 affectsMetadata:(BOOL)arg2 ;
-(NSSet *)processedFilterNames;
-(void)dealloc;
@end

