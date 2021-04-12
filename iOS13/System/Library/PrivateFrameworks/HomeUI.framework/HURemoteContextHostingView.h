/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface HURemoteContextHostingView : UIView {

	UIView* _contentView;
	UIView* _destinationOutContainerView;
	UIView* _destinationOutView;
	UIView* _destinationOverView;

}

@property (nonatomic,readonly) UIView * destinationOutContainerView;              //@synthesize destinationOutContainerView=_destinationOutContainerView - In the implementation block
@property (nonatomic,readonly) UIView * destinationOutView;                       //@synthesize destinationOutView=_destinationOutView - In the implementation block
@property (nonatomic,readonly) UIView * destinationOverView;                      //@synthesize destinationOverView=_destinationOverView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) unsigned long long maskedCorners; 
-(UIView *)contentView;
-(id)initWithContentView:(id)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(double)_cornerRadius;
-(void)setMaskedCorners:(unsigned long long)arg1 ;
-(void)_setCornerRadius:(double)arg1 ;
-(double)_continuousCornerRadius;
-(unsigned long long)maskedCorners;
-(UIView *)destinationOutView;
-(UIView *)destinationOutContainerView;
-(UIView *)destinationOverView;
@end

