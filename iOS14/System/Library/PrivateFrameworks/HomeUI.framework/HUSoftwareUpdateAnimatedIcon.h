/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface HUSoftwareUpdateAnimatedIcon : UIView {

	UIImageView* _innerGearView;
	UIImageView* _outerGearShadowView;
	UIImageView* _outerGearView;
	BOOL _animating;

}

@property (nonatomic,readonly) UIImageView * innerGearView; 
@property (nonatomic,readonly) UIImageView * outerGearShadowView; 
@property (nonatomic,readonly) UIImageView * outerGearView; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(UIImageView *)innerGearView;
-(UIImageView *)outerGearShadowView;
-(UIImageView *)outerGearView;
-(void)createConstraints;
@end

