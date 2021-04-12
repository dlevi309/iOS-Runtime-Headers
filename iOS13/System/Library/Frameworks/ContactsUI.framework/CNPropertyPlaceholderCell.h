/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNLabeledCell.h>

@class UILabel;

@interface CNPropertyPlaceholderCell : CNLabeledCell {

	UILabel* _label;

}

@property (nonatomic,retain) UILabel * label;              //@synthesize label=_label - In the implementation block
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(BOOL)shouldIndentWhileEditing;
-(id)labelView;
-(double)minCellHeight;
-(BOOL)shouldPerformDefaultAction;
-(void)setCardGroupItem:(id)arg1 ;
@end

