/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUITableViewSection.h>

@class UIView;

@interface SKUIRedeemResultSimpleTableViewSection : SKUITableViewSection {

	UIEdgeInsets _contentInsets;
	UIView* _view;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(id)initWithView:(id)arg1 ;
-(long long)numberOfRowsInSection;
-(double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3 ;
@end

