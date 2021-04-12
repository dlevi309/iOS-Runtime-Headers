/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSString, UIView, UILabel;

@interface HUCalendarScrubberCollectionViewCell : UICollectionViewCell {

	BOOL _enabled;
	NSString* _dayOfWeekString;
	NSString* _dateString;
	UIView* _circleView;
	UILabel* _dateLabel;
	UILabel* _dayMonthLabel;

}

@property (nonatomic,retain) UIView * circleView;                        //@synthesize circleView=_circleView - In the implementation block
@property (nonatomic,retain) UILabel * dateLabel;                        //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,retain) UILabel * dayMonthLabel;                    //@synthesize dayMonthLabel=_dayMonthLabel - In the implementation block
@property (nonatomic,copy) NSString * dayOfWeekString;                   //@synthesize dayOfWeekString=_dayOfWeekString - In the implementation block
@property (nonatomic,copy) NSString * dateString;                        //@synthesize dateString=_dateString - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(UILabel *)dateLabel;
-(void)setDateLabel:(UILabel *)arg1 ;
-(void)setDateString:(NSString *)arg1 ;
-(NSString *)dateString;
-(UIView *)circleView;
-(void)setCircleView:(UIView *)arg1 ;
-(void)setDayOfWeekString:(NSString *)arg1 ;
-(UILabel *)dayMonthLabel;
-(NSString *)dayOfWeekString;
-(void)setDayMonthLabel:(UILabel *)arg1 ;
@end

