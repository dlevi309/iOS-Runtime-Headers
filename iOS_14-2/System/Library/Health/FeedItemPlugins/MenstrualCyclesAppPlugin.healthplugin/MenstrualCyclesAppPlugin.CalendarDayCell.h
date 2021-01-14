/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <MenstrualCyclesAppPlugin/MenstrualCyclesAppPlugin-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSString;

@interface MenstrualCyclesAppPlugin.CalendarDayCell : UICollectionViewCell {

	 day;
	 dayLabel;
	 menstruationIndicator;
	 separator;
	 lastSize;
	 dayLabelHeight;
	 dayLabelWidth;
	 dayLabelBaseline;

}

@property (readonly,nonatomic) BOOL axDayShowsDayIndicator; 
@property (readonly,nonatomic) NSString * axDayLocalizedText; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)axDayShowsDayIndicator;
-(NSString *)axDayLocalizedText;
@end

