/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)imageForAccessibilityHUD;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setLayoutStyle:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIEdgeInsets)tappableEdgeInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isOn;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setOn:(BOOL)arg1 ;
-(long long)layoutStyle;
-(void)_commonCAMFilterButtonInitializationWithStyle:(long long)arg1 ;
-(void)layoutSubviews;
-(long long)orientation;
-(id)initWithCoder:(id)arg1 ;
-(id)_filterOnImage;
-(id)_filterImage;
-(void)setOrientation:(long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

