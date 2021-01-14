/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXFeedTestSectionInfo.h>

@class NSArray;

@interface PXFeedTestAssetsSectionInfo : PXFeedTestSectionInfo {

	NSArray* _plAssets;

}

@property (nonatomic,readonly) NSArray * plAssets;              //@synthesize plAssets=_plAssets - In the implementation block
-(id)initWithPhotoLibrary:(id)arg1 ;
-(long long)typeForItemAtIndex:(long long)arg1 ;
-(id)countsByAssetDisplayType;
-(NSArray *)plAssets;
-(long long)sectionType;
-(id)assetForItemAtIndex:(long long)arg1 ;
-(id)_fetchPhotoAssets:(long long)arg1 ;
@end

