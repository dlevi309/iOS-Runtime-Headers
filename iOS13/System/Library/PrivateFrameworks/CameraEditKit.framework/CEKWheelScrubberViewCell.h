/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
*/

#import <CameraEditKit/CameraEditKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView;

@interface CEKWheelScrubberViewCell : UICollectionViewCell {

	UIView* _itemView;
	double _selectionDotCenterTopSpacing;
	long long _dotPlacement;
	UIView* __selectionDotView;
	UIView* __clippingView;

}

@property (nonatomic,readonly) UIView * _selectionDotView;                     //@synthesize _selectionDotView=__selectionDotView - In the implementation block
@property (nonatomic,readonly) UIView * _clippingView;                         //@synthesize _clippingView=__clippingView - In the implementation block
@property (nonatomic,readonly) UIView * itemView;                              //@synthesize itemView=_itemView - In the implementation block
@property (assign,nonatomic) double selectionDotCenterTopSpacing;              //@synthesize selectionDotCenterTopSpacing=_selectionDotCenterTopSpacing - In the implementation block
@property (assign,nonatomic) long long dotPlacement;                           //@synthesize dotPlacement=_dotPlacement - In the implementation block
+(CGSize)defaultSize;
+(double)borderInsetWidth;
+(CGSize)_defaultContentSize;
+(CGSize)screenScaleContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(UIView *)_clippingView;
-(UIView *)itemView;
-(void)_updateSelectionDot;
-(double)_selectionDotDiameter;
-(UIView *)_selectionDotView;
-(double)selectionDotCenterTopSpacing;
-(long long)dotPlacement;
-(void)setSelectionDotCenterTopSpacing:(double)arg1 ;
-(void)setDotPlacement:(long long)arg1 ;
@end

