/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)isExpanded;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2 ;
-(double)heightForTextLayout:(id)arg1 isExpanded:(BOOL)arg2 ;
-(id)textBoxTableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
@end

