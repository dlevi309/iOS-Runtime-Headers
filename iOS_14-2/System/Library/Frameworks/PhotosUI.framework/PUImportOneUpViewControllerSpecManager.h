/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXFeatureSpecManager.h>

@class PUImportOneUpViewControllerSpec;

@interface PUImportOneUpViewControllerSpecManager : PXFeatureSpecManager {

	unsigned long long _style;

}

@property (nonatomic,readonly) PUImportOneUpViewControllerSpec * spec; 
@property (nonatomic,readonly) unsigned long long style;                            //@synthesize style=_style - In the implementation block
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(id)createSpec;
-(Class)specClass;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 style:(unsigned long long)arg3 ;
-(unsigned long long)style;
@end

