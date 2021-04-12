/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class NSArray;

@interface UIMainPrinterUtilityCell : UITableViewCell {

	NSArray* _supplyLevelViews;
	BOOL _showSupplyDataUnderPrinterName;
	NSArray* _supplies;

}

@property (nonatomic,retain) NSArray * supplies;                               //@synthesize supplies=_supplies - In the implementation block
@property (assign,nonatomic) BOOL showSupplyDataUnderPrinterName;              //@synthesize showSupplyDataUnderPrinterName=_showSupplyDataUnderPrinterName - In the implementation block
-(BOOL)showSupplyDataUnderPrinterName;
-(void)setShowSupplyDataUnderPrinterName:(BOOL)arg1 ;
-(NSArray *)supplies;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSupplies:(NSArray *)arg1 ;
@end

