/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UITableView;

@interface STSCategoryView : UIView {

	UITableView* _tableView;
	CGPoint _footerOffset;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,readonly) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;              //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) CGPoint footerOffset;                   //@synthesize footerOffset=_footerOffset - In the implementation block
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(id)init;
-(UIEdgeInsets)contentInset;
-(UITableView *)tableView;
-(void)setFooterOffset:(CGPoint)arg1 ;
-(CGPoint)footerOffset;
@end

