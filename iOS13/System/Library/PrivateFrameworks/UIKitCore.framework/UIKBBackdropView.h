/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIVisualEffectView.h>

@class UIImage;

@interface UIKBBackdropView : UIVisualEffectView {

	UIImage* _imageForCorners;

}

@property (nonatomic,retain) UIImage * imageForCorners;              //@synthesize imageForCorners=_imageForCorners - In the implementation block
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)_setRenderConfig:(id)arg1 ;
-(void)transitionToStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(BOOL)_applyCornerMaskToSelf;
-(int)textEffectsVisibilityLevel;
-(UIImage *)imageForCorners;
-(void)setImageForCorners:(UIImage *)arg1 ;
-(id)_generateCornerContentsImage:(unsigned long long)arg1 ;
-(void)updateFrame:(CGRect)arg1 withCorners:(unsigned long long)arg2 ;
@end

