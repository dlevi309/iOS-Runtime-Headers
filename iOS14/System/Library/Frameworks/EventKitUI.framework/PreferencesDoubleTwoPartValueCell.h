/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(TwoPartTextLabel *)twoPartTextLabel2;
-(void)layoutText:(id)arg1 andValue:(id)arg2 ;
-(void)checkValueWidths;
-(void)_layoutSubviewsCore;
-(UILabel *)textLabel2;
@end

