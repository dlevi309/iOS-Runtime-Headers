/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIProductPageTableSection.h>

@class SKUIClientContext, SKUIColorScheme, SKUIProductPageTableExpandableHeaderView, NSArray, NSNumberFormatter;

@interface SKUIProductPageTableInAppPurchasesSection : SKUIProductPageTableSection {

	SKUIClientContext* _clientContext;
	SKUIColorScheme* _colorScheme;
	SKUIProductPageTableExpandableHeaderView* _headerView;
	NSArray* _inAppPurchases;
	NSNumberFormatter* _numberFormatter;

}

@property (nonatomic,retain) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
-(void)setExpanded:(BOOL)arg1 ;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(long long)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)headerViewForTableView:(id)arg1 ;
-(id)initWithInAppPurchases:(id)arg1 clientContext:(id)arg2 ;
-(void)_reloadHeaderView;
@end

