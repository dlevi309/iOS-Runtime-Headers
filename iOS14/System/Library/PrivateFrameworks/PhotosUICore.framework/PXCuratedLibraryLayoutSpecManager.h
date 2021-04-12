/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXFeatureSpecManager.h>

@class NSArray, PXCuratedLibraryLayoutSpec;

@interface PXCuratedLibraryLayoutSpecManager : PXFeatureSpecManager {

	NSArray* _availableThumbnailSizes;

}

@property (nonatomic,readonly) PXCuratedLibraryLayoutSpec * spec; 
@property (nonatomic,retain) NSArray * availableThumbnailSizes;                //@synthesize availableThumbnailSizes=_availableThumbnailSizes - In the implementation block
-(id)createSpec;
-(Class)specClass;
-(NSArray *)availableThumbnailSizes;
-(void)setAvailableThumbnailSizes:(NSArray *)arg1 ;
-(BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)arg1 change:(unsigned long long)arg2 ;
@end

