/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <AvatarUI/AVTAvatarAttributeEditorLayout.h>

@interface AVTAvatarAttributeEditorTransitionFromActionsStartingPortraitLayout : AVTAvatarAttributeEditorLayout {

	BOOL _showSideGroupPicker;
	double _avatarContainerAlpha;
	double _attributesContentViewExtraHeight;
	CGRect _avatarContainerFrame;

}

@property (nonatomic,readonly) double attributesContentViewExtraHeight;              //@synthesize attributesContentViewExtraHeight=_attributesContentViewExtraHeight - In the implementation block
-(id)backgroundColor;
-(CGRect)userInfoFrame;
-(BOOL)showSideGroupPicker;
-(UIEdgeInsets)attributesContentViewInsets;
-(CGRect)groupDialContainerFrame;
-(CGRect)sideGroupContainerFrame;
-(double)attributesContentViewExtraHeight;
-(CGRect)attributesContentViewFrame;
-(CGRect)avatarContainerFrame;
-(double)verticalRuleAlpha;
-(CGRect)verticalRuleFrame;
-(UIEdgeInsets)attributesContentViewScrollIndicatorInsets;
-(double)avatarContainerAlpha;
-(id)initWithContainerSize:(CGSize)arg1 insets:(UIEdgeInsets)arg2 screenScale:(double)arg3 RTL:(BOOL)arg4 avatarViewContainerFrame:(CGRect)arg5 attributesContentViewFrameExtraHeight:(double)arg6 avatarViewAlpha:(double)arg7 showSideGroupPicker:(BOOL)arg8 ;
-(unsigned long long)supportedLayoutOrientation;
-(double)headerMaskingViewAlpha;
-(CGRect)headerMaskingViewFrame;
@end

