/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXFeatureSpecManager.h>

@class PXCMMSpec;

@interface PXCMMSpecManager : PXFeatureSpecManager {

	unsigned long long _activityType;

}

@property (nonatomic,readonly) PXCMMSpec * spec; 
@property (nonatomic,readonly) unsigned long long activityType;              //@synthesize activityType=_activityType - In the implementation block
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)activityType;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 activityType:(unsigned long long)arg3 ;
-(id)createSpec;
-(id)initWithExtendedTraitCollection:(id)arg1 activityType:(unsigned long long)arg2 ;
@end

