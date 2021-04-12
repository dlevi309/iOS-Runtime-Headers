/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <UIKitCore/UIVisualEffectView.h>

@class UIView;

@interface HRWDVisualEffectView : UIVisualEffectView {

	UIView* _tintView;

}

@property (nonatomic,retain) UIView * tintView;              //@synthesize tintView=_tintView - In the implementation block
+(id)tintViewWithBlurEffectStyle:(long long)arg1 color:(id)arg2 ;
+(id)ultraLightTintView;
-(id)initWithEffect:(id)arg1 ;
-(void)layoutSubviews;
-(UIView *)tintView;
-(void)setTintView:(UIView *)arg1 ;
@end

