/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUITableViewSection.h>

@class SKUIClientContext;

@interface SKUIProductPageTableSection : SKUITableViewSection {

	SKUIClientContext* _clientContext;
	BOOL _expanded;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                //@synthesize expanded=_expanded - In the implementation block
-(BOOL)isExpanded;
-(void)setExpanded:(BOOL)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2 ;
-(double)heightForTextLayout:(id)arg1 isExpanded:(BOOL)arg2 ;
-(id)textBoxTableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
@end

