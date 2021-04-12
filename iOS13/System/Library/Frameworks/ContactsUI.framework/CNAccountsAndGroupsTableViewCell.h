/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UITableViewCell.h>

@class CNAccountsAndGroupsItem;

@interface CNAccountsAndGroupsTableViewCell : UITableViewCell {

	CNAccountsAndGroupsItem* _item;

}

@property (nonatomic,retain) CNAccountsAndGroupsItem * item;              //@synthesize item=_item - In the implementation block
-(void)dealloc;
-(CNAccountsAndGroupsItem *)item;
-(void)setItem:(CNAccountsAndGroupsItem *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)updateFromItem;
@end

