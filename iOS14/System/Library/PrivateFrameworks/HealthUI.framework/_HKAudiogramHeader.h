/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIStackView.h>

@class UILabel;

@interface _HKAudiogramHeader : UIStackView {

	UILabel* _headerTitleView;
	UILabel* _headerValueView;
	UILabel* _headerDateView;

}

@property (nonatomic,readonly) UILabel * headerTitleView;              //@synthesize headerTitleView=_headerTitleView - In the implementation block
@property (nonatomic,readonly) UILabel * headerValueView;              //@synthesize headerValueView=_headerValueView - In the implementation block
@property (nonatomic,readonly) UILabel * headerDateView;               //@synthesize headerDateView=_headerDateView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_dateLabel;
-(UILabel *)headerTitleView;
-(id)_valueLabel;
-(id)_titleLabel;
-(UILabel *)headerValueView;
-(UILabel *)headerDateView;
@end

