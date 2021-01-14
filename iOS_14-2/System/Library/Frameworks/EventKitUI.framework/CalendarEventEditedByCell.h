/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKUIConstrainedFontsTableViewCell.h>

@protocol EKCellShortener;
@class UILabel;

@interface CalendarEventEditedByCell : EKUIConstrainedFontsTableViewCell {

	UILabel* _titleLabel2;
	UILabel* _valueLabel2;
	unsigned _valuePlaceholder : 2;
	id<EKCellShortener> _shortener;

}

@property (nonatomic,retain,readonly) UILabel * textLabel2; 
@property (nonatomic,retain,readonly) UILabel * detailTextLabel2; 
@property (assign,nonatomic,__weak) id<EKCellShortener> shortener;              //@synthesize shortener=_shortener - In the implementation block
-(void)setShortener:(id<EKCellShortener>)arg1 ;
-(void)layoutSubviews;
-(void)_checkValueWidth;
-(id<EKCellShortener>)shortener;
-(UILabel *)detailTextLabel2;
-(void)_copyTextLabelAttributesFrom:(id)arg1 to:(id)arg2 ;
-(BOOL)detailTextIsPlaceholder;
-(BOOL)detailText2IsPlaceholder;
-(void)setDetailTextIsPlaceholder:(BOOL)arg1 ;
-(void)setDetailText2IsPlaceholder:(BOOL)arg1 ;
-(UILabel *)textLabel2;
@end

