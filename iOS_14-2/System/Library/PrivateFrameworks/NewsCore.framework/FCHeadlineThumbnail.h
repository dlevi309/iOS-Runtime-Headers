/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


#import <NewsCore/NewsCore-Structs.h>
@class FCAssetHandle;

@interface FCHeadlineThumbnail : NSObject {

	FCAssetHandle* _thumbnailAssetHandle;
	CGSize _thumbnailSize;

}

@property (nonatomic,retain) FCAssetHandle * thumbnailAssetHandle;              //@synthesize thumbnailAssetHandle=_thumbnailAssetHandle - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;                              //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
+(id)headlineThumbnailWithAssetHandle:(id)arg1 thumbnailSize:(CGSize)arg2 ;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(CGSize)thumbnailSize;
-(FCAssetHandle *)thumbnailAssetHandle;
-(void)setThumbnailAssetHandle:(FCAssetHandle *)arg1 ;
@end

