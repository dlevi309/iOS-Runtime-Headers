/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGCGImageTextureProvider.h>

@class NSBundle;

@interface PXGNamedImageTextureProvider : PXGCGImageTextureProvider {

	NSBundle* _bundle;

}

@property (nonatomic,retain) NSBundle * bundle;              //@synthesize bundle=_bundle - In the implementation block
-(NSBundle *)bundle;
-(void)setBundle:(NSBundle *)arg1 ;
-(void)_requestTextureForImageWithName:(id)arg1 inBundle:(id)arg2 isSystemImage:(BOOL)arg3 tintColor:(id)arg4 imageConfiguration:(id)arg5 userInterfaceDirection:(unsigned long long)arg6 screenScale:(double)arg7 requestID:(int)arg8 ;
-(NSRange)requestTexturesForSpritesInRange:(PXGSpriteIndexRange)arg1 geometries:(SCD_Struct_PX106*)arg2 styles:(SCD_Struct_PX83*)arg3 infos:(SCD_Struct_PX15*)arg4 inLayout:(id)arg5 ;
@end

