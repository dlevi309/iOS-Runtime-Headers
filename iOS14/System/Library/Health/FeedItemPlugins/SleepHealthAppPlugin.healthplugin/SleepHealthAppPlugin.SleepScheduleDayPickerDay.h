/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/SleepHealthAppPlugin.healthplugin/SleepHealthAppPlugin
*/

#import <SleepHealthAppPlugin/SleepHealthAppPlugin-Structs.h>
#import <UIKitCore/UIControl.h>

@interface SleepHealthAppPlugin.SleepScheduleDayPickerDay : UIControl {

	 configuration;
	 day;
	 background;
	 dayLabel;
	 isSelectedElsewhere;

}

@property (assign,nonatomic) BOOL selected; 
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)accessibilityWeekday;
@end

