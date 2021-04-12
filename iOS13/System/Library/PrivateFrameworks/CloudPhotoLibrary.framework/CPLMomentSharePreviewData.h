/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface CPLMomentSharePreviewData : PBCodable <NSCopying> {

	NSString* _cropRectString;
	NSString* _keyAssetIdentifier;
	NSMutableArray* _previewImageDatas;

}

@property (nonatomic,retain) NSMutableArray * previewImageDatas;              //@synthesize previewImageDatas=_previewImageDatas - In the implementation block
@property (nonatomic,readonly) BOOL hasKeyAssetIdentifier; 
@property (nonatomic,retain) NSString * keyAssetIdentifier;                   //@synthesize keyAssetIdentifier=_keyAssetIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasCropRectString; 
@property (nonatomic,retain) NSString * cropRectString;                       //@synthesize cropRectString=_cropRectString - In the implementation block
+(Class)previewImageDataType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCropRectString:(NSString *)arg1 ;
-(NSString *)cropRectString;
-(NSMutableArray *)previewImageDatas;
-(void)setKeyAssetIdentifier:(NSString *)arg1 ;
-(void)addPreviewImageData:(id)arg1 ;
-(NSString *)keyAssetIdentifier;
-(void)clearPreviewImageDatas;
-(unsigned long long)previewImageDatasCount;
-(id)previewImageDataAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasKeyAssetIdentifier;
-(BOOL)hasCropRectString;
-(void)setPreviewImageDatas:(NSMutableArray *)arg1 ;
@end

