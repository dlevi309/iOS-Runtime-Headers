/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUCacheNode.h>

@interface NUVideoCacheNode : NUCacheNode
-(id)persistentURL;
-(id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3 ;
-(BOOL)tryLoadPersistentURL:(id)arg1 error:(out id*)arg2 ;
-(id)newRenderRequestWithOriginalRequest:(id)arg1 error:(out id*)arg2 ;
-(id)outputSettings:(out id*)arg1 ;
@end

