/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXFeatureSpecManager.h>

@class PXMemoriesSpec;

@interface PXMemoriesSpecManager : PXFeatureSpecManager {

	unsigned long long _style;

}

@property (nonatomic,readonly) unsigned long long style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) PXMemoriesSpec * spec; 
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(id)createSpec;
-(Class)specClass;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 style:(unsigned long long)arg3 ;
-(unsigned long long)style;
-(BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)arg1 change:(unsigned long long)arg2 ;
@end

