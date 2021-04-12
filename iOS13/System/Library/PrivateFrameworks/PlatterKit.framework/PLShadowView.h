/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

#import <PlatterKit/PlatterKit-Structs.h>
#import <UIKitCore/UIImageView.h>

@interface PLShadowView : UIImageView {

	UIEdgeInsets _shadowOutsets;
	double _maskCornerRadius;
	SCD_Struct_PL2 _shadowAttributes;

}

@property (nonatomic,readonly) SCD_Struct_PL3 shadowAttributes;              //@synthesize shadowAttributes=_shadowAttributes - In the implementation block
@property (nonatomic,readonly) double maskCornerRadius;                      //@synthesize maskCornerRadius=_maskCornerRadius - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(void)_dynamicUserInterfaceTraitDidChange;
-(CGRect)frameWithContentWithFrame:(CGRect)arg1 ;
-(void)_updateShadowVisualStyling;
-(void)_loadImageIfNecessary;
-(void)_updateShadowOutsetsIfNecessary;
-(double)maskCornerRadius;
-(id)initWithShadowAttributes:(SCD_Struct_PL3)arg1 maskCornerRadius:(double)arg2 ;
-(SCD_Struct_PL3)shadowAttributes;
@end

