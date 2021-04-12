/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

