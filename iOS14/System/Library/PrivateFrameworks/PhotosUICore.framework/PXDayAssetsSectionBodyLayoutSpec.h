/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@interface PXDayAssetsSectionBodyLayoutSpec : PXFeatureSpec {

	long long _numberOfColumns;
	double _interitemSpacing;
	SCD_Struct_PX81 _bodyCornerRadius;

}

@property (nonatomic,readonly) long long numberOfColumns;                     //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (nonatomic,readonly) double interitemSpacing;                       //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX82 bodyCornerRadius;              //@synthesize bodyCornerRadius=_bodyCornerRadius - In the implementation block
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(double)interitemSpacing;
-(long long)numberOfColumns;
-(SCD_Struct_PX82)bodyCornerRadius;
@end

