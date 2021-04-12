/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNLabeledCell.h>

@class UILabel;

@interface CNPropertyPlaceholderCell : CNLabeledCell {

	UILabel* _label;

}

@property (nonatomic,retain) UILabel * label;              //@synthesize label=_label - In the implementation block
+(BOOL)shouldIndentWhileEditing;
-(id)labelView;
-(double)minCellHeight;
-(BOOL)shouldPerformDefaultAction;
-(void)setCardGroupItem:(id)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
@end

