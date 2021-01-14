/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, _UIDatePickerMode;

@interface UIDatePickerContentView : UIView {

	SCD_Struct_UI34 _datePickerContentViewFlags;
	UILabel* _titleLabel;
	double _titleLabelMaxX;
	long long _titleAlignment;
	_UIDatePickerMode* _mode;

}

@property (nonatomic,retain) _UIDatePickerMode * mode;              //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) double titleLabelMaxX;                 //@synthesize titleLabelMaxX=_titleLabelMaxX - In the implementation block
@property (assign,nonatomic) BOOL isAmPm; 
@property (assign,nonatomic) long long titleAlignment;              //@synthesize titleAlignment=_titleAlignment - In the implementation block
-(UILabel *)titleLabel;
-(_UIDatePickerMode *)mode;
-(BOOL)isAmPm;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setIsAmPm:(BOOL)arg1 ;
-(id)initWithMode:(id)arg1 ;
-(void)setMode:(_UIDatePickerMode *)arg1 ;
-(void)layoutSubviews;
-(double)titleLabelMaxX;
-(void)setTitleLabelMaxX:(double)arg1 ;
-(long long)titleAlignment;
-(void)setTitleAlignment:(long long)arg1 ;
-(BOOL)_canBeReusedInPickerView;
@end

