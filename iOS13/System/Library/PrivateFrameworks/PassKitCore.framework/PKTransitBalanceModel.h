/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSDictionary, NSMutableArray, PKTransitPassProperties, PKPaymentPass, NSArray, NSString;

@interface PKTransitBalanceModel : NSObject {

	NSDictionary* _balancesByID;
	NSMutableArray* _commutePlanBalanceFields;
	PKTransitPassProperties* _transitProperties;
	PKPaymentPass* _pass;
	NSArray* _displayableBalances;
	NSArray* _displayableCommutePlanBalances;
	NSArray* _transitCommutePlans;
	NSArray* _displayableCommutePlans;
	NSMutableArray* _balanceFields;

}

@property (nonatomic,readonly) NSString * primaryDisplayableBalance; 
@property (nonatomic,readonly) NSArray * displayableBalances;                         //@synthesize displayableBalances=_displayableBalances - In the implementation block
@property (nonatomic,readonly) NSArray * displayableCommutePlanBalances;              //@synthesize displayableCommutePlanBalances=_displayableCommutePlanBalances - In the implementation block
@property (nonatomic,readonly) NSArray * transitCommutePlans;                         //@synthesize transitCommutePlans=_transitCommutePlans - In the implementation block
@property (nonatomic,readonly) NSArray * displayableCommutePlans;                     //@synthesize displayableCommutePlans=_displayableCommutePlans - In the implementation block
@property (nonatomic,retain) NSMutableArray * balanceFields;                          //@synthesize balanceFields=_balanceFields - In the implementation block
@property (nonatomic,readonly) BOOL hasBalanceContent; 
@property (nonatomic,readonly) BOOL hasCommutePlanContent; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPass:(id)arg1 ;
-(NSArray *)transitCommutePlans;
-(void)setTransitProperties:(id)arg1 ;
-(NSMutableArray *)balanceFields;
-(void)_addCommutePlanBalanceFieldsToCommutePlanBalanceFields;
-(void)_updateBalancesAndPlans;
-(void)setDynamicBalancesByID:(id)arg1 ;
-(void)setDynamicBalances:(id)arg1 ;
-(id)balanceForIdentifier:(id)arg1 ;
-(BOOL)hasBalanceContent;
-(BOOL)hasCommutePlanContent;
-(NSString *)primaryDisplayableBalance;
-(NSArray *)displayableBalances;
-(NSArray *)displayableCommutePlanBalances;
-(NSArray *)displayableCommutePlans;
-(void)setBalanceFields:(NSMutableArray *)arg1 ;
@end

