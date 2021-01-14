/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXFeatureSpecManager.h>

@protocol PXZoomablePhotosUserDefaults;
@class NSArray, PXZoomablePhotosLayoutSpec;

@interface PXZoomablePhotosLayoutSpecManager : PXFeatureSpecManager {

	id<PXZoomablePhotosUserDefaults> _userDefaults;
	NSArray* _availableThumbnailSizes;

}

@property (nonatomic,readonly) PXZoomablePhotosLayoutSpec * spec; 
@property (nonatomic,retain) id<PXZoomablePhotosUserDefaults> userDefaults;              //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) NSArray * availableThumbnailSizes;                          //@synthesize availableThumbnailSizes=_availableThumbnailSizes - In the implementation block
-(void)setUserDefaults:(id<PXZoomablePhotosUserDefaults>)arg1 ;
-(id<PXZoomablePhotosUserDefaults>)userDefaults;
-(id)createSpec;
-(Class)specClass;
-(NSArray *)availableThumbnailSizes;
-(void)setAvailableThumbnailSizes:(NSArray *)arg1 ;
-(BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)arg1 change:(unsigned long long)arg2 ;
@end

