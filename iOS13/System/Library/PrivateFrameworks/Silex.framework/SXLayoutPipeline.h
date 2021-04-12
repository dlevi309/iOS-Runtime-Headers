/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXLayoutPipeline.h>

@protocol SXLayoutPipeline <NSObject>
@property (assign,nonatomic,__weak) id<SXLayoutPipelineDelegate> delegate; 
@required
-(id<SXLayoutPipelineDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)layoutWithTask:(id)arg1;
-(void)addProcessor:(id)arg1 type:(unsigned long long)arg2;
-(void)removeProcessor:(id)arg1 type:(unsigned long long)arg2;
-(void)cancelTasks;

@end


@protocol SXLayoutPipelineDelegate, SXLayoutOperationFactory, SXDOMObjectProviderFactory;
@class NSOperationQueue, NSMutableArray, NSString;

@interface SXLayoutPipeline : NSObject <SXLayoutPipeline> {

	id<SXLayoutPipelineDelegate> delegate;
	id<SXLayoutOperationFactory> _layoutOperationFactory;
	id<SXDOMObjectProviderFactory> _DOMObjectProviderFactory;
	NSOperationQueue* _layoutOperationQueue;
	NSMutableArray* _preProcessors;
	NSMutableArray* _postProcessors;

}

@property (nonatomic,readonly) id<SXLayoutOperationFactory> layoutOperationFactory;                  //@synthesize layoutOperationFactory=_layoutOperationFactory - In the implementation block
@property (nonatomic,readonly) id<SXDOMObjectProviderFactory> DOMObjectProviderFactory;              //@synthesize DOMObjectProviderFactory=_DOMObjectProviderFactory - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * layoutOperationQueue;                              //@synthesize layoutOperationQueue=_layoutOperationQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * preProcessors;                                       //@synthesize preProcessors=_preProcessors - In the implementation block
@property (nonatomic,readonly) NSMutableArray * postProcessors;                                      //@synthesize postProcessors=_postProcessors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SXLayoutPipelineDelegate> delegate; 
-(id<SXLayoutPipelineDelegate>)delegate;
-(void)setDelegate:(id<SXLayoutPipelineDelegate>)arg1 ;
-(void)layoutWithTask:(id)arg1 ;
-(void)addProcessor:(id)arg1 type:(unsigned long long)arg2 ;
-(void)removeProcessor:(id)arg1 type:(unsigned long long)arg2 ;
-(void)cancelTasks;
-(id<SXDOMObjectProviderFactory>)DOMObjectProviderFactory;
-(id<SXLayoutOperationFactory>)layoutOperationFactory;
-(void)finalizeLayoutForLayoutOperation:(id)arg1 task:(id)arg2 DOMObjectProvider:(id)arg3 ;
-(NSMutableArray *)preProcessors;
-(NSMutableArray *)postProcessors;
-(NSOperationQueue *)layoutOperationQueue;
-(id)initWithLayoutOperationFactory:(id)arg1 DOMObjectProviderFactory:(id)arg2 ;
@end

