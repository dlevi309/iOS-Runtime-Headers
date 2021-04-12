/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIImageView;

@interface CAMCreativeCameraButton : UIButton {

	BOOL _useCompactLayout;
	BOOL __overContent;
	long long _layoutStyle;
	long long _orientation;
	UIImageView* __circleBackgroundView;
	UIEdgeInsets _tappableEdgeInsets;

}

@property (getter=_isOverContent,nonatomic,readonly) BOOL _overContent;                   //@synthesize _overContent=__overContent - In the implementation block
@property (nonatomic,retain) UIImageView * _circleBackgroundView;                         //@synthesize _circleBackgroundView=__circleBackgroundView - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                       //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;                             //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
@property (assign,nonatomic) long long orientation;                                       //@synthesize orientation=_orientation - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,setter=useCompactLayout:,nonatomic) BOOL useCompactLayout;              //@synthesize useCompactLayout=_useCompactLayout - In the implementation block
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setLayoutStyle:(long long)arg1 ;
-(long long)layoutStyle;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateImages;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(BOOL)useCompactLayout;
-(UIImageView *)_circleBackgroundView;
-(void)set_circleBackgroundView:(UIImageView *)arg1 ;
-(UIEdgeInsets)tappableEdgeInsets;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(BOOL)_isOverContent;
-(id)initForOverContent;
-(void)_commonCAMCreativeCameraButtonInitializationWithStyle:(long long)arg1 overContent:(BOOL)arg2 ;
-(void)useCompactLayout:(BOOL)arg1 ;
@end

