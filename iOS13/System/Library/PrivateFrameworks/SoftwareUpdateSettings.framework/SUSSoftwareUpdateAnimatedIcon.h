/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateSettings.framework/SoftwareUpdateSettings
*/

#import <SoftwareUpdateSettings/SoftwareUpdateSettings-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface SUSSoftwareUpdateAnimatedIcon : UIView {

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

