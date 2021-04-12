/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@class PXGGradient;

@interface PXCuratedLibraryCardSectionBodyLayoutSpec : PXFeatureSpec {

	double _aspectRatio;
	double _horizontalMargin;
	PXGGradient* _skimmingHintGradient;
	double _distanceToNextLayout;
	SCD_Struct_PX81 _cornerRadius;
	UIEdgeInsets _padding;

}

@property (assign,nonatomic) double aspectRatio;                                //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX82 cornerRadius;                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                              //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) double horizontalMargin;                           //@synthesize horizontalMargin=_horizontalMargin - In the implementation block
@property (assign,nonatomic) double distanceToNextLayout;                       //@synthesize distanceToNextLayout=_distanceToNextLayout - In the implementation block
@property (nonatomic,readonly) PXGGradient * skimmingHintGradient;              //@synthesize skimmingHintGradient=_skimmingHintGradient - In the implementation block
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(double)aspectRatio;
-(SCD_Struct_PX82)cornerRadius;
-(void)setHorizontalMargin:(double)arg1 ;
-(PXGGradient *)skimmingHintGradient;
-(double)distanceToNextLayout;
-(void)setDistanceToNextLayout:(double)arg1 ;
-(void)setAspectRatio:(double)arg1 ;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)setCornerRadius:(SCD_Struct_PX82)arg1 ;
-(double)horizontalMargin;
@end

