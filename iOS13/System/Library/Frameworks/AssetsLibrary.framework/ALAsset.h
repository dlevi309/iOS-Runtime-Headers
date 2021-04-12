/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
*/


#import <AssetsLibrary/AssetsLibrary-Structs.h>
@class ALAssetPrivate;

@interface ALAsset : NSObject {

	id _internal;

}

@property (nonatomic,retain) ALAssetPrivate * internal;                      //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) ALAsset * originalAsset; 
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
+(CGSize)largePreviewImageSizeForSize:(CGSize)arg1 ;
-(void)dealloc;
-(id)description;
-(BOOL)isValid;
-(id)_uuid;
-(BOOL)isDeletable;
-(ALAssetPrivate *)internal;
-(void)setInternal:(ALAssetPrivate *)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)isEditable;
-(id)defaultRepresentation;
-(CGImageRef)thumbnail;
-(ALAsset *)originalAsset;
-(CGImageRef)aspectRatioThumbnail;
-(id)initWithManagedAsset:(id)arg1 library:(id)arg2 ;
-(id)_typeAsString;
-(id)representationForUTI:(id)arg1 ;
-(void)writeModifiedImageDataToSavedPhotosAlbum:(id)arg1 metadata:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)writeModifiedVideoAtPathToSavedPhotosAlbum:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_newContentEditingOutputWithType:(long long)arg1 ;
-(void)setImageData:(id)arg1 metadata:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setVideoAtPath:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)requestDefaultRepresentation;
@end

