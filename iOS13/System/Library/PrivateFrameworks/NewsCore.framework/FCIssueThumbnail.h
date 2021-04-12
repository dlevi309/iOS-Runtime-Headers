/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


#import <NewsCore/NewsCore-Structs.h>
@class FCAssetHandle;

@interface FCIssueThumbnail : NSObject {

	FCAssetHandle* _thumbnailAssetHandle;
	CGSize _thumbnailSize;

}

@property (nonatomic,retain) FCAssetHandle * thumbnailAssetHandle;              //@synthesize thumbnailAssetHandle=_thumbnailAssetHandle - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;                              //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
+(id)issueThumbnailWithAssetHandle:(id)arg1 thumbnailSize:(CGSize)arg2 ;
-(CGSize)thumbnailSize;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(FCAssetHandle *)thumbnailAssetHandle;
-(void)setThumbnailAssetHandle:(FCAssetHandle *)arg1 ;
@end

