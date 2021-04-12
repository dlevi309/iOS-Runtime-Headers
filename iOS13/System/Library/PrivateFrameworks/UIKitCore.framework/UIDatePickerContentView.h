/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, _UIDatePickerMode;

@interface UIDatePickerContentView : UIView {

	SCD_Struct_UI30 _datePickerContentViewFlags;
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
-(void)setMode:(_UIDatePickerMode *)arg1 ;
-(_UIDatePickerMode *)mode;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(void)setTitleAlignment:(long long)arg1 ;
-(long long)titleAlignment;
-(id)initWithMode:(id)arg1 ;
-(BOOL)_canBeReusedInPickerView;
-(BOOL)isAmPm;
-(void)setIsAmPm:(BOOL)arg1 ;
-(void)setTitleLabelMaxX:(double)arg1 ;
-(double)titleLabelMaxX;
@end

