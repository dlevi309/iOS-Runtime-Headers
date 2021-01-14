/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@class UITableViewCell, UIImageView;

@interface UITableViewCellEditControl : UIControl {

	UITableViewCell* _cell;
	UIImageView* _imageView;
	UIImageView* _shadowView;
	double _focalY;
	double _focalHeight;
	unsigned _style : 2;
	unsigned _rotated : 1;
	unsigned _rotating : 1;
	unsigned _reserved : 27;

}

@property (assign,getter=isRotated,nonatomic) BOOL rotated; 
@property (nonatomic,readonly) BOOL wantsMaskingWhileAnimatingDisabled; 
@property (nonatomic,readonly) BOOL wantsImageShadow; 
-(id)_imageView;
-(unsigned long long)_controlEventsForActionTriggered;
-(id)viewForLastBaselineLayout;
-(id)viewForFirstBaselineLayout;
-(void)setRotated:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)adjustLayoutForFocalRect:(CGRect)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(BOOL)isRotated;
-(id)initWithTableViewCell:(id)arg1 editingStyle:(long long)arg2 ;
-(void)_multiselectColorChanged;
-(void)_toggleRotate;
-(void)setSelected:(BOOL)arg1 ;
-(CGSize)defaultSize;
-(id)_deleteImage;
-(id)_multiSelectNotSelectedImage;
-(id)_multiSelectSelectedImage;
-(BOOL)wantsImageShadow;
-(void)_createImageViewIfNeccessary;
-(void)_toggleRotateAnimationDidStop;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_shadowImage;
-(BOOL)wantsMaskingWhileAnimatingDisabled;
-(void)setRotated:(BOOL)arg1 ;
-(id)_currentImage;
-(void)_updateImageView;
-(id)_renderedImage;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isRotating;
-(id)_insertImage;
-(void)setHighlighted:(BOOL)arg1 ;
@end

