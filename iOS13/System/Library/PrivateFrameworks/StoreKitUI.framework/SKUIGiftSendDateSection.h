/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIGiftTableViewSection.h>

@class NSString, SKUIItem, SKUIGiftTableSectionHeaderView, NSDate;

@interface SKUIGiftSendDateSection : SKUIGiftTableViewSection {

	NSString* _dateString;
	SKUIItem* _giftItem;
	UIEdgeInsets _headerInsets;
	SKUIGiftTableSectionHeaderView* _headerView;
	NSDate* _sendDate;
	long long _sendDateStyle;

}

@property (nonatomic,retain) SKUIItem * giftItem;                    //@synthesize giftItem=_giftItem - In the implementation block
@property (assign,nonatomic) UIEdgeInsets headerInsets; 
@property (nonatomic,copy) NSDate * sendDate;                        //@synthesize sendDate=_sendDate - In the implementation block
@property (assign,nonatomic) long long sendDateStyle;                //@synthesize sendDateStyle=_sendDateStyle - In the implementation block
-(id)_headerView;
-(NSDate *)sendDate;
-(void)setSendDate:(NSDate *)arg1 ;
-(double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(long long)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)updateCell:(id)arg1 forTransitionToSize:(CGSize)arg2 ;
-(void)setSendDateStyle:(long long)arg1 ;
-(id)headerViewForTableView:(id)arg1 ;
-(void)setGiftItem:(SKUIItem *)arg1 ;
-(void)setHeaderInsets:(UIEdgeInsets)arg1 ;
-(void)_createFormattedDateString:(BOOL)arg1 ;
-(UIEdgeInsets)headerInsets;
-(SKUIItem *)giftItem;
-(long long)sendDateStyle;
@end

