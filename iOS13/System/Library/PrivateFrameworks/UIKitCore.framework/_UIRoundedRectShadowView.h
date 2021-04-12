/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(CGRect)frameWithContentWithFrame:(CGRect)arg1 ;
-(void)_loadImageIfNecessary;
-(void)_updateShadowOutsetsIfNecessary;
-(double)maskCornerRadius;
@end

