/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SKUIClientContext, _SKUICounterTimeFieldView, NSDate, UIColor, UIFont;

@interface SKUICounterTimeView : UIView {

	SKUIClientContext* _clientContext;
	_SKUICounterTimeFieldView* _daysFieldView;
	NSDate* _endDate;
	_SKUICounterTimeFieldView* _hoursFieldView;
	long long _lastTimeValue;
	_SKUICounterTimeFieldView* _minutesFieldView;
	_SKUICounterTimeFieldView* _secondsFieldView;
	UIColor* _textColor;
	UIFont* _valueFont;
	unsigned long long _visibleFields;

}

@property (nonatomic,copy) NSDate * endDate;                                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                             //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIFont * valueFont;                            //@synthesize valueFont=_valueFont - In the implementation block
@property (assign,nonatomic) unsigned long long visibleFields;              //@synthesize visibleFields=_visibleFields - In the implementation block
-(NSDate *)endDate;
-(UIColor *)textColor;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(UIFont *)valueFont;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setValueFont:(UIFont *)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(void)setVisibleFields:(unsigned long long)arg1 ;
-(unsigned long long)visibleFields;
-(void)reloadTimeValue;
-(void)_setValuesUsingTimestamp:(long long)arg1 ;
-(id)_allFieldViews;
-(id)_visibleFieldViews;
-(double)_fieldSpacingForFieldCount:(long long)arg1 fieldWidth:(double)arg2 totalWidth:(double)arg3 ;
@end

