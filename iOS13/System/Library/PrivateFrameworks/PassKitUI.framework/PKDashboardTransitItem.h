/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKPassView, PKTransitBalanceModel, NSArray, PKPaymentPass, NSString;

@interface PKDashboardTransitItem : NSObject <PKDashboardItem> {

	PKPassView* _passView;
	unsigned long long _transitItemType;
	PKTransitBalanceModel* _transitBalanceModel;
	NSArray* _transitCommutePlans;

}

@property (assign,nonatomic) unsigned long long transitItemType;                       //@synthesize transitItemType=_transitItemType - In the implementation block
@property (nonatomic,retain) PKTransitBalanceModel * transitBalanceModel;              //@synthesize transitBalanceModel=_transitBalanceModel - In the implementation block
@property (nonatomic,copy) NSArray * transitCommutePlans;                              //@synthesize transitCommutePlans=_transitCommutePlans - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * pass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKPaymentPass *)pass;
-(NSArray *)transitCommutePlans;
-(void)setTransitCommutePlans:(NSArray *)arg1 ;
-(id)initWithPassView:(id)arg1 ;
-(unsigned long long)transitItemType;
-(void)setTransitItemType:(unsigned long long)arg1 ;
-(PKTransitBalanceModel *)transitBalanceModel;
-(void)setTransitBalanceModel:(PKTransitBalanceModel *)arg1 ;
@end

