/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKUITableViewCell.h>

@protocol EKCellShortener;
@class TwoPartTextLabel, UILabel, UIColor;

@interface PreferencesTwoPartValueCell : EKUITableViewCell {

	TwoPartTextLabel* _twoPartLabel;
	unsigned _notifiedShort;
	UILabel* _largePart2TextLabel;
	BOOL _strikeThroughLargeDetailTextLabel;
	BOOL _strikeThroughLargePart2TextLabel;
	id<EKCellShortener> _shortener;

}

@property (nonatomic,retain,readonly) TwoPartTextLabel * twoPartTextLabel; 
@property (assign,nonatomic,__weak) id<EKCellShortener> shortener;                      //@synthesize shortener=_shortener - In the implementation block
@property (nonatomic,retain,readonly) UIColor * valueColor; 
@property (nonatomic,retain,readonly) UILabel * largePart2TextLabel; 
@property (assign,nonatomic) BOOL strikeThroughLargeDetailTextLabel;                    //@synthesize strikeThroughLargeDetailTextLabel=_strikeThroughLargeDetailTextLabel - In the implementation block
@property (assign,nonatomic) BOOL strikeThroughLargePart2TextLabel;                     //@synthesize strikeThroughLargePart2TextLabel=_strikeThroughLargePart2TextLabel - In the implementation block
-(TwoPartTextLabel *)twoPartTextLabel;
-(void)setShortener:(id<EKCellShortener>)arg1 ;
-(UILabel *)largePart2TextLabel;
-(void)setStrikeThroughLargeDetailTextLabel:(BOOL)arg1 ;
-(void)setStrikeThroughLargePart2TextLabel:(BOOL)arg1 ;
-(id)description;
-(void)layoutSubviews;
-(void)shorten;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<EKCellShortener>)shortener;
-(UIColor *)valueColor;
-(void)layoutText:(id)arg1 andValue:(id)arg2 ;
-(void)checkValueWidths;
-(void)_layoutSubviewsCore;
-(BOOL)strikeThroughLargeDetailTextLabel;
-(BOOL)strikeThroughLargePart2TextLabel;
@end

