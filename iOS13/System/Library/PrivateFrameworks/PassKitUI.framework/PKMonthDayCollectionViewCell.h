/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(void)setDayNumber:(long long)arg1 ;
-(long long)dayNumber;
-(void)setDayNumber:(long long)arg1 withTitle:(id)arg2 ;
@end

