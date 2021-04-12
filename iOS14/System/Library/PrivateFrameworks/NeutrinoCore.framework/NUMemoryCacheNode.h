/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

