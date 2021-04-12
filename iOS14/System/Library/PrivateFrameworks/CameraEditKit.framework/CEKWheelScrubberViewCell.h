/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(CGSize)screenScaleContentSize;
+(double)borderInsetWidth;
+(CGSize)defaultSize;
+(CGSize)_defaultContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)itemView;
-(void)setSelected:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setDotPlacement:(long long)arg1 ;
-(void)setSelectionDotCenterTopSpacing:(double)arg1 ;
-(UIView *)_clippingView;
-(void)_updateSelectionDot;
-(double)_selectionDotDiameter;
-(UIView *)_selectionDotView;
-(double)selectionDotCenterTopSpacing;
-(long long)dotPlacement;
@end

