/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface HUCircleView : UIView {

	BOOL _backgroundColorFollowsTintColor;
	BOOL _borderColorFollowsTintColor;
	UIView* _controlCenterMaterialView;

}

@property (nonatomic,retain) UIView * controlCenterMaterialView;                //@synthesize controlCenterMaterialView=_controlCenterMaterialView - In the implementation block
@property (assign,nonatomic) BOOL backgroundColorFollowsTintColor;              //@synthesize backgroundColorFollowsTintColor=_backgroundColorFollowsTintColor - In the implementation block
@property (assign,nonatomic) BOOL borderColorFollowsTintColor;                  //@synthesize borderColorFollowsTintColor=_borderColorFollowsTintColor - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)backgroundColorFollowsTintColor;
-(void)setBackgroundColorFollowsTintColor:(BOOL)arg1 ;
-(UIView *)controlCenterMaterialView;
-(BOOL)borderColorFollowsTintColor;
-(void)setBorderColorFollowsTintColor:(BOOL)arg1 ;
-(void)setControlCenterMaterialView:(UIView *)arg1 ;
@end

