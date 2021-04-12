/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXFeatureSpecManager.h>

@class NSArray, PXPhotosLayoutSpec;

@interface PXPhotosLayoutSpecManager : PXFeatureSpecManager {

	BOOL _sectionHeadersEnabled;
	NSArray* _availableThumbnailSizes;

}

@property (nonatomic,readonly) PXPhotosLayoutSpec * spec; 
@property (nonatomic,retain) NSArray * availableThumbnailSizes;              //@synthesize availableThumbnailSizes=_availableThumbnailSizes - In the implementation block
@property (nonatomic,readonly) BOOL sectionHeadersEnabled;                   //@synthesize sectionHeadersEnabled=_sectionHeadersEnabled - In the implementation block
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(id)createSpec;
-(Class)specClass;
-(NSArray *)availableThumbnailSizes;
-(BOOL)sectionHeadersEnabled;
-(void)setAvailableThumbnailSizes:(NSArray *)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 enableSectionHeaders:(BOOL)arg3 ;
-(BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)arg1 change:(unsigned long long)arg2 ;
@end

