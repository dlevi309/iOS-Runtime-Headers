/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExposureNotificationUI.framework/HealthExposureNotificationUI
*/

#import <HealthExposureNotificationUI/HealthExposureNotificationUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface HealthExposureNotificationUI.IconTextView : UIView {

	 icon;
	 details;
	 highlightedText;
	 delegate;
	 textStack;
	 iconView;

}

@property (readonly,nonatomic) CGSize intrinsicContentSize; 
@property (retain,nonatomic) UIColor * tintColor; 
-(CGSize)intrinsicContentSize;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)tintColor;
-(void)didTapText:(id)arg1 ;
@end

