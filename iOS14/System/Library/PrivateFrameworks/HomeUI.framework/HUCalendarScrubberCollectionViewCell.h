/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)dateLabel;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)layoutSubviews;
-(NSString *)dateString;
-(BOOL)isEnabled;
-(void)setDateString:(NSString *)arg1 ;
-(void)setDateLabel:(UILabel *)arg1 ;
-(void)setDayOfWeekString:(NSString *)arg1 ;
-(UIView *)circleView;
-(UILabel *)dayMonthLabel;
-(NSString *)dayOfWeekString;
-(void)setCircleView:(UIView *)arg1 ;
-(void)setDayMonthLabel:(UILabel *)arg1 ;
@end

