/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NUVideoCacheNode.h>

@interface PIAutoLoopCacheNode : NUVideoCacheNode
+(id)nodeWithInput:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)persistentURL;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)descriptionSubClassHook;
-(long long)subsampleFactorForScale:(SCD_Struct_PI5)arg1 ;
-(id)newRenderRequestWithOriginalRequest:(id)arg1 error:(out id*)arg2 ;
-(id)outputSettings:(out id*)arg1 ;
-(id)persistentLongExposureURL;
-(id)persistentMaskURL;
@end

