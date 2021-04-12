/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <libobjc.A.dylib/AVTAvatarAttributeEditorLayout.h>

@class NSString;

@interface AVTAvatarAttributeEditorLayout : NSObject <AVTAvatarAttributeEditorLayout> {

	double _screenScale;
	NSString* _contentSizeCategory;
	CGSize _containerSize;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,readonly) CGSize containerSize;                                                 //@synthesize containerSize=_containerSize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets edgeInsets;                                              //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,readonly) double screenScale;                                                   //@synthesize screenScale=_screenScale - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentSizeCategory;                                  //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (nonatomic,readonly) CGRect avatarContainerFrame; 
@property (nonatomic,readonly) double avatarContainerAlpha; 
@property (nonatomic,readonly) CGRect groupDialContainerFrame; 
@property (nonatomic,readonly) CGRect attributesContentViewFrame; 
@property (nonatomic,readonly) CGRect userInfoFrame; 
@property (nonatomic,readonly) double headerMaskingViewAlpha; 
@property (nonatomic,readonly) CGRect headerMaskingViewFrame; 
@property (nonatomic,readonly) double verticalRuleAlpha; 
@property (nonatomic,readonly) CGRect verticalRuleFrame; 
@property (nonatomic,readonly) UIEdgeInsets attributesContentViewInsets; 
@property (nonatomic,readonly) UIEdgeInsets attributesContentViewScrollIndicatorInsets; 
@property (nonatomic,readonly) unsigned long long supportedLayoutOrientation; 
-(CGSize)containerSize;
-(id)backgroundColor;
-(NSString *)contentSizeCategory;
-(UIEdgeInsets)edgeInsets;
-(double)screenScale;
-(id)initWithContainerSize:(CGSize)arg1 insets:(UIEdgeInsets)arg2 screenScale:(double)arg3 ;
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
-(void)raiseExceptionForPropertyString:(id)arg1 ;
@end

