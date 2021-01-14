/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(double)_continuousCornerRadius;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(double)_cornerRadius;
-(id)initWithContentView:(id)arg1 ;
-(unsigned long long)maskedCorners;
-(void)setMaskedCorners:(unsigned long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)_setCornerRadius:(double)arg1 ;
-(UIView *)contentView;
-(UIView *)destinationOutView;
-(UIView *)destinationOutContainerView;
-(UIView *)destinationOverView;
@end

