/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGCGImageTextureProvider.h>

@interface PXGTitleSubtitleTextureProvider : PXGCGImageTextureProvider
-(id)workQueue;
-(NSRange)requestTexturesForSpritesInRange:(PXGSpriteIndexRange)arg1 geometries:(SCD_Struct_PX11*)arg2 styles:(SCD_Struct_PX14*)arg3 infos:(SCD_Struct_PX15*)arg4 inLayout:(id)arg5 ;
-(void)_requestTextureForTitle:(id)arg1 subtitle:(id)arg2 spec:(id)arg3 targetSize:(CGSize)arg4 screenScale:(double)arg5 requestID:(int)arg6 renderCompletionHandler:(/*^block*/id)arg7 ;
@end

