/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol _PLThumbnailLoadingAsset <NSObject>
@optional
-(CGSize*)imageSize;
-(id)uuid;
-(id)thumbnailIdentifier;

@required
-(unsigned long long)effectiveThumbnailIndex;
-(id)pl_photoLibrary;
-(long long)cloudPlaceholderKind;
-(id)objectID;
-(BOOL)complete;

@end

