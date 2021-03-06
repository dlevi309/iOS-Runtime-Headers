/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol _PLThumbnailLoadingAsset <NSObject>
@optional
-(id)uuid;
-(CGSize*)imageSize;
-(id)thumbnailIdentifier;

@required
-(id)objectID;
-(BOOL)complete;
-(unsigned long long)effectiveThumbnailIndex;
-(id)pl_photoLibrary;
-(long long)cloudPlaceholderKind;

@end

