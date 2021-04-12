/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIView *)tintView;
-(void)setTintView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(id)initWithEffect:(id)arg1 ;
@end

