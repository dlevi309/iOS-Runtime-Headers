/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/CAMAccessibilityHUDImageProvider.h>

@class UIImageView, NSString;

@interface CAMFlipButton : UIButton <CAMAccessibilityHUDImageProvider> {

	BOOL __useCTMAppearance;
	long long _layoutStyle;
	long long _orientation;
	UIImageView* __imageView;
	UIImageView* __circleBackgroundView;
	UIEdgeInsets _tappableEdgeInsets;

}

@property (nonatomic,readonly) UIImageView * _imageView;                       //@synthesize _imageView=__imageView - In the implementation block
@property (nonatomic,retain) UIImageView * _circleBackgroundView;              //@synthesize _circleBackgroundView=__circleBackgroundView - In the implementation block
@property (nonatomic,readonly) BOOL _useCTMAppearance;                         //@synthesize _useCTMAppearance=__useCTMAppearance - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                            //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;                  //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
@property (assign,nonatomic) long long orientation;                            //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)flipButtonOverContent;
+(id)flipButtonWithLayoutStyle:(long long)arg1 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(UIImageView *)_imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setLayoutStyle:(long long)arg1 ;
-(long long)layoutStyle;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateImages;
-(UIImageView *)_circleBackgroundView;
-(void)set_circleBackgroundView:(UIImageView *)arg1 ;
-(UIEdgeInsets)tappableEdgeInsets;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)mainImageNameForAccessibilityHUD:(BOOL)arg1 ;
-(BOOL)_useCTMAppearance;
-(void)_commonCAMFlipButtonInitializationWithStyle:(long long)arg1 overContent:(BOOL)arg2 ;
-(id)imageForAccessibilityHUD;
@end

