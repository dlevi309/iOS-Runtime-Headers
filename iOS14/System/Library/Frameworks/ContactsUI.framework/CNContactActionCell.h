/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)shouldIndentWhileEditing;
-(void)tintColorDidChange;
-(id)labelView;
-(CNContactAction *)action;
-(double)minCellHeight;
-(id)rightMostView;
-(BOOL)shouldPerformDefaultAction;
-(void)setLabelTextAttributes:(id)arg1 ;
-(void)setCardGroupItem:(id)arg1 ;
-(CNCardActionGroupItem *)actionGroupItem;
-(CNTransportButton *)transportIcon;
-(void)setTransportIcon:(CNTransportButton *)arg1 ;
-(id)variableConstraints;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
@end

