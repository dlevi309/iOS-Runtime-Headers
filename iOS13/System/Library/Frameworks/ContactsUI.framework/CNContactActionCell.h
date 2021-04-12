/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNLabeledCell.h>

@class UILabel, CNTransportButton, CNCardActionGroupItem, CNContactAction;

@interface CNContactActionCell : CNLabeledCell {

	UILabel* _label;
	CNTransportButton* _transportIcon;

}

@property (nonatomic,retain) UILabel * label;                                        //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) CNTransportButton * transportIcon;                      //@synthesize transportIcon=_transportIcon - In the implementation block
@property (nonatomic,readonly) CNCardActionGroupItem * actionGroupItem; 
@property (nonatomic,readonly) CNContactAction * action; 
-(CNContactAction *)action;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(void)tintColorDidChange;
-(BOOL)shouldIndentWhileEditing;
-(id)labelView;
-(id)variableConstraints;
-(double)minCellHeight;
-(BOOL)shouldPerformDefaultAction;
-(id)rightMostView;
-(void)setLabelTextAttributes:(id)arg1 ;
-(void)setCardGroupItem:(id)arg1 ;
-(CNCardActionGroupItem *)actionGroupItem;
-(CNTransportButton *)transportIcon;
-(void)setTransportIcon:(CNTransportButton *)arg1 ;
@end

