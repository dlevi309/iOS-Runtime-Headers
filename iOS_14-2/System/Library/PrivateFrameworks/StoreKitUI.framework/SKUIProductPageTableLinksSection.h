/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIProductPageTableSection.h>

@class NSMutableArray, SKUIProductPageItem, SKUIColorScheme;

@interface SKUIProductPageTableLinksSection : SKUIProductPageTableSection {

	NSMutableArray* _actions;
	SKUIProductPageItem* _item;
	NSMutableArray* _titles;
	SKUIColorScheme* _colorScheme;

}

@property (nonatomic,retain) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
-(long long)numberOfRowsInSection;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithItem:(id)arg1 clientContext:(id)arg2 askPermission:(BOOL)arg3 ;
-(id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2 ;
@end

