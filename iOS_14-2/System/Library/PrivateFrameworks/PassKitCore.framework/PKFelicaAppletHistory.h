/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKTransitAppletHistory.h>

@class NSSet, NSString, NSNumber, PKFelicaShinkansenTicket, PKFelicaGreenCarTicket;

@interface PKFelicaAppletHistory : PKTransitAppletHistory {

	NSSet* _existingKeys;
	BOOL _shinkansenTicketActive;
	BOOL _greenCarTicketUsed;
	BOOL _balanceAllowedForCommute;
	BOOL _lowBalanceNotificationEnabled;
	long long _type;
	NSString* _transactionID;
	NSNumber* _SPID;
	long long _transactionType;
	PKFelicaShinkansenTicket* _shinkansenTicket;
	PKFelicaGreenCarTicket* _greenCarTicket;

}

@property (nonatomic,readonly) long long type;                                                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * transactionID;                                                          //@synthesize transactionID=_transactionID - In the implementation block
@property (setter=PID,nonatomic,copy,readonly) NSNumber * SPID;                                                        //@synthesize SPID=_SPID - In the implementation block
@property (nonatomic,readonly) long long transactionType;                                                              //@synthesize transactionType=_transactionType - In the implementation block
@property (getter=isInShinkansenStation,nonatomic,readonly) BOOL inShinkansenStation; 
@property (getter=isShinkansenTicketActive,nonatomic,readonly) BOOL shinkansenTicketActive;                            //@synthesize shinkansenTicketActive=_shinkansenTicketActive - In the implementation block
@property (getter=isGreenCarTicketUsed,nonatomic,readonly) BOOL greenCarTicketUsed;                                    //@synthesize greenCarTicketUsed=_greenCarTicketUsed - In the implementation block
@property (getter=isBalanceAllowedForCommute,nonatomic,readonly) BOOL balanceAllowedForCommute;                        //@synthesize balanceAllowedForCommute=_balanceAllowedForCommute - In the implementation block
@property (getter=isLowBalanceNotificationEnabled,nonatomic,readonly) BOOL lowBalanceNotificationEnabled;              //@synthesize lowBalanceNotificationEnabled=_lowBalanceNotificationEnabled - In the implementation block
@property (nonatomic,copy,readonly) PKFelicaShinkansenTicket * shinkansenTicket;                                       //@synthesize shinkansenTicket=_shinkansenTicket - In the implementation block
@property (nonatomic,readonly) PKFelicaGreenCarTicket * greenCarTicket;                                                //@synthesize greenCarTicket=_greenCarTicket - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)appletTypeForDictionary:(id)arg1 ;
-(NSNumber *)SPID;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)_addEnrouteTransitType:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 source:(long long)arg2 ;
-(BOOL)isInShinkansenStation;
-(BOOL)isShinkansenTicketActive;
-(PKFelicaShinkansenTicket *)shinkansenTicket;
-(void)sanitizeValuesWithState:(id)arg1 ;
-(PKFelicaGreenCarTicket *)greenCarTicket;
-(BOOL)isGreenCarTicketUsed;
-(BOOL)isBalanceAllowedForCommute;
-(BOOL)isLowBalanceNotificationEnabled;
-(BOOL)isInStation;
-(NSString *)transactionID;
-(long long)transactionType;
-(void)dealloc;
@end

