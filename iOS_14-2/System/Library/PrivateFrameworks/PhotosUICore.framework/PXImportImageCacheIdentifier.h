/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSString;

@interface PXImportImageCacheIdentifier : NSObject {

	NSString* _assetUuid;
	unsigned long long _sizeType;
	long long _cacheIndex;

}

@property (nonatomic,copy) NSString * assetUuid;                       //@synthesize assetUuid=_assetUuid - In the implementation block
@property (assign,nonatomic) unsigned long long sizeType;              //@synthesize sizeType=_sizeType - In the implementation block
@property (assign,nonatomic) long long cacheIndex;                     //@synthesize cacheIndex=_cacheIndex - In the implementation block
-(unsigned long long)sizeType;
-(void)setAssetUuid:(NSString *)arg1 ;
-(NSString *)assetUuid;
-(void)setSizeType:(unsigned long long)arg1 ;
-(void)setCacheIndex:(long long)arg1 ;
-(long long)cacheIndex;
@end

