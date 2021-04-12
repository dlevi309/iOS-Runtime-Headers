/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(BOOL)axDayShowsDayIndicator;
-(NSString *)axDayLocalizedText;
@end

