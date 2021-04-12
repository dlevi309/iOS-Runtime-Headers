/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel, UIView;

@interface PKMonthDayCollectionViewCell : UICollectionViewCell {

	UILabel* _dayLabel;
	UIView* _topLine;
	UIView* _leftLine;
	UIView* _bottomLine;
	BOOL _enabled;
	long long _dayNumber;

}

@property (assign,nonatomic) long long dayNumber;                        //@synthesize dayNumber=_dayNumber - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(long long)dayNumber;
-(void)layoutSubviews;
-(void)setDayNumber:(long long)arg1 ;
-(void)setDayNumber:(long long)arg1 withTitle:(id)arg2 ;
-(BOOL)isEnabled;
@end

