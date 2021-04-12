/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


#import <Photos/Photos-Structs.h>
@class CPLMomentSharePreviewData, NSData, NSArray, PHAsset, NSString;

@interface PHMomentSharePreview : NSObject {

	CPLMomentSharePreviewData* _previewData;
	NSData* _thumbnailImageData;
	NSArray* _previewImageData;
	PHAsset* _keyAsset;
	CGRect _cropRect;

}

@property (nonatomic,copy) NSData * thumbnailImageData;                    //@synthesize thumbnailImageData=_thumbnailImageData - In the implementation block
@property (nonatomic,copy) NSArray * previewImageData;                     //@synthesize previewImageData=_previewImageData - In the implementation block
@property (nonatomic,copy) PHAsset * keyAsset;                             //@synthesize keyAsset=_keyAsset - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                              //@synthesize cropRect=_cropRect - In the implementation block
@property (nonatomic,readonly) NSString * keyAssetIdentifier; 
-(id)description;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(NSData *)thumbnailImageData;
-(void)setThumbnailImageData:(NSData *)arg1 ;
-(PHAsset *)keyAsset;
-(void)setKeyAsset:(PHAsset *)arg1 ;
-(id)initWithThumbnailImageData:(id)arg1 previewData:(id)arg2 ;
-(NSString *)keyAssetIdentifier;
-(NSArray *)previewImageData;
-(void)setPreviewImageData:(NSArray *)arg1 ;
@end

