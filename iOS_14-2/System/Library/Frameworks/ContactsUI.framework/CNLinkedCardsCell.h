/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)labelView;
-(id)valueView;
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(void)updateConstraints;
-(BOOL)shouldPerformDefaultAction;
-(void)setCardGroupItem:(id)arg1 ;
-(UILabel *)sourceLabel;
-(void)performDefaultAction;
-(UILabel *)nameLabel;
@end

