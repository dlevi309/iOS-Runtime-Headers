/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/PreferencesTwoPartValueCell.h>

@class UILabel, TwoPartTextLabel;

@interface PreferencesDoubleTwoPartValueCell : PreferencesTwoPartValueCell {

	UILabel* _textLabel2;
	TwoPartTextLabel* _twoPartLabel2;

}

@property (nonatomic,retain,readonly) UILabel * textLabel2; 
@property (nonatomic,retain,readonly) TwoPartTextLabel * twoPartTextLabel2; 
-(UILabel *)textLabel2;
-(TwoPartTextLabel *)twoPartTextLabel2;
-(void)layoutText:(id)arg1 andValue:(id)arg2 ;
-(void)checkValueWidths;
-(void)_layoutSubviewsCore;
@end

