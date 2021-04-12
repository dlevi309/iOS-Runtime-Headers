/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridStatusBadgeView.h>

@class UILabel;

@interface HUGridStatusNumberedBadgeView : HUGridStatusBadgeView {

	UILabel* _valueLabel;
	long long _value;

}

@property (nonatomic,readonly) UILabel * valueLabel;              //@synthesize valueLabel=_valueLabel - In the implementation block
@property (assign,nonatomic) long long value;                     //@synthesize value=_value - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setValue:(long long)arg1 ;
-(void)updateConstraints;
-(UILabel *)valueLabel;
-(long long)value;
@end

