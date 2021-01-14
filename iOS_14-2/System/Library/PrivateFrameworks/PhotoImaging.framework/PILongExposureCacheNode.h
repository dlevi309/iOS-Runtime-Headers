/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <NeutrinoCore/NUCacheNode.h>

@interface PILongExposureCacheNode : NUCacheNode
-(id)persistentURL;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3 ;
-(BOOL)tryLoadPersistentURL:(id)arg1 error:(out id*)arg2 ;
-(id)evaluateRenderDependenciesWithRequest:(id)arg1 error:(out id*)arg2 ;
-(id)resolvedSourceNode:(out id*)arg1 ;
-(id)initWithAutoLoopCacheNode:(id)arg1 urlKey:(id)arg2 ;
-(id)autoLoopCacheNode;
@end

