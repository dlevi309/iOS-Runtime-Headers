/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNLabeledCell.h>

@protocol CNPropertyCellDelegate;
@class UILabel;

@interface CNLinkedCardsCell : CNLabeledCell {

	id<CNPropertyCellDelegate> _delegate;
	UILabel* _sourceLabel;
	UILabel* _nameLabel;

}

@property (nonatomic,readonly) UILabel * sourceLabel;                                 //@synthesize sourceLabel=_sourceLabel - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                                   //@synthesize nameLabel=_nameLabel - In the implementation block
@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)wantsChevron;
-(id<CNPropertyCellDelegate>)delegate;
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(void)updateConstraints;
-(id)labelView;
-(UILabel *)nameLabel;
-(id)valueView;
-(BOOL)shouldPerformDefaultAction;
-(void)setCardGroupItem:(id)arg1 ;
-(void)performDefaultAction;
-(UILabel *)sourceLabel;
@end

