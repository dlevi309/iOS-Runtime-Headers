/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGCGImageTextureProvider.h>

@protocol PXGViewSource;
@class NSDateComponentsFormatter;

@interface PXGDecorationTextureProvider : PXGCGImageTextureProvider {

	id<PXGViewSource> _overlayViewSource;
	NSDateComponentsFormatter* _videoDurationFormatter;

}

@property (nonatomic,readonly) NSDateComponentsFormatter * videoDurationFormatter;              //@synthesize videoDurationFormatter=_videoDurationFormatter - In the implementation block
@property (assign,nonatomic,__weak) id<PXGViewSource> overlayViewSource;                        //@synthesize overlayViewSource=_overlayViewSource - In the implementation block
-(id)init;
-(void)_requestViewTextureForDecorationInfo:(PXGDecorationSpriteInfo)arg1 customViewClass:(Class)arg2 userData:(id)arg3 decorationOptions:(unsigned long long)arg4 requestID:(int)arg5 ;
-(void)_requestTextureForDecorationInfo:(PXGDecorationSpriteInfo)arg1 debugDecoration:(id)arg2 targetSize:(CGSize)arg3 cornerRadius:(SCD_Struct_PX13)arg4 screenScale:(double)arg5 requestID:(int)arg6 viewEnvironment:(id)arg7 userInterfaceDirection:(unsigned long long)arg8 ;
-(id<PXGViewSource>)overlayViewSource;
-(NSDateComponentsFormatter *)videoDurationFormatter;
-(void)setOverlayViewSource:(id<PXGViewSource>)arg1 ;
-(NSRange)requestTexturesForSpritesInRange:(PXGSpriteIndexRange)arg1 geometries:(SCD_Struct_PX11*)arg2 styles:(SCD_Struct_PX14*)arg3 infos:(SCD_Struct_PX15*)arg4 inLayout:(id)arg5 ;
@end

