/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertyPlaceholderCell.h>

@protocol CNPropertyCellDelegate;
@interface CNLinkedCardsPlaceholderCell : CNPropertyPlaceholderCell {

	id<CNPropertyCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CNPropertyCellDelegate>)delegate;
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(void)performDefaultAction;
@end

