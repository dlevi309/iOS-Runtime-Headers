/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKTransitPassProperties.h>

@class NSDecimalNumber, NSString;

@interface PKSuicaPassProperties : PKTransitPassProperties {

	BOOL _balanceAllowedForCommute;
	BOOL _lowBalanceGateNotificationEnabled;
	BOOL _greenCarTicketUsed;

}

@property (nonatomic,copy,readonly) NSDecimalNumber * transitBalance; 
@property (nonatomic,copy,readonly) NSString * transitBalanceCurrencyCode; 
@property (getter=isInStation,nonatomic,readonly) BOOL inStation; 
@property (getter=isInShinkansenStation,nonatomic,readonly) BOOL inShinkansenStation; 
@property (getter=isBalanceAllowedForCommute,nonatomic,readonly) BOOL balanceAllowedForCommute;                                //@synthesize balanceAllowedForCommute=_balanceAllowedForCommute - In the implementation block
@property (getter=isLowBalanceGateNotificationEnabled,nonatomic,readonly) BOOL lowBalanceGateNotificationEnabled;              //@synthesize lowBalanceGateNotificationEnabled=_lowBalanceGateNotificationEnabled - In the implementation block
@property (getter=isGreenCarTicketUsed,nonatomic,readonly) BOOL greenCarTicketUsed;                                            //@synthesize greenCarTicketUsed=_greenCarTicketUsed - In the implementation block
@property (getter=isBlacklisted,nonatomic,readonly) BOOL blacklisted; 
+(Class)equalityClass;
+(id)passPropertiesForPass:(id)arg1 ;
-(id)_initWithProperties:(id)arg1 ;
-(BOOL)isLowBalanceGateNotificationEnabled;
-(unsigned long long)hash;
-(BOOL)isInShinkansenStation;
-(BOOL)isGreenCarTicketUsed;
-(BOOL)isBalanceAllowedForCommute;
-(BOOL)isInStation;
-(BOOL)isEqual:(id)arg1 ;
@end

