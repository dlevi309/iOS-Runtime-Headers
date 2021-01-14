/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)sendDate;
-(id)_headerView;
-(void)setSendDate:(NSDate *)arg1 ;
-(SKUIItem *)giftItem;
-(long long)numberOfRowsInSection;
-(double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)updateCell:(id)arg1 forTransitionToSize:(CGSize)arg2 ;
-(void)setSendDateStyle:(long long)arg1 ;
-(id)headerViewForTableView:(id)arg1 ;
-(void)setGiftItem:(SKUIItem *)arg1 ;
-(void)setHeaderInsets:(UIEdgeInsets)arg1 ;
-(void)_createFormattedDateString:(BOOL)arg1 ;
-(UIEdgeInsets)headerInsets;
-(long long)sendDateStyle;
@end

