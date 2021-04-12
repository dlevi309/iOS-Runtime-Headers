/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


#import <Photos/Photos-Structs.h>
@class PLImageFormat;

@interface PHAssetResourceQualityClass : NSObject {

	BOOL _video;
	BOOL _croppedToSquare;
	BOOL _table;
	BOOL _thumbnail;
	PLImageFormat* _backingImageFormat;
	unsigned long long _backingCPLResourceType;
	unsigned long long _maxSideLengthIfSquare;
	unsigned long long _maxNumberOfPixelsIfSquare;

}

@property (nonatomic,retain) PLImageFormat * backingImageFormat;                           //@synthesize backingImageFormat=_backingImageFormat - In the implementation block
@property (assign,nonatomic) unsigned long long backingCPLResourceType;                    //@synthesize backingCPLResourceType=_backingCPLResourceType - In the implementation block
@property (getter=isVideo,nonatomic,readonly) BOOL video;                                  //@synthesize video=_video - In the implementation block
@property (getter=isCroppedToSquare,nonatomic,readonly) BOOL croppedToSquare;              //@synthesize croppedToSquare=_croppedToSquare - In the implementation block
@property (getter=isTable,nonatomic,readonly) BOOL table;                                  //@synthesize table=_table - In the implementation block
@property (getter=isThumbnail,nonatomic,readonly) BOOL thumbnail;                          //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,readonly) unsigned long long maxSideLengthIfSquare;                   //@synthesize maxSideLengthIfSquare=_maxSideLengthIfSquare - In the implementation block
@property (nonatomic,readonly) unsigned long long maxNumberOfPixelsIfSquare;               //@synthesize maxNumberOfPixelsIfSquare=_maxNumberOfPixelsIfSquare - In the implementation block
+(id)_thumbnailAssetResourceQualityClassesForCurrentDevice;
+(id)_cplDerivativeAssetResourceQualityClasses;
+(id)assetResourceQualityClasses;
+(id)allQualityClassesMatchingPredicate:(id)arg1 ;
+(id)anyQualityClassMatchingPredicate:(id)arg1 ;
-(id)description;
-(BOOL)isVideo;
-(long long)_compare:(id)arg1 ;
-(BOOL)isTable;
-(BOOL)isThumbnail;
-(id)initWithThumbnailFormat:(id)arg1 ;
-(id)initWithCPLResourceType:(unsigned long long)arg1 ;
-(id)tableThumbnailDataForAsset:(id)arg1 dataSpecification:(PHAssetResourceTableDataSpecification*)arg2 ;
-(void)preheatDataForThumbnailIndexes:(id)arg1 inLibrary:(id)arg2 ;
-(PLImageFormat *)backingImageFormat;
-(void)setBackingImageFormat:(PLImageFormat *)arg1 ;
-(unsigned long long)backingCPLResourceType;
-(void)setBackingCPLResourceType:(unsigned long long)arg1 ;
-(BOOL)isCroppedToSquare;
-(unsigned long long)maxSideLengthIfSquare;
-(unsigned long long)maxNumberOfPixelsIfSquare;
@end

