/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)showSupplyDataUnderPrinterName;
-(void)setSupplies:(NSArray *)arg1 ;
-(NSArray *)supplies;
-(void)setShowSupplyDataUnderPrinterName:(BOOL)arg1 ;
@end

