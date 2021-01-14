/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
*/

#import <MaterialKit/MaterialKit-Structs.h>
#import <UIKitCore/UIImageView.h>

@interface MTShadowView : UIImageView {

	BOOL _continuousCorners;
	double _maskCornerRadius;
	UIEdgeInsets _shadowOutsets;
	SCD_Struct_MT3 _shadowAttributes;

}

@property (nonatomic,readonly) SCD_Struct_MT4 shadowAttributes;              //@synthesize shadowAttributes=_shadowAttributes - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets shadowOutsets;                   //@synthesize shadowOutsets=_shadowOutsets - In the implementation block
@property (nonatomic,readonly) double maskCornerRadius;                      //@synthesize maskCornerRadius=_maskCornerRadius - In the implementation block
@property (nonatomic,readonly) BOOL continuousCorners;                       //@synthesize continuousCorners=_continuousCorners - In the implementation block
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)didMoveToSuperview;
-(UIEdgeInsets)shadowOutsets;
-(void)_updateShadowVisualStyling;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)continuousCorners;
-(CGRect)frameWithContentWithFrame:(CGRect)arg1 ;
-(double)maskCornerRadius;
-(void)_updateShadowOutsetsIfNecessary;
-(id)initWithShadowAttributes:(SCD_Struct_MT4)arg1 maskCornerRadius:(double)arg2 ;
-(id)initWithShadowAttributes:(SCD_Struct_MT4)arg1 maskCornerRadius:(double)arg2 continuousCorners:(BOOL)arg3 ;
-(void)_validateImage;
-(SCD_Struct_MT4)shadowAttributes;
@end

