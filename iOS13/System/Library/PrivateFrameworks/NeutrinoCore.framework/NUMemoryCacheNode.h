/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUCacheNode.h>

@protocol NUBufferImage;
@interface NUMemoryCacheNode : NUCacheNode {

	id<NUBufferImage> _cachedImage;

}

@property (readonly) id<NUBufferImage> cachedImage;              //@synthesize cachedImage=_cachedImage - In the implementation block
-(id)persistentURL;
-(id<NUBufferImage>)cachedImage;
-(id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3 ;
-(BOOL)tryLoadPersistentURL:(id)arg1 error:(out id*)arg2 ;
-(id)newRenderRequestWithOriginalRequest:(id)arg1 error:(out id*)arg2 ;
-(void)resolveSourceWithResponse:(id)arg1 ;
@end

