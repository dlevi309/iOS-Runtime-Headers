/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXFeatureSpecManager.h>

@class PXPhotosDetailsAssetsSpec;

@interface PXPhotosDetailsAssetsSpecManager : PXFeatureSpecManager {

	unsigned long long _detailsOptions;

}

@property (nonatomic,readonly) PXPhotosDetailsAssetsSpec * spec; 
@property (nonatomic,readonly) unsigned long long detailsOptions;              //@synthesize detailsOptions=_detailsOptions - In the implementation block
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 detailsOptions:(unsigned long long)arg3 ;
-(unsigned long long)detailsOptions;
-(id)createSpec;
-(id)initWithExtendedTraitCollection:(id)arg1 detailsOptions:(unsigned long long)arg2 ;
-(Class)specClass;
@end

