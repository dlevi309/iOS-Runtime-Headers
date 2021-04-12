/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface NURenderPipelineRegistry : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _registry;

}
+(id)sharedRegistry;
-(id)init;
-(id)description;
-(void)_registerRenderPipeline:(id)arg1 forIdentifier:(id)arg2 ;
-(void)registerRenderPipeline:(id)arg1 forIdentifier:(id)arg2 ;
-(id)_renderPipelineForIdentifier:(id)arg1 ;
-(id)renderPipelineForIdentifier:(id)arg1 ;
@end

