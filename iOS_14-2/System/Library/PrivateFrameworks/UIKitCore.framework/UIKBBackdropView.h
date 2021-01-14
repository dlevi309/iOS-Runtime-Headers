/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIVisualEffectView.h>

@class UIImage;

@interface UIKBBackdropView : UIVisualEffectView {

	UIImage* _imageForCorners;

}

@property (nonatomic,retain) UIImage * imageForCorners;              //@synthesize imageForCorners=_imageForCorners - In the implementation block
-(void)_setRenderConfig:(id)arg1 ;
-(void)transitionToStyle:(long long)arg1 ;
-(int)textEffectsVisibilityLevel;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(id)_generateCornerContentsImage:(unsigned long long)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)updateFrame:(CGRect)arg1 withCorners:(unsigned long long)arg2 ;
-(UIImage *)imageForCorners;
-(BOOL)_applyCornerMaskToSelf;
-(void)setImageForCorners:(UIImage *)arg1 ;
-(void)dealloc;
@end

