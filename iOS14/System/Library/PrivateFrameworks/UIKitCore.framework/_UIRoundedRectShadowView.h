/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIShadowView.h>

@interface _UIRoundedRectShadowView : _UIShadowView {

	UIEdgeInsets _shadowOutsets;
	double _maskCornerRadius;

}

@property (nonatomic,readonly) double maskCornerRadius;              //@synthesize maskCornerRadius=_maskCornerRadius - In the implementation block
+(UIEdgeInsets)_expansionInsetForShadowImage;
+(BOOL)_shouldCutoutShadow;
-(void)_loadImageIfNecessary;
-(void)layoutSubviews;
-(CGRect)frameWithContentWithFrame:(CGRect)arg1 ;
-(double)maskCornerRadius;
-(id)initWithCornerRadius:(double)arg1 ;
-(void)_updateShadowOutsetsIfNecessary;
@end

