/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <libobjc.A.dylib/AVTAvatarAttributeEditorLayout.h>

@protocol AVTAvatarAttributeEditorLayout;
@class NSString;

@interface AVTAvatarAttributeEditorOverridingLayout : NSObject <AVTAvatarAttributeEditorLayout> {

	double _avatarContainerAlpha;
	id<AVTAvatarAttributeEditorLayout> _backingLayout;
	CGRect _avatarContainerFrame;
	CGRect _attributesContentViewFrame;

}

@property (nonatomic,readonly) id<AVTAvatarAttributeEditorLayout> backingLayout;                     //@synthesize backingLayout=_backingLayout - In the implementation block
@property (assign,nonatomic) CGRect avatarContainerFrame;                                            //@synthesize avatarContainerFrame=_avatarContainerFrame - In the implementation block
@property (assign,nonatomic) double avatarContainerAlpha;                                            //@synthesize avatarContainerAlpha=_avatarContainerAlpha - In the implementation block
@property (assign,nonatomic) CGRect attributesContentViewFrame;                                      //@synthesize attributesContentViewFrame=_attributesContentViewFrame - In the implementation block
@property (nonatomic,readonly) CGSize containerSize; 
@property (nonatomic,readonly) UIEdgeInsets edgeInsets; 
@property (nonatomic,readonly) double screenScale; 
@property (nonatomic,copy,readonly) NSString * contentSizeCategory; 
@property (nonatomic,readonly) CGRect groupDialContainerFrame; 
@property (nonatomic,readonly) CGRect userInfoFrame; 
@property (nonatomic,readonly) double headerMaskingViewAlpha; 
@property (nonatomic,readonly) CGRect headerMaskingViewFrame; 
@property (nonatomic,readonly) double verticalRuleAlpha; 
@property (nonatomic,readonly) CGRect verticalRuleFrame; 
@property (nonatomic,readonly) UIEdgeInsets attributesContentViewInsets; 
@property (nonatomic,readonly) UIEdgeInsets attributesContentViewScrollIndicatorInsets; 
@property (nonatomic,readonly) unsigned long long supportedLayoutOrientation; 
-(CGSize)containerSize;
-(NSString *)contentSizeCategory;
-(UIEdgeInsets)edgeInsets;
-(id)initWithLayout:(id)arg1 ;
-(double)screenScale;
-(UIEdgeInsets)attributesContentViewInsets;
-(CGRect)groupDialContainerFrame;
-(CGRect)avatarContainerFrame;
-(unsigned long long)supportedLayoutOrientation;
-(CGRect)attributesContentViewFrame;
-(CGRect)userInfoFrame;
-(double)headerMaskingViewAlpha;
-(CGRect)headerMaskingViewFrame;
-(double)verticalRuleAlpha;
-(CGRect)verticalRuleFrame;
-(UIEdgeInsets)attributesContentViewScrollIndicatorInsets;
-(double)avatarContainerAlpha;
-(void)setAttributesContentViewFrame:(CGRect)arg1 ;
-(id<AVTAvatarAttributeEditorLayout>)backingLayout;
-(void)setAvatarContainerFrame:(CGRect)arg1 ;
-(void)setAvatarContainerAlpha:(double)arg1 ;
@end

