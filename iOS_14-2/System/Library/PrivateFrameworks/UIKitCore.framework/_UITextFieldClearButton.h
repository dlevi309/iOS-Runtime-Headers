/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIButton.h>

@protocol _UITextFieldClearButtonImageProviding;
@interface _UITextFieldClearButton : UIButton {

	BOOL _hasCustomImage;
	id<_UITextFieldClearButtonImageProviding> _imageProvider;

}

@property (assign,nonatomic,__weak) id<_UITextFieldClearButtonImageProviding> imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
@property (assign,nonatomic) BOOL hasCustomImage;                                                         //@synthesize hasCustomImage=_hasCustomImage - In the implementation block
+(BOOL)_cursorInteractionEnabled;
-(BOOL)_isModernButton;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(BOOL)_shouldDefaultToTemplatesForImageViewBackground:(BOOL)arg1 ;
-(void)setImageProvider:(id<_UITextFieldClearButtonImageProviding>)arg1 ;
-(BOOL)hasCustomImage;
-(id<_UITextFieldClearButtonImageProviding>)imageProvider;
-(id)_defaultImageForState:(unsigned long long)arg1 withConfiguration:(id)arg2 ;
-(void)setHasCustomImage:(BOOL)arg1 ;
@end

