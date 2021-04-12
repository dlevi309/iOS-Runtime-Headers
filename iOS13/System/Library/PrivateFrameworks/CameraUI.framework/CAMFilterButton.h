/*
* Generated on Monday, March 1, 2021 at 2:33:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/CAMAccessibilityHUDImageProvider.h>

@class NSString;

@interface CAMFilterButton : UIButton <CAMAccessibilityHUDImageProvider> {

	long long _layoutStyle;
	long long _orientation;
	UIEdgeInsets _tappableEdgeInsets;

}

@property (assign,nonatomic) long long layoutStyle;                        //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,getter=isOn,nonatomic) BOOL on; 
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;              //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
@property (assign,nonatomic) long long orientation;                        //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)filterButtonWithLayoutStyle:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setLayoutStyle:(long long)arg1 ;
-(long long)layoutStyle;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setOn:(BOOL)arg1 ;
-(BOOL)isOn;
-(UIEdgeInsets)tappableEdgeInsets;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)imageForAccessibilityHUD;
-(void)_commonCAMFilterButtonInitializationWithStyle:(long long)arg1 ;
-(id)_filterImage;
-(id)_filterOnImage;
@end

