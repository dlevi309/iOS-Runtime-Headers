/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIButton.h>

@interface _UIModernBarButton : UIButton {

	UIEdgeInsets __additionalSelectionInsets;

}

@property (assign,setter=_setAdditionalSelectionInsets:,nonatomic) UIEdgeInsets _additionalSelectionInsets;              //@synthesize _additionalSelectionInsets=__additionalSelectionInsets - In the implementation block
-(CGRect)_selectedIndicatorBounds;
-(void)_setAdditionalSelectionInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)_additionalSelectionInsets;
-(BOOL)_supportsMacIdiom;
-(BOOL)_shouldAdjustToTraitCollection;
-(BOOL)_likelyToHaveTitle;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(id)_newLabelWithFrame:(CGRect)arg1 ;
-(CGSize)_roundSize:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

