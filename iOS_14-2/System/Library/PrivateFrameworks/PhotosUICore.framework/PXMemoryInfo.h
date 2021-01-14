/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PHAssetCollection, PHFetchResult, PHAsset;

@interface PXMemoryInfo : NSObject <NSCopying> {

	NSString* _localizedDateText;
	NSString* _localizedTitle;
	PHAssetCollection* _assetCollection;
	PHFetchResult* _keyAssetFetchResult;

}

@property (nonatomic,readonly) NSString * localizedDateText;                     //@synthesize localizedDateText=_localizedDateText - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle;                        //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * assetCollection;              //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) PHAsset * primaryAsset; 
@property (nonatomic,readonly) unsigned long long category; 
@property (nonatomic,readonly) double score; 
@property (nonatomic,readonly) PHFetchResult * keyAssetFetchResult;              //@synthesize keyAssetFetchResult=_keyAssetFetchResult - In the implementation block
+(id)memoryInfoWithMemory:(id)arg1 ;
+(id)fastMemoryInfoWithMemory:(id)arg1 ;
+(id)memoryInfoWithAssetCollection:(id)arg1 keyAssetFetchResult:(id)arg2 ;
-(NSString *)localizedTitle;
-(id)memoryInfoWithUpdatedKeyAssetFetchResult:(id)arg1 ;
-(PHAsset *)primaryAsset;
-(double)score;
-(unsigned long long)category;
-(id)description;
-(PHFetchResult *)keyAssetFetchResult;
-(NSString *)localizedDateText;
-(PHAssetCollection *)assetCollection;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

