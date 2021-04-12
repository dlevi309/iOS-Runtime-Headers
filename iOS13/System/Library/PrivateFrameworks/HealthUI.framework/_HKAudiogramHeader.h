/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_titleLabel;
-(id)_dateLabel;
-(id)_valueLabel;
-(UILabel *)headerTitleView;
-(UILabel *)headerValueView;
-(UILabel *)headerDateView;
@end

