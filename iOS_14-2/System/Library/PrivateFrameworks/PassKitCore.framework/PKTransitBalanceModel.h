/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSDictionary, PKTransitPassProperties, PKPaymentPass, NSArray, NSMutableArray, NSString;

@interface PKTransitBalanceModel : NSObject {

	NSDictionary* _balancesByID;
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
-(void)setTransitProperties:(id)arg1 ;
-(NSMutableArray *)balanceFields;
-(void)_updateBalancesAndPlans;
-(void)setDynamicBalancesByID:(id)arg1 ;
-(NSArray *)displayableCommutePlans;
-(void)setDynamicBalances:(id)arg1 ;
-(id)balanceForIdentifier:(id)arg1 ;
-(BOOL)hasBalanceContent;
-(BOOL)hasCommutePlanContent;
-(NSString *)primaryDisplayableBalance;
-(id)filteredActionsForDisplayableEntities;
-(NSArray *)displayableBalances;
-(NSArray *)displayableCommutePlanBalances;
-(void)setBalanceFields:(NSMutableArray *)arg1 ;
-(NSArray *)transitCommutePlans;
-(id)initWithPass:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

